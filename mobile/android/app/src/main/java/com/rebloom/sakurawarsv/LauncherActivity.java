package com.rebloom.sakurawarsv;

import android.app.Activity;
import android.app.ProgressDialog;
import android.content.Intent;
import android.content.SharedPreferences;
import android.database.Cursor;
import android.graphics.Color;
import android.graphics.Typeface;
import android.net.Uri;
import android.os.Bundle;
import android.provider.OpenableColumns;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
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
import java.util.Arrays;
import java.util.List;

/** Rebloom's Android start screen. The game itself is SDLActivity in GameActivity. */
public class LauncherActivity extends Activity {
    private static final int PICK_ISO = 1001;
    private static final int BG = Color.rgb(18, 13, 11);
    private static final int CARD = Color.rgb(34, 25, 20);
    private static final int GOLD = Color.rgb(232, 196, 106);
    private static final int INK = Color.rgb(242, 236, 228);
    private static final int MUTED = Color.rgb(169, 156, 142);
    private static final int RED = Color.rgb(176, 58, 72);

    private SharedPreferences prefs;
    private File discDir, dataDir;
    private TextView discLabel, discDetail, status;
    private Button play, voice, look, scale, aspect, dedither, deinterlace;

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
        buildUi();
    }

    @Override
    protected void onResume() {
        super.onResume();
        refresh();
    }

    private TextView label(String text, float size, boolean bold, int color) {
        TextView v = new TextView(this);
        v.setText(text);
        v.setTextSize(size);
        v.setTextColor(color);
        if (bold) v.setTypeface(Typeface.DEFAULT_BOLD);
        return v;
    }

    private Button action(String text, boolean primary) {
        Button b = new Button(this);
        b.setText(text);
        b.setAllCaps(false);
        b.setTextColor(INK);
        b.setTextSize(15);
        b.setTypeface(Typeface.DEFAULT_BOLD);
        b.setBackgroundColor(primary ? RED : CARD);
        LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        p.rightMargin = 10;
        b.setLayoutParams(p);
        b.setPadding(28, 10, 28, 10);
        return b;
    }

    private LinearLayout card() {
        LinearLayout c = new LinearLayout(this);
        c.setOrientation(LinearLayout.VERTICAL);
        c.setBackgroundColor(CARD);
        c.setPadding(22, 16, 22, 16);
        LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        p.bottomMargin = 14;
        c.setLayoutParams(p);
        return c;
    }

    private LinearLayout row() {
        LinearLayout r = new LinearLayout(this);
        r.setOrientation(LinearLayout.HORIZONTAL);
        r.setGravity(Gravity.CENTER_VERTICAL);
        return r;
    }

    private void buildUi() {
        ScrollView scroll = new ScrollView(this);
        scroll.setBackgroundColor(BG);
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setPadding(26, 22, 26, 22);
        scroll.addView(root);

        TextView brand = label("REBLOOM", 30, true, GOLD);
        root.addView(brand);
        root.addView(label("SAKURA WARS V  /  SO LONG, MY LOVE", 10, true, MUTED));
        TextView tag = label("So Long, My Love, rebuilt for Android.", 14, false, INK);
        tag.setPadding(0, 14, 0, 14);
        root.addView(tag);

        LinearLayout discCard = card();
        discCard.addView(label("DISC", 10, true, MUTED));
        discLabel = label("No disc imported yet", 17, true, INK);
        discCard.addView(discLabel);
        discDetail = label("Import your own Disc 1 ISO to begin.", 12, false, MUTED);
        discCard.addView(discDetail);
        LinearLayout actions = row();
        play = action("Play", true);
        play.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) { play(); }
        });
        Button imp = action("Import disc...", false);
        imp.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) { chooseDisc(); }
        });
        actions.addView(play);
        actions.addView(imp);
        discCard.addView(actions);
        root.addView(discCard);

        LinearLayout voiceCard = card();
        voiceCard.addView(label("VOICE LANGUAGE", 10, true, MUTED));
        voice = action("", false);
        voice.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                setPref("language", "jp".equals(pref("language", "en")) ? "en" : "jp");
                refresh();
            }
        });
        voiceCard.addView(voice);
        voiceCard.addView(label("Japanese voices require importing Disc 2.", 11, false, MUTED));
        root.addView(voiceCard);

        LinearLayout settings = card();
        settings.addView(label("SETTINGS (APPLIED NEXT LAUNCH)", 10, true, MUTED));
        look = action("", false);
        look.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                int n = Integer.parseInt(pref("look", "1"));
                setPref("look", Integer.toString((n + 1) % 6));
                refresh();
            }
        });
        settings.addView(settingsRow("Picture look", look));
        scale = action("", false);
        scale.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                int n = Integer.parseInt(pref("scale", "2"));
                setPref("scale", Integer.toString(n >= 3 ? 1 : n + 1));
                refresh();
            }
        });
        settings.addView(settingsRow("Internal resolution", scale));
        aspect = action("", false);
        aspect.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                setPref("aspect", "16:9".equals(pref("aspect", "16:9")) ? "4:3" : "16:9");
                refresh();
            }
        });
        settings.addView(settingsRow("Aspect", aspect));
        dedither = action("", false);
        dedither.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                setPref("dedither", "1".equals(pref("dedither", "1")) ? "0" : "1");
                refresh();
            }
        });
        settings.addView(settingsRow("De-dither", dedither));
        deinterlace = action("", false);
        deinterlace.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                setPref("deinterlace", "off".equals(pref("deinterlace", "off")) ? "blend" : "off");
                refresh();
            }
        });
        settings.addView(settingsRow("Deinterlace", deinterlace));
        root.addView(settings);

        status = label("Ready / Android arm64", 12, false, MUTED);
        root.addView(status);
        setContentView(scroll);
    }

    private LinearLayout settingsRow(String text, Button value) {
        LinearLayout r = row();
        TextView t = label(text, 14, false, INK);
        LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(0,
                LinearLayout.LayoutParams.WRAP_CONTENT, 1);
        t.setLayoutParams(p);
        r.addView(t);
        r.addView(value);
        return r;
    }

    private String pref(String key, String fallback) {
        return prefs.getString(key, fallback);
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
        java.util.Collections.sort(isos);
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

    private void refresh() {
        if (discLabel == null) return;
        String disc = findDisc();
        boolean has = disc != null;
        discLabel.setText(has ? new File(disc).getName() : "No disc imported yet");
        discDetail.setText(has ? ("jp".equals(pref("language", "en")) ? "Japanese voices (Disc 2)" : "English voices (Disc 1)")
                : "Import your own Disc 1 ISO to begin.");
        play.setText(has ? "Play" : "Import");
        voice.setText("jp".equals(pref("language", "en")) ? "Japanese (Disc 2)" : "English (Disc 1)");
        String[] looks = { "Crisp", "Crisp + edges", "Soft", "Soft + edges", "Sharp", "Sharp + edges" };
        int li = Integer.parseInt(pref("look", "1"));
        look.setText(looks[Math.max(0, Math.min(5, li))]);
        scale.setText(pref("scale", "2") + "x");
        aspect.setText("16:9".equals(pref("aspect", "16:9")) ? "16:9 (stretch)" : "4:3 (original)");
        dedither.setText("1".equals(pref("dedither", "1")) ? "On (temporal)" : "Off");
        deinterlace.setText("off".equals(pref("deinterlace", "off")) ? "Off (sharper)" : "Blend");
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
        status.setText("Importing " + name + "...");
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
                        if (good) {
                            Toast.makeText(LauncherActivity.this, "Imported " + name, Toast.LENGTH_LONG).show();
                        } else {
                            Toast.makeText(LauncherActivity.this, "Import failed: " + why, Toast.LENGTH_LONG).show();
                        }
                        refresh();
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
            i.putExtra("scale", pref("scale", "2"));
            i.putExtra("dedither", pref("dedither", "1"));
            i.putExtra("deinterlace", pref("deinterlace", "off"));
            i.putExtra("shader", shader.getAbsolutePath());
            startActivity(i);
        } catch (Exception e) {
            Toast.makeText(this, "The game could not start: " + e.getMessage(), Toast.LENGTH_LONG).show();
        }
    }
}
