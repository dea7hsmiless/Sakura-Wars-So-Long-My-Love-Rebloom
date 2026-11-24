package com.rebloom.sakurawarsv;

import android.os.Bundle;
import android.widget.RelativeLayout;
import org.libsdl.app.SDLActivity;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

/** SDL's activity: the native runner gets the disc and settings through JNI. */
public class GameActivity extends SDLActivity {
    private TouchOverlay overlay;

    private static native void nativeLaunch(String disc, String data, String memcard, String shader,
                                            String look, String aspect, String scale, String touch,
                                            String tap, String deinterlace, String dedither,
                                            String title, String controllerDb);

    static {
        System.loadLibrary("SDL2");
        System.loadLibrary("main");
    }

    @Override
    protected String[] getLibraries() {
        return new String[] { "SDL2", "main" };
    }

    @Override
    protected void onCreate(Bundle state) {
        android.content.Intent i = getIntent();
        boolean touch = !"0".equals(i.getStringExtra("touch"));
        boolean tap = !"0".equals(i.getStringExtra("tap"));
        String controllerDb = installControllerDb();
        android.util.Log.i("Rebloom", "GameActivity disc=" + i.getStringExtra("disc")
                + " data=" + i.getStringExtra("data")
                + " memcard=" + i.getStringExtra("memcard")
                + " touch=" + touch + " tap=" + tap);
        nativeLaunch(i.getStringExtra("disc"), i.getStringExtra("data"), i.getStringExtra("memcard"),
                i.getStringExtra("shader"), i.getStringExtra("look"), i.getStringExtra("aspect"),
                i.getStringExtra("scale"), touch ? "1" : "0", tap ? "1" : "0",
                i.getStringExtra("deinterlace"), i.getStringExtra("dedither"),
                "Sakura Wars V: So Long, My Love - Rebloom", controllerDb);
        super.onCreate(state);
        if (touch) {
            overlay = new TouchOverlay(this, tap);
            mLayout.addView(overlay, new RelativeLayout.LayoutParams(
                    RelativeLayout.LayoutParams.MATCH_PARENT,
                    RelativeLayout.LayoutParams.MATCH_PARENT));
        }
    }

    /** SDL reads this file at start, so Bluetooth pads outside its built-in list still map. */
    private String installControllerDb() {
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
            return db.getAbsolutePath();
        } catch (Exception ignored) {
            return "";
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
}
