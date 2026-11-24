package com.rebloom.sakurawarsv;

import android.os.Bundle;
import android.system.Os;
import android.widget.RelativeLayout;
import org.libsdl.app.SDLActivity;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

/** SDL's activity: libmain.so receives the disc and settings from the environment. */
public class GameActivity extends SDLActivity {
    private TouchOverlay overlay;

    @Override
    protected String[] getLibraries() {
        return new String[] { "SDL2", "main" };
    }

    @Override
    protected void onCreate(Bundle state) {
        android.content.Intent i = getIntent();
        set("REBLOOM_DISC", i.getStringExtra("disc"));
        set("REBLOOM_DATA", i.getStringExtra("data"));
        set("REBLOOM_MEMCARD", i.getStringExtra("memcard"));
        set("PS2_LOOK", i.getStringExtra("look"));
        set("PS2_ASPECT", i.getStringExtra("aspect"));
        set("PS2_SCALE", i.getStringExtra("scale"));
        set("PS2_PRESENT_MODE", "fifo");
        set("PS2_WINDOW_TITLE", "Sakura Wars V: So Long, My Love - Rebloom");
        if ("1".equals(i.getStringExtra("dedither"))) set("PS2_BLIT_SHADER", i.getStringExtra("shader"));
        if ("off".equals(i.getStringExtra("deinterlace"))) set("PS2_NO_DEINTERLACE", "1");
        boolean touch = !"0".equals(i.getStringExtra("touch"));
        boolean tap = !"0".equals(i.getStringExtra("tap"));
        set("REBLOOM_TOUCH", touch ? "1" : "0");
        set("REBLOOM_TAP", tap ? "1" : "0");
        installControllerDb();
        super.onCreate(state);
        if (touch) {
            overlay = new TouchOverlay(this, tap);
            mLayout.addView(overlay, new RelativeLayout.LayoutParams(
                    RelativeLayout.LayoutParams.MATCH_PARENT,
                    RelativeLayout.LayoutParams.MATCH_PARENT));
        }
    }

    /** SDL reads this file at start, so Bluetooth pads outside its built-in list still map. */
    private void installControllerDb() {
        try {
            File db = new File(getFilesDir(), "gamecontrollerdb.txt");
            if (!db.isFile() || db.length() == 0) {
                InputStream in = getAssets().open("gamecontrollerdb.txt");
                OutputStream out = new FileOutputStream(db);
                try {
                    byte[] buffer = new byte[16384];
                    int n;
                    while ((n = in.read(buffer)) > 0) out.write(buffer, 0, n);
                } finally {
                    try { in.close(); } catch (Exception ignored) { }
                    try { out.close(); } catch (Exception ignored) { }
                }
            }
            set("SDL_GAMECONTROLLERCONFIG_FILE", db.getAbsolutePath());
        } catch (Exception ignored) {
        }
    }

    @Override
    protected void onPause() {
        if (overlay != null) overlay.resetState();
        super.onPause();
    }

    @Override
    protected void onDestroy() {
        if (overlay != null) overlay.resetState();
        super.onDestroy();
    }

    private static void set(String key, String value) {
        if (value == null || value.length() == 0) return;
        try { Os.setenv(key, value, true); } catch (Exception ignored) { }
    }
}
