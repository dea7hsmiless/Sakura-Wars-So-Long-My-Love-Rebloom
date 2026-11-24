package com.rebloom.sakurawarsv;

import android.app.Activity;
import android.app.ProgressDialog;
import android.content.Intent;
import android.content.SharedPreferences;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.graphics.Insets;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.StatFs;
import android.provider.OpenableColumns;
import android.view.Gravity;
import android.view.View;
import android.view.WindowInsets;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 * Rebloom's Android start screen. It follows the Windows launcher's five pages
 * (Play, Install, Settings, Support, About) and the ReDUB mobile rail.
 */
public class LauncherActivity extends Activity {
    private static final int PICK_ISO = 1001;
    private static final int BG = Color.rgb(24, 11, 20);
    private static final int RAIL = Color.rgb(16, 7, 14);
    private static final int CARD = Color.rgb(43, 20, 35);
    private static final int EDGE = Color.rgb(91, 43, 65);
    private static final int FOOT = Color.rgb(32, 13, 26);
    private static final int GOLD = Color.rgb(245, 169, 193);
    private static final int INK = Color.rgb(255, 244, 239);
    private static final int MUTED = Color.rgb(227, 189, 205);
    private static final int RED = Color.rgb(201, 79, 109);
    private static final String VERSION = "0.1";
    private static final String[] PAGES = { "Play", "Install", "Settings", "Support", "About" };

    private SharedPreferences prefs;
    private File discDir, dataDir;
    private TextView status;
    private TextView heading;
    private TextView subheading;
    private LinearLayout content;
    private final List<TextView> nav = new ArrayList<>();
    private String page = "Play";

    @Override
    protected void onCreate(Bundle saved) {
        super.onCreate(saved);
        prefs = getSharedPreferences("rebloom", MODE_PRIVATE);
        File external = getExternalFilesDir(null);
        if (external == null) external = getFilesDir();
        discDir = new File(external, "discs");
        dataDir = new File(external, "data");
        discDir.mkdirs();
        dataDir.mkdirs();
        buildFrame();
        show("Play");
    }

    @Override
    protected void onResume() {
        super.onResume();
        show(page);
    }

    private int dp(float value) {
        return Math.round(value * getResources().getDisplayMetrics().density);
    }

    private TextView label(String text, float size, boolean bold, int color) {
        TextView v = new TextView(this);
        float shown = size;
        if (size <= 10f) shown = size + 1.5f;
        else if (size <= 13f) shown = size + 1f;
        v.setText(text);
        v.setTextSize(shown);
        v.setTextColor(color);
        v.setTypeface(Typeface.create(bold ? "sans-serif-medium" : "sans-serif", Typeface.NORMAL));
        if (bold && size <= 10.5f) v.setLetterSpacing(0.04f);
        v.setLineSpacing(dp(2), 1f);
        return v;
    }

    private GradientDrawable box(int color, int stroke, float radius) {
        GradientDrawable d = new GradientDrawable();
        d.setColor(color);
        d.setCornerRadius(dp(radius));
        if (stroke != 0) d.setStroke(dp(1), stroke);
        return d;
    }

    private TextView button(String text, boolean primary, View.OnClickListener click) {
        TextView b = label(text, 15, true, INK);
        b.setGravity(Gravity.CENTER);
        b.setPadding(dp(18), dp(10), dp(18), dp(10));
        b.setBackground(box(primary ? RED : CARD, primary ? 0 : EDGE, 9));
        b.setOnClickListener(click);
        return b;
    }

    private LinearLayout card() {
        LinearLayout c = new LinearLayout(this);
        c.setOrientation(LinearLayout.VERTICAL);
        c.setBackground(box(CARD, EDGE, 12));
        c.setPadding(dp(20), dp(16), dp(20), dp(16));
        LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        p.bottomMargin = dp(14);
        c.setLayoutParams(p);
        return c;
    }

    private LinearLayout row() {
        LinearLayout r = new LinearLayout(this);
        r.setOrientation(LinearLayout.HORIZONTAL);
        r.setGravity(Gravity.CENTER_VERTICAL);
        return r;
    }

    private void addButtonRow(LinearLayout card, TextView... buttons) {
        LinearLayout r = row();
        for (int i = 0; i < buttons.length; i++) {
            LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(
                    0, LinearLayout.LayoutParams.WRAP_CONTENT, 1);
            if (i > 0) p.leftMargin = dp(10);
            r.addView(buttons[i], p);
        }
        card.addView(r);
    }

    private void buildFrame() {
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.HORIZONTAL);
        root.setBackgroundColor(BG);
        root.setOnApplyWindowInsetsListener(new View.OnApplyWindowInsetsListener() {
            @Override public WindowInsets onApplyWindowInsets(View v, WindowInsets insets) {
                if (Build.VERSION.SDK_INT >= 30) {
                    Insets bars = insets.getInsets(WindowInsets.Type.systemBars()
                            | WindowInsets.Type.displayCutout());
                    v.setPadding(bars.left, bars.top, bars.right, bars.bottom);
                } else {
                    int left = insets.getSystemWindowInsetLeft();
                    int right = insets.getSystemWindowInsetRight();
                    if (insets.getDisplayCutout() != null) {
                        left = Math.max(left, insets.getDisplayCutout().getSafeInsetLeft());
                        right = Math.max(right, insets.getDisplayCutout().getSafeInsetRight());
                    }
                    v.setPadding(left, insets.getSystemWindowInsetTop(), right,
                            insets.getSystemWindowInsetBottom());
                }
                return insets;
            }
        });

        float widthDp = getResources().getDisplayMetrics().widthPixels
                / getResources().getDisplayMetrics().density;
        int railWidth = dp(widthDp < 800 ? 126 : 160);
        LinearLayout rail = new LinearLayout(this);
        rail.setOrientation(LinearLayout.VERTICAL);
        rail.setBackgroundColor(RAIL);
        rail.setPadding(dp(9), dp(16), dp(9), dp(8));
        root.addView(rail, new LinearLayout.LayoutParams(railWidth, LinearLayout.LayoutParams.MATCH_PARENT));

        LinearLayout brand = new LinearLayout(this);
        brand.setOrientation(LinearLayout.VERTICAL);
        brand.setGravity(Gravity.CENTER_VERTICAL);
        Bitmap railMark = asset("rail_logo.png");
        if (railMark != null) {
            ImageView logo = new ImageView(this);
            logo.setImageBitmap(railMark);
            logo.setScaleType(ImageView.ScaleType.FIT_CENTER);
            brand.addView(logo, new LinearLayout.LayoutParams(
                    LinearLayout.LayoutParams.MATCH_PARENT, dp(42)));
        } else {
            brand.addView(label("REBLOOM", 20, true, GOLD));
            brand.addView(label("SAKURA WARS V", 7, true, MUTED));
        }
        rail.addView(brand, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, dp(54)));

        LinearLayout links = new LinearLayout(this);
        links.setOrientation(LinearLayout.VERTICAL);
        LinearLayout.LayoutParams linksParams = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1);
        linksParams.topMargin = dp(8);
        rail.addView(links, linksParams);
        for (int i = 0; i < PAGES.length; i++) {
            if (i == 3) {
                View spacer = new View(this);
                links.addView(spacer, new LinearLayout.LayoutParams(1, 0, 1));
            }
            final String target = PAGES[i];
            TextView b = label(target, 14, true, MUTED);
            b.setGravity(Gravity.CENTER_VERTICAL);
            b.setPadding(dp(10), 0, dp(10), 0);
            b.setBackground(box(CARD, EDGE, 9));
            b.setOnClickListener(new View.OnClickListener() {
                @Override public void onClick(View v) { show(target); }
            });
            LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(
                    LinearLayout.LayoutParams.MATCH_PARENT, dp(41));
            p.bottomMargin = dp(i == 2 ? 0 : 8);
            links.addView(b, p);
            nav.add(b);
        }

        LinearLayout main = new LinearLayout(this);
        main.setOrientation(LinearLayout.VERTICAL);
        main.setBackgroundColor(BG);
        main.setPadding(0, dp(18), 0, 0);
        root.addView(main, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.MATCH_PARENT, 1));

        heading = label("", 26, true, INK);
        heading.setPadding(dp(22), 0, dp(22), 0);
        main.addView(heading);
        subheading = label("", 11, false, MUTED);
        subheading.setPadding(dp(22), dp(3), dp(22), dp(10));
        main.addView(subheading);

        ScrollView scroll = new ScrollView(this);
        scroll.setFillViewport(true);
        content = new LinearLayout(this);
        content.setOrientation(LinearLayout.VERTICAL);
        scroll.addView(content, new ScrollView.LayoutParams(
                ScrollView.LayoutParams.MATCH_PARENT, ScrollView.LayoutParams.WRAP_CONTENT));
        main.addView(scroll, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1));

        status = label("", 11, false, MUTED);
        status.setBackgroundColor(FOOT);
        status.setGravity(Gravity.CENTER_VERTICAL);
        status.setPadding(dp(20), 0, dp(20), 0);
        main.addView(status, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, dp(25)));

        setContentView(root);
    }

    private void show(String target) {
        page = target;
        boolean playPage = "Play".equals(target);
        if (heading != null) heading.setVisibility(playPage ? View.GONE : View.VISIBLE);
        if (subheading != null) subheading.setVisibility(playPage ? View.GONE : View.VISIBLE);
        for (int i = 0; i < nav.size(); i++) {
            boolean on = PAGES[i].equals(target);
            nav.get(i).setTextColor(on ? INK : MUTED);
            nav.get(i).setBackground(box(on ? RED : CARD, on ? 0 : EDGE, 9));
        }
        content.removeAllViews();
        int pad = playPage ? 0 : dp(22);
        content.setPadding(pad, 0, pad, 0);
        if ("Play".equals(target)) pagePlay();
        else if ("Install".equals(target)) pageInstall();
        else if ("Settings".equals(target)) pageSettings();
        else if ("Support".equals(target)) pageSupport();
        else pageAbout();
        updateStatus();
    }

    private void head(String title, String subtitle) {
        heading.setText(title);
        subheading.setText(subtitle);
    }

    private void pagePlay() {
        String disc = findDisc();
        boolean has = disc != null;
        Bitmap heroArt = asset("hero.jpg");
        if (heroArt != null) {
            // Keep the hero at its own 4:1 shape so the blurred sides are never cropped.
            ImageView hero = new ImageView(this) {
                @Override protected void onMeasure(int widthSpec, int heightSpec) {
                    int width = MeasureSpec.getSize(widthSpec);
                    setMeasuredDimension(width, Math.round(width / 4f));
                }
            };
            hero.setImageBitmap(heroArt);
            hero.setScaleType(ImageView.ScaleType.FIT_XY);
            LinearLayout.LayoutParams heroParams = new LinearLayout.LayoutParams(
                    LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT);
            heroParams.bottomMargin = dp(12);
            content.addView(hero, heroParams);
        }
        LinearLayout body = new LinearLayout(this);
        body.setOrientation(LinearLayout.VERTICAL);
        body.setPadding(dp(22), 0, dp(22), 0);
        content.addView(body, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT));

        TextView title = label("Sakura Wars V: So Long, My Love", 26, true, INK);
        title.setPadding(0, dp(6), 0, 0);
        body.addView(title);
        body.addView(label(has ? "READY  /  ANDROID ARM64" : "NO DISC  /  ANDROID ARM64",
                9, true, GOLD));
        body.addView(label(has ? ("jp".equals(pref("language", "en"))
                        ? "Japanese voices (Disc 2)." : "English voices (Disc 1).")
                        : "Import your own Disc 1 ISO to begin.",
                13, false, MUTED));

        TextView play = button(has ? "Play" : "Import", true, new View.OnClickListener() {
            @Override public void onClick(View v) { play(); }
        });
        TextView imp = button("Import disc...", false, new View.OnClickListener() {
            @Override public void onClick(View v) { chooseDisc(); }
        });
        LinearLayout actions = row();
        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(0,
                LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
        actions.addView(play, lp);
        LinearLayout.LayoutParams ip = new LinearLayout.LayoutParams(0,
                LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
        ip.leftMargin = dp(10);
        actions.addView(imp, ip);
        actions.setPadding(0, dp(12), 0, dp(4));
        body.addView(actions);

        if (has) body.addView(label(new File(disc).getName(), 10, false, MUTED));

        LinearLayout voiceCard = card();
        voiceCard.addView(label("VOICE LANGUAGE", 9, true, MUTED));
        TextView voice = button("jp".equals(pref("language", "en")) ? "Japanese (Disc 2)" : "English (Disc 1)", false,
                new View.OnClickListener() {
                    @Override public void onClick(View v) {
                        setPref("language", "jp".equals(pref("language", "en")) ? "en" : "jp");
                        show("Play");
                    }
                });
        voiceCard.addView(voice);
        voiceCard.addView(label("Japanese voices require importing Disc 2. The launcher picks the matching disc from discs/.",
                11, false, MUTED));
        body.addView(voiceCard);

        LinearLayout touchCard = card();
        touchCard.addView(label("TOUCH CONTROLS", 9, true, MUTED));
        touchCard.addView(label("1".equals(pref("touch", "1"))
                ? "On-screen pad is shown during play. Settings -> Controls changes it."
                : "Touch pad is off. Settings -> Controls turns it on.", 12, false, INK));
        touchCard.addView(label("A Bluetooth controller works at the same time: pair it in Android's Bluetooth settings.",
                10, false, MUTED));
        body.addView(touchCard);
    }

    private void pageInstall() {
        head("Install", "Import a copy of your own disc. The ISO is copied into app storage.");
        LinearLayout card = card();
        card.addView(label("DISC 1 (ENGLISH)", 9, true, MUTED));
        card.addView(label("Choose a plain .iso. The launcher copies it into discs/ and checks the serial. "
                + "The file you imported from can be deleted afterwards.", 12, false, INK));
        TextView imp = button("Import disc...", true, new View.OnClickListener() {
            @Override public void onClick(View v) { chooseDisc(); }
        });
        addButtonRow(card, imp);
        content.addView(card);

        LinearLayout card2 = card();
        card2.addView(label("DISC 2 (JAPANESE)", 9, true, MUTED));
        card2.addView(label("Import Disc 2 as well for Japanese voices. The voice switch is on the Play page.", 12, false, INK));
        TextView imp2 = button("Import Disc 2...", false, new View.OnClickListener() {
            @Override public void onClick(View v) { chooseDisc(); }
        });
        addButtonRow(card2, imp2);
        content.addView(card2);

        LinearLayout card3 = card();
        card3.addView(label("STORAGE", 9, true, MUTED));
        card3.addView(label("Free space: " + freeSpace() + "\nFolder: " + discDir.getAbsolutePath(), 10, false, MUTED));
        content.addView(card3);
    }

    private void pageSettings() {
        head("Settings", "Changes apply on the next game launch.");
        LinearLayout display = card();
        display.addView(label("DISPLAY", 10, true, GOLD));
        choiceRow(display, "Aspect", "aspect",
                new String[] { "16:9 (fit)", "4:3 (original)", "Fill (stretch)" },
                new String[] { "16:9", "4:3", "fill" }, "16:9");
        choiceRow(display, "Internal resolution", "scale", new String[] { "1x (native)", "2x", "3x" },
                new String[] { "1", "2", "3" }, "3");
        content.addView(display);

        LinearLayout graphics = card();
        graphics.addView(label("GRAPHICS", 10, true, GOLD));
        choiceRow(graphics, "Picture look", "look",
                new String[] { "Crisp", "Crisp + edges", "Soft", "Soft + edges", "Sharp", "Sharp + edges" },
                new String[] { "0", "1", "2", "3", "4", "5" }, "1");
        choiceRow(graphics, "Deinterlace", "deinterlace", new String[] { "Off (sharp)", "Blend" },
                new String[] { "off", "blend" }, "off");
        content.addView(graphics);

        LinearLayout controls = card();
        controls.addView(label("CONTROLS", 10, true, GOLD));
        choiceRow(controls, "On-screen controls", "touch", new String[] { "On", "Off" },
                new String[] { "1", "0" }, "1");
        choiceRow(controls, "Touch color", "touch_color",
                new String[] { "Sakura", "Gold", "Sky", "Rose", "Mint", "White" },
                new String[] { "#F5A9C1", "#E8C46A", "#7CC7FF", "#FF8FA3", "#8FE3C0", "#F2ECE4" }, "#F5A9C1");
        choiceRow(controls, "Touch opacity", "touch_opacity",
                new String[] { "35%", "45%", "55%", "70%", "85%", "100%" },
                new String[] { "0.35", "0.45", "0.55", "0.7", "0.85", "1" }, "0.7");
        choiceRow(controls, "Button haptics", "haptics", new String[] { "On", "Off" },
                new String[] { "1", "0" }, "1");
        choiceRow(controls, "Stick haptics", "stick_haptics", new String[] { "On", "Off" },
                new String[] { "1", "0" }, "1");
        choiceRow(controls, "Tap to advance", "tap_advance", new String[] { "On", "Off" },
                new String[] { "1", "0" }, "1");
        controls.addView(label("Touch color and opacity apply to the on-screen pad immediately at the next launch. "
                + "Stick haptics click when the analog leaves the centre and reaches the outer ring. "
                + "Keyboard and gamepad bindings live in game/data/keys.ini and gamepad.ini. "
                + "A Bluetooth controller uses the standard mapping and works beside the touch pad.", 10, false, MUTED));
        content.addView(controls);

        LinearLayout advanced = card();
        advanced.addView(label("ADVANCED", 10, true, GOLD));
        choiceRow(advanced, "De-dither", "dedither", new String[] { "On (temporal)", "Off" },
                new String[] { "1", "0" }, "1");
        TextView clear = button("Clear game cache", false, new View.OnClickListener() {
            @Override public void onClick(View v) { clearCache(); }
        });
        addButtonRow(advanced, clear);
        advanced.addView(label("Removes logs, states and translated-code caches. Memory cards are kept.", 10, false, MUTED));
        content.addView(advanced);
    }

    private void choiceRow(LinearLayout card, String title, String key, String[] labels, String[] values, String fallback) {
        LinearLayout r = row();
        TextView name = label(title, 13, false, INK);
        name.setLayoutParams(new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1));
        r.addView(name);
        final String[] options = labels;
        final String[] tokens = values;
        final String k = key;
        String current = pref(key, fallback);
        int index = 0;
        for (int i = 0; i < tokens.length; i++) if (tokens[i].equals(current)) index = i;
        final int[] at = { index };
        TextView value = button(labels[index], false, new View.OnClickListener() {
            @Override public void onClick(View v) {
                at[0] = (at[0] + 1) % tokens.length;
                setPref(k, tokens[at[0]]);
                show(page);
            }
        });
        value.setPadding(dp(14), dp(8), dp(14), dp(8));
        r.addView(value);
        r.setPadding(0, dp(5), 0, dp(5));
        card.addView(r);
    }

    private void pageSupport() {
        head("Support", "What the launcher did, and where things are. Nothing is uploaded.");
        LinearLayout card = card();
        card.addView(label("DIAGNOSTICS", 9, true, MUTED));
        String disc = findDisc();
        card.addView(label("Rebloom " + VERSION + " / Android arm64\n"
                + "disc: " + (disc != null ? new File(disc).getName() : "none") + "\n"
                + "language: " + (("jp".equals(pref("language", "en"))) ? "Japanese" : "English") + "\n"
                + "touch: " + ("1".equals(pref("touch", "1")) ? "on" : "off") + "\n"
                + "folder: " + dataDir.getAbsolutePath(), 11, false, INK));
        TextView share = button("Share diagnostics", false, new View.OnClickListener() {
            @Override public void onClick(View v) { shareDiagnostics(); }
        });
        addButtonRow(card, share);
        content.addView(card);

        LinearLayout card2 = card();
        card2.addView(label("CONTROLS", 9, true, MUTED));
        card2.addView(label("Pair a Bluetooth controller in Android's Bluetooth settings before or during play. "
                + "The game opens it automatically. Use Settings -> Controls to turn the on-screen pad on or off.", 11, false, INK));
        content.addView(card2);
    }

    private void pageAbout() {
        head("About", "Rebloom " + VERSION);
        LinearLayout card = card();
        card.addView(label("Sakura Wars V: So Long, My Love - Rebloom", 15, true, INK));
        card.addView(label("A native Android build made by static recompilation. No emulator, no BIOS; "
                + "the game's own code is translated ahead of time.\n\n"
                + "This package contains the port only. You need your own discs; no game data is included or uploaded.\n\n"
                + "Rebloom is a fan project. Sakura Wars is a trademark of SEGA. "
                + "Launcher design follows the ReDUB launcher's model.", 11, false, MUTED));
        content.addView(card);
        LinearLayout card2 = card();
        card2.addView(label("VERSION", 9, true, MUTED));
        card2.addView(label(VERSION, 14, true, GOLD));
        content.addView(card2);
    }

    private String pref(String key, String fallback) {
        return prefs.getString(key, fallback);
    }

    private Bitmap asset(String name) {
        try (InputStream in = getAssets().open(name)) {
            return BitmapFactory.decodeStream(in);
        } catch (Exception ignored) {
            return null;
        }
    }

    private void setPref(String key, String value) {
        prefs.edit().putString(key, value).apply();
    }

    private String findDisc() {
        File[] files = discDir.listFiles();
        if (files == null) return null;
        List<File> isos = new ArrayList<File>();
        for (File f : files) if (f.getName().toLowerCase().endsWith(".iso")) isos.add(f);
        if (isos.isEmpty()) return null;
        Collections.sort(isos);
        String lang = pref("language", "en");
        String[] prefer = "jp".equals(lang)
                ? new String[] { "disc 2", "disc2", "japanese" }
                : new String[] { "disc 1", "disc1", "english" };
        for (String want : prefer)
            for (File f : isos)
                if (f.getName().toLowerCase().contains(want)) return f.getAbsolutePath();
        if (isos.size() == 1) {
            String n = isos.get(0).getName().toLowerCase();
            if (!n.contains("disc 1") && !n.contains("disc 2") && !n.contains("english") && !n.contains("japanese"))
                return isos.get(0).getAbsolutePath();
        }
        return null;
    }

    private static String serialLanguage(File file) {
        FileInputStream in = null;
        try {
            in = new FileInputStream(file);
            byte[] head = new byte[4 << 20];
            int n = in.read(head);
            String text = new String(head, 0, Math.max(0, n), StandardCharsets.ISO_8859_1);
            if (text.contains("SLUS_219.27")) return "en";
            if (text.contains("SLUS_219.30")) return "jp";
        } catch (Exception ignored) {
        } finally {
            try { if (in != null) in.close(); } catch (IOException ignored) { }
        }
        return "";
    }

    private String freeSpace() {
        try {
            StatFs stat = new StatFs(discDir.getAbsolutePath());
            long bytes = stat.getAvailableBytes();
            return String.format(java.util.Locale.US, "%.1f GB", bytes / 1e9);
        } catch (Exception e) {
            return "unknown";
        }
    }

    private void updateStatus() {
        String disc = findDisc();
        String lang = "jp".equals(pref("language", "en")) ? "Japanese voices" : "English voices";
        String look = pref("look", "1");
        status.setText((disc != null ? "Ready" : "No disc") + "  /  " + lang + "  /  " + pref("aspect", "16:9")
                + "  /  " + pref("scale", "3") + "x  /  touch " + ("1".equals(pref("touch", "1")) ? "on" : "off")
                + "  /  look " + look);
    }

    private void chooseDisc() {
        Intent i = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        i.addCategory(Intent.CATEGORY_OPENABLE);
        i.setType("*/*");
        startActivityForResult(i, PICK_ISO);
    }

    @Override
    protected void onActivityResult(int request, int result, Intent data) {
        super.onActivityResult(request, result, data);
        if (request == PICK_ISO && result == RESULT_OK && data != null && data.getData() != null)
            importDisc(data.getData());
    }

    private String displayName(Uri uri) {
        Cursor c = getContentResolver().query(uri, null, null, null, null);
        try {
            if (c != null && c.moveToFirst()) {
                int i = c.getColumnIndex(OpenableColumns.DISPLAY_NAME);
                if (i >= 0) return c.getString(i);
            }
        } finally { if (c != null) c.close(); }
        return "disc.iso";
    }

    private void importDisc(final Uri uri) {
        final String name = displayName(uri);
        if (!name.toLowerCase().endsWith(".iso")) {
            Toast.makeText(this, "Only a plain .iso can be imported.", Toast.LENGTH_LONG).show();
            return;
        }
        final ProgressDialog progress = new ProgressDialog(this);
        progress.setMessage("Importing " + name + "...");
        progress.setCancelable(false);
        progress.show();
        new Thread(new Runnable() {
            @Override public void run() {
                File target = new File(discDir, name);
                boolean ok = false;
                String message = "";
                InputStream in = null;
                OutputStream out = null;
                try {
                    in = getContentResolver().openInputStream(uri);
                    out = new FileOutputStream(target);
                    byte[] buffer = new byte[1 << 20];
                    int n;
                    while ((n = in.read(buffer)) > 0) out.write(buffer, 0, n);
                    ok = true;
                } catch (Exception e) {
                    message = e.getMessage();
                } finally {
                    try { if (in != null) in.close(); } catch (IOException ignored) { }
                    try { if (out != null) out.close(); } catch (IOException ignored) { }
                }
                if (ok) {
                    String lang = serialLanguage(target);
                    if (!lang.isEmpty()) setPref("language", lang);
                } else {
                    target.delete();
                }
                final boolean good = ok;
                final String why = message;
                runOnUiThread(new Runnable() {
                    @Override public void run() {
                        if (progress.isShowing()) progress.dismiss();
                        if (good) Toast.makeText(LauncherActivity.this, "Imported " + name, Toast.LENGTH_LONG).show();
                        else Toast.makeText(LauncherActivity.this, "Import failed: " + why, Toast.LENGTH_LONG).show();
                        show(page);
                    }
                });
            }
        }).start();
    }

    private void copyAsset(String name, File target) throws IOException {
        if (target.exists() && target.length() > 0) return;
        InputStream in = getAssets().open(name);
        OutputStream out = new FileOutputStream(target);
        try {
            byte[] buffer = new byte[16384];
            int n;
            while ((n = in.read(buffer)) > 0) out.write(buffer, 0, n);
        } finally {
            try { in.close(); } catch (IOException ignored) { }
            try { out.close(); } catch (IOException ignored) { }
        }
    }

    private void play() {
        String disc = findDisc();
        if (disc == null) { chooseDisc(); return; }
        try {
            File shader = new File(dataDir, "blit-dedither.wgsl");
            copyAsset("blit-dedither.wgsl", shader);
            String lang = pref("language", "en");
            Intent i = new Intent(this, GameActivity.class);
            i.putExtra("disc", disc);
            i.putExtra("data", dataDir.getAbsolutePath());
            i.putExtra("memcard", new File(dataDir, "jp".equals(lang) ? "play-japanese.ps2" : "play-english.ps2").getAbsolutePath());
            i.putExtra("look", pref("look", "1"));
            i.putExtra("aspect", pref("aspect", "16:9"));
            i.putExtra("scale", pref("scale", "3"));
            i.putExtra("dedither", pref("dedither", "1"));
            i.putExtra("deinterlace", pref("deinterlace", "off"));
            i.putExtra("touch", pref("touch", "1"));
            i.putExtra("tap", pref("tap_advance", "1"));
            i.putExtra("haptics", pref("haptics", "1"));
            i.putExtra("stick_haptics", pref("stick_haptics", "1"));
            i.putExtra("touch_color", pref("touch_color", "#F5A9C1"));
            i.putExtra("touch_opacity", pref("touch_opacity", "0.7"));
            i.putExtra("shader", shader.getAbsolutePath());
            startActivity(i);
        } catch (Exception e) {
            Toast.makeText(this, "The game could not start: " + e.getMessage(), Toast.LENGTH_LONG).show();
        }
    }

    private void clearCache() {
        for (String name : new String[] { "logs", "states", "vu1-live", "ee-live", "cache" }) {
            deleteTree(new File(dataDir, name));
        }
        Toast.makeText(this, "Game cache cleared. Memory cards were kept.", Toast.LENGTH_LONG).show();
        show(page);
    }

    private static void deleteTree(File file) {
        if (file == null || !file.exists()) return;
        File[] children = file.listFiles();
        if (children != null) for (File child : children) deleteTree(child);
        file.delete();
    }

    private void shareDiagnostics() {
        String disc = findDisc();
        String text = "Rebloom " + VERSION + " / Android arm64\n"
                + "disc: " + (disc != null ? disc : "none") + "\n"
                + "language: " + pref("language", "en") + "\n"
                + "touch: " + pref("touch", "1") + "\n"
                + "folder: " + dataDir.getAbsolutePath();
        Intent send = new Intent(Intent.ACTION_SEND);
        send.setType("text/plain");
        send.putExtra(Intent.EXTRA_TEXT, text);
        startActivity(Intent.createChooser(send, "Share diagnostics"));
    }
}
