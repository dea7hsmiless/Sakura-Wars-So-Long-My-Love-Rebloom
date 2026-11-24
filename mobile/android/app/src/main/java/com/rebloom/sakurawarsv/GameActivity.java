package com.rebloom.sakurawarsv;

import android.os.Bundle;
import android.system.Os;
import org.libsdl.app.SDLActivity;

/** SDL's activity: libmain.so receives the disc and settings from the environment. */
public class GameActivity extends SDLActivity {
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
        super.onCreate(state);
    }

    private static void set(String key, String value) {
        if (value == null || value.length() == 0) return;
        try { Os.setenv(key, value, true); } catch (Exception ignored) { }
    }
}
