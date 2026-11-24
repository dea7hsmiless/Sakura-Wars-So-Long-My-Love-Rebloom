package com.rebloom.sakurawarsv;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.os.SystemClock;
import android.util.SparseIntArray;
import android.util.SparseLongArray;
import android.view.MotionEvent;
import android.view.View;

/**
 * The on-screen pad. It feeds the runtime's first controller port beside the
 * keyboard and any real Bluetooth controller, so both keep working.
 */
public class TouchOverlay extends View {
    private static final int CROSS = 0, CIRCLE = 1, SQUARE = 2, TRIANGLE = 3;
    private static final int L1 = 4, R1 = 5, L2 = 6, R2 = 7;
    private static final int START = 10, SELECT = 11;
    private static final int UP = 12, DOWN = 13, LEFT = 14, RIGHT = 15;
    private static final int DPAD = -1;

    private static final int GOLD = Color.rgb(232, 196, 106);
    private static final int INK = Color.rgb(242, 236, 228);
    private static final int RED = Color.rgb(176, 58, 72);

    private static native void nativeButton(int button, boolean down);
    private static native void nativeStick(int which, int x, int y);
    private static native void nativeTrigger(int which, int value);
    private static native void nativeTap();
    private static native void nativeReset();

    private final Paint fill = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint stroke = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint text = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Path path = new Path();
    private final SparseIntArray roles = new SparseIntArray();
    private final SparseLongArray emptyAt = new SparseLongArray();
    private final SparseIntArray emptyX = new SparseIntArray();
    private final SparseIntArray emptyY = new SparseIntArray();
    private final boolean tapAdvance;
    private final boolean[] held = new boolean[16];
    private final RectF[] face = new RectF[4];
    private final RectF[] shoulder = new RectF[4];
    private final RectF startRect = new RectF();
    private final RectF selectRect = new RectF();

    private float dpadX, dpadY, dpadR;
    private float faceX, faceY, faceR, faceButtonR;
    private float unit;
    private int dpadPointer = -1;
    private boolean up, down, left, right;
    private int lastLx = 128, lastLy = 128;

    public TouchOverlay(Context context, boolean tapAdvance) {
        super(context);
        this.tapAdvance = tapAdvance;
        setFocusable(false);
        setFocusableInTouchMode(false);
        setClickable(false);
        setBackgroundColor(Color.TRANSPARENT);
        fill.setStyle(Paint.Style.FILL);
        stroke.setStyle(Paint.Style.STROKE);
        stroke.setStrokeWidth(3f);
        text.setTextAlign(Paint.Align.CENTER);
        text.setTypeface(Typeface.create("sans-serif", Typeface.BOLD));
        for (int i = 0; i < face.length; i++) face[i] = new RectF();
        for (int i = 0; i < shoulder.length; i++) shoulder[i] = new RectF();
    }

    @Override
    protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        super.onSizeChanged(w, h, oldw, oldh);
        unit = Math.min(w, h);
        dpadX = w * 0.16f;
        dpadY = h * 0.72f;
        dpadR = unit * 0.145f;
        faceX = w * 0.84f;
        faceY = h * 0.72f;
        faceR = unit * 0.125f;
        faceButtonR = unit * 0.063f;
        float small = unit * 0.058f;
        float left = w * 0.11f, right = w * 0.89f;
        shoulder[0].set(left - small, h * 0.13f - small, left + small, h * 0.13f + small);  // L1
        shoulder[1].set(right - small, h * 0.13f - small, right + small, h * 0.13f + small); // R1
        float small2 = unit * 0.05f;
        shoulder[2].set(left - small2, h * 0.28f - small2, left + small2, h * 0.28f + small2); // L2
        shoulder[3].set(right - small2, h * 0.28f - small2, right + small2, h * 0.28f + small2); // R2
        float sw = w * 0.095f, sh = unit * 0.06f;
        selectRect.set(w * 0.42f - sw / 2, h * 0.07f - sh / 2, w * 0.42f + sw / 2, h * 0.07f + sh / 2);
        startRect.set(w * 0.58f - sw / 2, h * 0.07f - sh / 2, w * 0.58f + sw / 2, h * 0.07f + sh / 2);
        stroke.setStrokeWidth(Math.max(2f, unit * 0.006f));
        text.setTextSize(unit * 0.042f);
        rect(face[CROSS], faceX, faceY + faceR);
        rect(face[CIRCLE], faceX + faceR, faceY);
        rect(face[SQUARE], faceX - faceR, faceY);
        rect(face[TRIANGLE], faceX, faceY - faceR);
    }

    private void rect(RectF r, float x, float y) {
        r.set(x - faceButtonR, y - faceButtonR, x + faceButtonR, y + faceButtonR);
    }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        if (unit <= 0) return;
        // left pad: outer ring and four directions
        fill.setColor(Color.argb(70, 8, 6, 5));
        canvas.drawCircle(dpadX, dpadY, dpadR, fill);
        stroke.setColor(Color.argb(150, 232, 196, 106));
        canvas.drawCircle(dpadX, dpadY, dpadR, stroke);
        stroke.setColor(Color.argb(90, 232, 196, 106));
        float inner = dpadR * 0.68f;
        canvas.drawCircle(dpadX, dpadY, inner, stroke);
        arrow(canvas, dpadX, dpadY - (inner + dpadR) / 2, 0, up);
        arrow(canvas, dpadX, dpadY + (inner + dpadR) / 2, 180, down);
        arrow(canvas, dpadX - (inner + dpadR) / 2, dpadY, 270, left);
        arrow(canvas, dpadX + (inner + dpadR) / 2, dpadY, 90, right);

        // face buttons
        faceSymbol(canvas, CROSS);
        faceSymbol(canvas, CIRCLE);
        faceSymbol(canvas, SQUARE);
        faceSymbol(canvas, TRIANGLE);

        // shoulders
        shoulderButton(canvas, shoulder[0], "L1", L1);
        shoulderButton(canvas, shoulder[1], "R1", R1);
        shoulderButton(canvas, shoulder[2], "L2", L2);
        shoulderButton(canvas, shoulder[3], "R2", R2);

        // Start and Select
        pill(canvas, selectRect, "SEL", SELECT);
        pill(canvas, startRect, "START", START);
    }

    private void arrow(Canvas canvas, float x, float y, float rotation, boolean on) {
        canvas.save();
        canvas.rotate(rotation, x, y);
        float s = dpadR * 0.17f;
        path.reset();
        path.moveTo(x, y - s);
        path.lineTo(x - s * 0.9f, y + s * 0.7f);
        path.lineTo(x + s * 0.9f, y + s * 0.7f);
        path.close();
        fill.setColor(on ? Color.argb(220, 232, 196, 106) : Color.argb(135, 232, 196, 106));
        canvas.drawPath(path, fill);
        canvas.restore();
    }

    private void faceSymbol(Canvas canvas, int id) {
        RectF r = face[id];
        float cx = r.centerX(), cy = r.centerY();
        fill.setColor(held[id] ? Color.argb(210, 176, 58, 72) : Color.argb(85, 8, 6, 5));
        canvas.drawCircle(cx, cy, faceButtonR, fill);
        stroke.setColor(held[id] ? Color.argb(255, 242, 236, 228) : Color.argb(190, 232, 196, 106));
        stroke.setStrokeWidth(held[id] ? Math.max(3f, unit * 0.008f) : Math.max(2f, unit * 0.006f));
        canvas.drawCircle(cx, cy, faceButtonR, stroke);
        float s = faceButtonR * 0.48f;
        stroke.setColor(held[id] ? Color.argb(255, 242, 236, 228) : Color.argb(215, 232, 196, 106));
        if (id == CROSS) {
            canvas.drawLine(cx - s, cy - s, cx + s, cy + s, stroke);
            canvas.drawLine(cx + s, cy - s, cx - s, cy + s, stroke);
        } else if (id == CIRCLE) {
            canvas.drawCircle(cx, cy, s, stroke);
        } else if (id == SQUARE) {
            canvas.drawRect(cx - s, cy - s, cx + s, cy + s, stroke);
        } else {
            path.reset();
            path.moveTo(cx, cy - s * 1.1f);
            path.lineTo(cx - s, cy + s * 0.75f);
            path.lineTo(cx + s, cy + s * 0.75f);
            path.close();
            canvas.drawPath(path, stroke);
        }
    }

    private void shoulderButton(Canvas canvas, RectF r, String label, int id) {
        fill.setColor(held[id] ? Color.argb(210, 176, 58, 72) : Color.argb(80, 8, 6, 5));
        canvas.drawRoundRect(r, r.width() * 0.35f, r.height() * 0.35f, fill);
        stroke.setColor(Color.argb(held[id] ? 255 : 175, 232, 196, 106));
        canvas.drawRoundRect(r, r.width() * 0.35f, r.height() * 0.35f, stroke);
        text.setColor(held[id] ? INK : GOLD);
        text.setTextSize(r.height() * 0.55f);
        canvas.drawText(label, r.centerX(), r.centerY() + r.height() * 0.20f, text);
    }

    private void pill(Canvas canvas, RectF r, String label, int id) {
        fill.setColor(held[id] ? Color.argb(210, 176, 58, 72) : Color.argb(80, 8, 6, 5));
        canvas.drawRoundRect(r, r.height() * 0.45f, r.height() * 0.45f, fill);
        stroke.setColor(Color.argb(held[id] ? 255 : 165, 232, 196, 106));
        canvas.drawRoundRect(r, r.height() * 0.45f, r.height() * 0.45f, stroke);
        text.setColor(held[id] ? INK : GOLD);
        text.setTextSize(r.height() * 0.48f);
        canvas.drawText(label, r.centerX(), r.centerY() + r.height() * 0.18f, text);
    }

    private boolean inDpad(float x, float y) {
        float dx = x - dpadX, dy = y - dpadY;
        return dx * dx + dy * dy <= dpadR * dpadR * 1.75f;
    }

    private int hitButton(float x, float y) {
        for (int i = 0; i < 4; i++)
            if (distance(x, y, face[i].centerX(), face[i].centerY()) <= faceButtonR * 1.3f) return i;
        for (int i = 0; i < 4; i++)
            if (shoulder[i].contains(x, y)) return L1 + i;
        if (selectRect.contains(x, y)) return SELECT;
        if (startRect.contains(x, y)) return START;
        return -1;
    }

    private float distance(float x1, float y1, float x2, float y2) {
        float dx = x1 - x2, dy = y1 - y2;
        return (float) Math.sqrt(dx * dx + dy * dy);
    }

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        switch (event.getActionMasked()) {
            case MotionEvent.ACTION_DOWN:
            case MotionEvent.ACTION_POINTER_DOWN: {
                int index = event.getActionIndex();
                int id = event.getPointerId(index);
                float x = event.getX(index), y = event.getY(index);
                if (dpadPointer < 0 && inDpad(x, y)) {
                    dpadPointer = id;
                    roles.put(id, DPAD);
                    moveDpad(x, y);
                } else {
                    int button = hitButton(x, y);
                    if (button >= 0) {
                        roles.put(id, button);
                        press(button, true);
                    } else {
                        roles.put(id, -2);
                        if (tapAdvance) {
                            emptyAt.put(id, SystemClock.uptimeMillis());
                            emptyX.put(id, (int) x);
                            emptyY.put(id, (int) y);
                        }
                    }
                }
                return true;
            }
            case MotionEvent.ACTION_MOVE: {
                for (int i = 0; i < event.getPointerCount(); i++) {
                    int id = event.getPointerId(i);
                    if (roles.get(id, -3) == DPAD) moveDpad(event.getX(i), event.getY(i));
                }
                return true;
            }
            case MotionEvent.ACTION_UP:
            case MotionEvent.ACTION_POINTER_UP: {
                int index = event.getActionIndex();
                releasePointer(event.getPointerId(index), event.getX(index), event.getY(index));
                return true;
            }
            case MotionEvent.ACTION_CANCEL:
                resetState();
                return true;
            default:
                return true;
        }
    }

    private void releasePointer(int id, float x, float y) {
        int role = roles.get(id, -3);
        roles.delete(id);
        if (role == DPAD) {
            if (dpadPointer == id) dpadPointer = -1;
            up = down = left = right = false;
            nativeButton(UP, false);
            nativeButton(DOWN, false);
            nativeButton(LEFT, false);
            nativeButton(RIGHT, false);
            lastLx = lastLy = 128;
            nativeStick(0, 128, 128);
            invalidate();
        } else if (role >= 0) {
            press(role, false);
        } else if (role == -2 && tapAdvance) {
            long started = emptyAt.get(id, -1);
            int sx = emptyX.get(id, 0), sy = emptyY.get(id, 0);
            emptyAt.delete(id);
            emptyX.delete(id);
            emptyY.delete(id);
            if (started >= 0) {
                long elapsed = SystemClock.uptimeMillis() - started;
                float dx = x - sx, dy = y - sy;
                float limit = 22 * getResources().getDisplayMetrics().density;
                if (elapsed <= 350 && dx * dx + dy * dy <= limit * limit) nativeTap();
            }
        }
    }

    private void moveDpad(float x, float y) {
        float dx = x - dpadX, dy = y - dpadY;
        float len = (float) Math.sqrt(dx * dx + dy * dy);
        int lx = 128, ly = 128;
        if (len > dpadR * 0.22f) {
            float nx = Math.max(-1f, Math.min(1f, dx / dpadR));
            float ny = Math.max(-1f, Math.min(1f, dy / dpadR));
            if (len > dpadR) {
                nx = dx / len;
                ny = dy / len;
            }
            lx = Math.round(128 + nx * 127);
            ly = Math.round(128 + ny * 127);
        }
        if (lx != lastLx || ly != lastLy) {
            lastLx = lx;
            lastLy = ly;
            nativeStick(0, lx, ly);
        }
        float threshold = dpadR * 0.30f;
        setDir(UP, dy < -threshold);
        setDir(DOWN, dy > threshold);
        setDir(LEFT, dx < -threshold);
        setDir(RIGHT, dx > threshold);
        invalidate();
    }

    private void setDir(int button, boolean on) {
        boolean current;
        if (button == UP) current = up;
        else if (button == DOWN) current = down;
        else if (button == LEFT) current = left;
        else current = right;
        if (current == on) return;
        if (button == UP) up = on;
        else if (button == DOWN) down = on;
        else if (button == LEFT) left = on;
        else right = on;
        nativeButton(button, on);
    }

    private void press(int button, boolean on) {
        if (button < 0 || button >= held.length || held[button] == on) return;
        held[button] = on;
        nativeButton(button, on);
        if (on) performHapticFeedback(android.view.HapticFeedbackConstants.KEYBOARD_TAP);
        invalidate();
    }

    public void resetState() {
        roles.clear();
        emptyAt.clear();
        emptyX.clear();
        emptyY.clear();
        dpadPointer = -1;
        up = down = left = right = false;
        for (int i = 0; i < held.length; i++) held[i] = false;
        lastLx = lastLy = 128;
        nativeReset();
        invalidate();
    }

    @Override
    protected void onDetachedFromWindow() {
        resetState();
        super.onDetachedFromWindow();
    }
}
