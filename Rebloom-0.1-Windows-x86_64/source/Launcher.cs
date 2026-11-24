// Sakura Wars: So Long, My Love - launcher for the ps2-native-recomp build.
//
// Follows the ReDUB launcher's model deliberately: a 220 px rail with Game / Setup / Settings and
// Support / About at the bottom, one docked page per topic, and settings as <- value -> steppers that
// save the moment they change. The footer polls the state of the install every 1.5 s.
//
// The game is not modified: every option is an argument or environment variable ps2run reads
// (PS2_SCALE, PS2_ASPECT, PS2_PRESENT_MODE, PS2_FRAME_LATENCY, PS2_SHARP_2D, PS2_GPU_BACKEND).
//
// C# 5: compiled by the .NET Framework 4 csc that ships with Windows.
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Text;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Windows.Forms;

[assembly: System.Reflection.AssemblyTitle("Rebloom Launcher")]
[assembly: System.Reflection.AssemblyDescription("Rebloom Launcher - a static recompilation of Sakura Wars V: So Long, My Love (PS2)")]
[assembly: System.Reflection.AssemblyProduct("Rebloom")]
[assembly: System.Reflection.AssemblyVersion("0.1.0.0")]
[assembly: System.Reflection.AssemblyFileVersion("0.1.0.0")]

namespace SakuraLauncher
{
    static class Palette
    {
        public static Color Bg, Rail, Card, CardEdge, Footer, Gold, Red, Ink, Muted, Good;
        public static Color Field, BannerTop, BannerBottom, PrimaryHover, PrimaryPressed, CardHover, CardPressed;

        static Palette() { Apply("sakura"); }

        public static void Apply(string theme)
        {
            bool classic = string.Equals(theme, "classic", StringComparison.OrdinalIgnoreCase);
            if (classic)
            {
                Bg = Color.FromArgb(18, 13, 11);
                Rail = Color.FromArgb(12, 9, 8);
                Card = Color.FromArgb(34, 25, 20);
                CardEdge = Color.FromArgb(62, 45, 36);
                Footer = Color.FromArgb(26, 18, 15);
                Gold = Color.FromArgb(232, 196, 106);
                Red = Color.FromArgb(176, 58, 72);
                Ink = Color.FromArgb(242, 236, 228);
                Muted = Color.FromArgb(169, 156, 142);
                Good = Color.FromArgb(120, 196, 150);
                Field = Color.FromArgb(22, 17, 14);
                BannerTop = Color.FromArgb(62, 26, 30);
                BannerBottom = Color.FromArgb(16, 12, 10);
                PrimaryHover = Color.FromArgb(198, 70, 86);
                PrimaryPressed = Color.FromArgb(150, 48, 60);
                CardHover = Color.FromArgb(52, 39, 32);
                CardPressed = Color.FromArgb(44, 32, 26);
            }
            else
            {
                Bg = Color.FromArgb(24, 11, 20);
                Rail = Color.FromArgb(16, 7, 14);
                Card = Color.FromArgb(43, 20, 35);
                CardEdge = Color.FromArgb(91, 43, 65);
                Footer = Color.FromArgb(32, 13, 26);
                Gold = Color.FromArgb(245, 169, 193);
                Red = Color.FromArgb(201, 79, 109);
                Ink = Color.FromArgb(255, 244, 239);
                Muted = Color.FromArgb(227, 189, 205);
                Good = Color.FromArgb(120, 196, 150);
                Field = Color.FromArgb(33, 16, 28);
                BannerTop = Color.FromArgb(91, 43, 65);
                BannerBottom = Color.FromArgb(24, 11, 20);
                PrimaryHover = Color.FromArgb(218, 100, 128);
                PrimaryPressed = Color.FromArgb(170, 60, 86);
                CardHover = Color.FromArgb(57, 28, 46);
                CardPressed = Color.FromArgb(47, 23, 38);
            }
        }
    }

    public class RoundButton : Control, IButtonControl
    {
        public bool Primary;
        public bool Selected;
        public DialogResult DialogResult { get; set; }
        bool hover, pressed;

        public void NotifyDefault(bool value) { Invalidate(); }

        sealed class ButtonAccessibility : ControlAccessibleObject
        {
            readonly RoundButton owner;
            public ButtonAccessibility(RoundButton button) : base(button) { owner = button; }
            public override AccessibleRole Role { get { return AccessibleRole.PushButton; } }
            public override string DefaultAction { get { return "Press"; } }
            public override void DoDefaultAction() { owner.PerformClick(); }
        }

        protected override AccessibleObject CreateAccessibilityInstance() { return new ButtonAccessibility(this); }

        public void PerformClick() { if (Enabled) OnClick(EventArgs.Empty); }

        public RoundButton()
        {
            SetStyle(ControlStyles.UserPaint | ControlStyles.AllPaintingInWmPaint | ControlStyles.OptimizedDoubleBuffer |
                     ControlStyles.ResizeRedraw | ControlStyles.Selectable, true);
            // A plain hand-painted Control does not reliably raise Click from the base class, so this control raises
            // it itself on mouse up inside its bounds (and on Space/Enter). StandardClick stays off to avoid firing twice.
            SetStyle(ControlStyles.StandardClick, false);
            Cursor = Cursors.Hand;
            Font = new Font("Segoe UI", 10f, FontStyle.Bold);
            Height = 44;
            ForeColor = Palette.Ink;
            BackColor = Palette.Card;
            TabStop = true;
            AccessibleRole = AccessibleRole.PushButton;
        }

        protected override void OnMouseEnter(EventArgs e) { hover = true; Invalidate(); base.OnMouseEnter(e); }
        protected override void OnMouseLeave(EventArgs e) { hover = false; pressed = false; Invalidate(); base.OnMouseLeave(e); }
        protected override void OnGotFocus(EventArgs e) { Invalidate(); base.OnGotFocus(e); }
        protected override void OnLostFocus(EventArgs e) { pressed = false; Invalidate(); base.OnLostFocus(e); }
        protected override void OnTextChanged(EventArgs e) { AccessibleName = Text; Invalidate(); base.OnTextChanged(e); }
        protected override bool IsInputKey(Keys key)
        {
            Keys code = key & Keys.KeyCode;
            return code == Keys.Space || code == Keys.Enter || base.IsInputKey(key);
        }
        protected override void OnMouseDown(MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left) { pressed = true; Focus(); Invalidate(); }
            base.OnMouseDown(e);
        }
        protected override void OnMouseUp(MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                bool inside = ClientRectangle.Contains(e.Location);
                pressed = false;
                Invalidate();
                if (inside && Enabled) OnClick(EventArgs.Empty);
            }
            base.OnMouseUp(e);
        }
        protected override void OnKeyDown(KeyEventArgs e)
        {
            if (Enabled && (e.KeyCode == Keys.Space || e.KeyCode == Keys.Enter))
            {
                OnClick(EventArgs.Empty);
                e.Handled = true;
            }
            base.OnKeyDown(e);
        }
        protected override void OnEnabledChanged(EventArgs e) { Invalidate(); base.OnEnabledChanged(e); }
        protected override void OnPaint(PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            g.SmoothingMode = SmoothingMode.AntiAlias;
            g.TextRenderingHint = TextRenderingHint.AntiAliasGridFit;
            Rectangle r = new Rectangle(0, 0, Width - 1, Height - 1);
            using (GraphicsPath path = Round(r, 8))
            {
                Color fill = Primary ? Palette.Red : Selected ? Palette.CardEdge : Palette.Card;
                if (!Enabled) fill = Palette.Card;
                else if (pressed) fill = Primary ? Palette.PrimaryPressed : Palette.CardPressed;
                else if (hover) fill = Primary ? Palette.PrimaryHover : Palette.CardHover;
                using (SolidBrush b = new SolidBrush(fill)) g.FillPath(b, path);
                using (Pen p = new Pen(Selected || Primary ? Palette.Gold : Palette.CardEdge, Selected || Primary ? 1.6f : 1f))
                    g.DrawPath(p, path);
            }
            TextRenderer.DrawText(g, Text, Font, r, Enabled ? ForeColor : Palette.Muted,
                TextFormatFlags.HorizontalCenter | TextFormatFlags.VerticalCenter | TextFormatFlags.EndEllipsis |
                TextFormatFlags.NoPrefix);
            if (Focused) ControlPaint.DrawFocusRectangle(g, new Rectangle(5, 5, Width - 11, Height - 11));
        }
        static GraphicsPath Round(Rectangle r, int radius)
        {
            int d = radius * 2;
            GraphicsPath p = new GraphicsPath();
            p.AddArc(r.X, r.Y, d, d, 180, 90);
            p.AddArc(r.Right - d, r.Y, d, d, 270, 90);
            p.AddArc(r.Right - d, r.Bottom - d, d, d, 0, 90);
            p.AddArc(r.X, r.Bottom - d, d, d, 90, 90);
            p.CloseFigure();
            return p;
        }
    }

    public class BrandPanel : Panel
    {
        Image hero, logo;

        public static Image LoadArt(string name)
        {
            try
            {
                string path = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "art", name);
                if (!File.Exists(path)) return null;
                using (Image img = Image.FromFile(path)) return new Bitmap(img);
            }
            catch { return null; }
        }

        public BrandPanel()
        {
            DoubleBuffered = true;
            hero = LoadArt("hero.jpg");
            logo = LoadArt("logo.png");
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                if (hero != null) hero.Dispose();
                if (logo != null) logo.Dispose();
            }
            base.Dispose(disposing);
        }

        protected override void OnPaint(PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            g.TextRenderingHint = TextRenderingHint.AntiAliasGridFit;
            g.SmoothingMode = SmoothingMode.AntiAlias;
            using (LinearGradientBrush bg = new LinearGradientBrush(ClientRectangle,
                       Palette.BannerTop, Palette.BannerBottom, 40f))
                g.FillRectangle(bg, ClientRectangle);

            if (hero != null)
            {
                // Fill the banner edge to edge. The row is sized to the art's 920:430 shape, so covering costs only a few
                // pixels of crop while leaving no background showing through.
                float zoom = Math.Max((float)Width / hero.Width, (float)Height / hero.Height);
                float w = hero.Width * zoom, h = hero.Height * zoom;
                g.InterpolationMode = InterpolationMode.HighQualityBicubic;
                g.DrawImage(hero, (Width - w) / 2f, (Height - h) / 2f, w, h);
                return;
            }

            if (logo != null)
            {
                // Smaller and at the bottom: the top of the banner is the characters' faces, and the logo used to sit
                // right over them.
                float zoom = Math.Min((float)Width * 0.42f / logo.Width, (float)Height * 0.29f / logo.Height);
                float w = logo.Width * zoom, h = logo.Height * zoom;
                g.InterpolationMode = InterpolationMode.HighQualityBicubic;
                g.DrawImage(logo, (Width - w) / 2f, Height - h - Math.Max(10f, Height * 0.05f), w, h);
                return;
            }

            using (Font f = new Font("Segoe UI", 26f, FontStyle.Bold))
            using (Font sub = new Font("Segoe UI", 10f, FontStyle.Bold))
            {
                const string title = "REBLOOM";
                SizeF measured = g.MeasureString(title, f);
                float x = (Width - measured.Width) / 2f;
                float y = (Height - measured.Height) / 2f - 4;
                using (SolidBrush shadow = new SolidBrush(Color.FromArgb(140, 0, 0, 0)))
                    g.DrawString(title, f, shadow, x + 3, y + 4);
                using (SolidBrush ink = new SolidBrush(Palette.Gold))
                    g.DrawString(title, f, ink, x, y);
                using (SolidBrush red = new SolidBrush(Palette.Red))
                    g.FillRectangle(red, x + 12, y + measured.Height - 10, measured.Width - 24, 3);
                const string line = "SAKURA WARS V  \u00B7  SO LONG, MY LOVE";
                SizeF m2 = g.MeasureString(line, sub);
                using (SolidBrush ink = new SolidBrush(Palette.Muted))
                    g.DrawString(line, sub, ink, (Width - m2.Width) / 2f, y + measured.Height + 2);
            }
        }
    }

    // A page panel that owns its whole surface, so switching pages does not flash the old controls through.
    sealed class BufferedPanel : Panel
    {
        public BufferedPanel()
        {
            DoubleBuffered = true;
            SetStyle(ControlStyles.OptimizedDoubleBuffer | ControlStyles.AllPaintingInWmPaint, true);
        }
    }

    // Copies one disc image into the launcher's discs\ folder, so the install is self-contained and the copy the user
    // imported from can be deleted. 1 MiB chunks; Cancel removes the partial file.
    sealed class ImportForm : Form
    {
        readonly string source, target;
        readonly Label progressLine = new Label();
        readonly ProgressBar bar = new ProgressBar();
        volatile bool cancel;
        volatile bool finished;
        Thread worker;

        public ImportForm(string source, string target)
        {
            this.source = source;
            this.target = target;
            Text = "Importing disc image";
            FormBorderStyle = FormBorderStyle.FixedDialog;
            StartPosition = FormStartPosition.CenterParent;
            MaximizeBox = false;
            MinimizeBox = false;
            ShowInTaskbar = false;
            ClientSize = new Size(520, 150);
            BackColor = Palette.Bg;
            ForeColor = Palette.Ink;
            Font = new Font("Segoe UI", 9.5f);

            Label title = new Label();
            title.Text = "Copying " + Path.GetFileName(source);
            title.SetBounds(16, 14, 488, 22);
            title.AutoEllipsis = true;
            Controls.Add(title);

            bar.SetBounds(16, 44, 488, 18);
            bar.Minimum = 0;
            bar.Maximum = 1000;
            Controls.Add(bar);

            progressLine.SetBounds(16, 68, 488, 22);
            progressLine.ForeColor = Palette.Muted;
            progressLine.Text = "starting\u2026";
            Controls.Add(progressLine);

            RoundButton cancelButton = new RoundButton();
            cancelButton.Text = "Cancel";
            cancelButton.SetBounds(400, 102, 104, 32);
            cancelButton.Click += delegate { cancel = true; };
            Controls.Add(cancelButton);

            Shown += delegate
            {
                worker = new Thread(Run);
                worker.IsBackground = true;
                worker.Start();
            };
            FormClosing += delegate(object s, FormClosingEventArgs e)
            {
                if (!finished && worker != null && worker.IsAlive)
                {
                    cancel = true;
                    e.Cancel = true;   // the worker closes the dialog when it has cleaned up
                }
            };
        }

        void Run()
        {
            try
            {
                using (FileStream input = File.OpenRead(source))
                using (FileStream output = File.Create(target))
                {
                    byte[] buffer = new byte[1 << 20];
                    long done = 0, total = input.Length;
                    int read;
                    while ((read = input.Read(buffer, 0, buffer.Length)) > 0)
                    {
                        if (cancel) break;
                        output.Write(buffer, 0, read);
                        done += read;
                        int perMil = (int)(done * 1000 / Math.Max(1L, total));
                        string text = string.Format("{0:N0} of {1:N0} MB", done >> 20, total >> 20);
                        try
                        {
                            BeginInvoke(new Action(delegate
                            {
                                bar.Value = Math.Min(1000, perMil);
                                progressLine.Text = text;
                            }));
                        }
                        catch { }
                    }
                    if (cancel)
                    {
                        output.Close();
                        try { File.Delete(target); } catch { }
                        finished = true;
                        CloseOn(DialogResult.Cancel);
                        return;
                    }
                }
                finished = true;
                CloseOn(DialogResult.OK);
            }
            catch (Exception ex)
            {
                try { File.WriteAllText(Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "import-error.txt"), ex.ToString()); } catch { }
                try { File.Delete(target); } catch { }
                finished = true;
                CloseOn(DialogResult.Abort);
            }
        }

        void CloseOn(DialogResult result)
        {
            try { BeginInvoke(new Action(delegate { DialogResult = result; Close(); })); } catch { }
        }
    }

    sealed class KeyCaptureForm : Form
    {
        public string Captured;
        Label hintLabel;

        public KeyCaptureForm(string action)
        {
            Text = "Press a key";
            ClientSize = new Size(440, 150);
            BackColor = Palette.Bg;
            ForeColor = Palette.Ink;
            FormBorderStyle = FormBorderStyle.FixedDialog;
            MaximizeBox = false;
            MinimizeBox = false;
            StartPosition = FormStartPosition.CenterParent;
            KeyPreview = true;

            Label label = new Label();
            label.Text = "Press the key for " + action + ".";
            label.Font = new Font("Segoe UI", 11f, FontStyle.Bold);
            label.ForeColor = Palette.Ink;
            label.SetBounds(24, 24, 390, 28);
            Controls.Add(label);

            hintLabel = new Label();
            hintLabel.Text = "Esc, F1, F2, F5, F8, F9 and F11 belong to the program.";
            hintLabel.ForeColor = Palette.Muted;
            hintLabel.SetBounds(24, 54, 390, 24);
            Controls.Add(hintLabel);

            Button cancel = new Button();
            cancel.Text = "Cancel";
            cancel.SetBounds(330, 100, 84, 30);
            cancel.Click += delegate { DialogResult = DialogResult.Cancel; Close(); };
            Controls.Add(cancel);

            KeyDown += delegate(object sender, KeyEventArgs e) { TakeKey(e.KeyCode); };
        }

        // Left/Right/Up/Down, Tab and Enter are dialog navigation keys: KeyDown never sees them.
        // They are still game buttons, so capture them before the dialog can move focus or close.
        protected override bool ProcessCmdKey(ref Message msg, Keys keyData)
        {
            Keys key = keyData & Keys.KeyCode;
            if (key == Keys.Left || key == Keys.Right || key == Keys.Up || key == Keys.Down ||
                key == Keys.Tab || key == Keys.Enter || key == Keys.Escape ||
                key == Keys.Space || key == Keys.Back)
            {
                TakeKey(key);
                return true;
            }
            return base.ProcessCmdKey(ref msg, keyData);
        }

        void TakeKey(Keys key)
        {
            if (key == Keys.F1 || key == Keys.F2 || key == Keys.F5 ||
                key == Keys.F8 || key == Keys.F9 || key == Keys.F11)
            {
                hintLabel.Text = "That key belongs to the program. Press another one.";
                hintLabel.ForeColor = Palette.Gold;
                return;
            }
            string name = KeyNames.Of(key);
            if (name == null)
            {
                hintLabel.Text = "That key has no name the game can use. Press another one.";
                hintLabel.ForeColor = Palette.Gold;
                return;
            }
            Captured = name;
            DialogResult = DialogResult.OK;
            Close();
        }
    }

    static class KeyNames
    {
        public static string Of(Keys key)
        {
            if (key >= Keys.A && key <= Keys.Z) return key.ToString();
            if (key >= Keys.D0 && key <= Keys.D9) return ((int)(key - Keys.D0)).ToString();
            if (key >= Keys.NumPad0 && key <= Keys.NumPad9) return "Keypad " + (int)(key - Keys.NumPad0);
            if (key >= Keys.F1 && key <= Keys.F12) return "F" + ((int)(key - Keys.F1) + 1);
            switch (key)
            {
                case Keys.Space: return "Space";
                case Keys.Return: return "Enter";
                case Keys.Escape: return "Esc";
                case Keys.Back: return "Backspace";
                case Keys.Tab: return "Tab";
                case Keys.Up: return "Up";
                case Keys.Down: return "Down";
                case Keys.Left: return "Left";
                case Keys.Right: return "Right";
                case Keys.Insert: return "Insert";
                case Keys.Delete: return "Delete";
                case Keys.Home: return "Home";
                case Keys.End: return "End";
                case Keys.PageUp: return "Page Up";
                case Keys.PageDown: return "Page Down";
                case Keys.Capital: return "Caps Lock";
                case Keys.LShiftKey: case Keys.ShiftKey: return "Left Shift";
                case Keys.RShiftKey: return "Right Shift";
                case Keys.LControlKey: case Keys.ControlKey: return "Left Ctrl";
                case Keys.RControlKey: return "Right Ctrl";
                case Keys.LMenu: case Keys.Menu: return "Left Alt";
                case Keys.RMenu: return "Right Alt";
                case Keys.OemMinus: return "key 45";
                case Keys.Oemplus: return "key 46";
                case Keys.OemOpenBrackets: return "key 47";
                case Keys.OemCloseBrackets: return "key 48";
                case Keys.OemPipe: return "key 49";
                case Keys.OemSemicolon: return "key 51";
                case Keys.OemQuotes: return "key 52";
                case Keys.Oemtilde: return "key 53";
                case Keys.Oemcomma: return "key 54";
                case Keys.OemPeriod: return "key 55";
                case Keys.OemQuestion: return "key 56";
                default: return null;
            }
        }
    }

    sealed class KeyboardControlsForm : Form
    {
        static readonly string[,] Actions = {
            {"dpad_up", "D-pad Up"}, {"dpad_down", "D-pad Down"}, {"dpad_left", "D-pad Left"}, {"dpad_right", "D-pad Right"},
            {"left_up", "Left Stick Up"}, {"left_down", "Left Stick Down"}, {"left_left", "Left Stick Left"}, {"left_right", "Left Stick Right"},
            {"right_up", "Right Stick Up"}, {"right_down", "Right Stick Down"}, {"right_left", "Right Stick Left"}, {"right_right", "Right Stick Right"},
            {"cross", "Cross"}, {"circle", "Circle"}, {"square", "Square"}, {"triangle", "Triangle"},
            {"l1", "L1"}, {"r1", "R1"}, {"l2", "L2"}, {"r2", "R2"}, {"l3", "L3"}, {"r3", "R3"},
            {"start", "Start"}, {"select", "Select"}, {"roll", "Roll"}, {"rage", "Rage"}, {"menu", "Menu key"}, {"help", "Help key"}
        };

        readonly string path;
        readonly Dictionary<string, string> values = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
        readonly Dictionary<string, Label> shown = new Dictionary<string, Label>(StringComparer.OrdinalIgnoreCase);
        readonly Action changed;
        readonly Label fileLabel;

        public KeyboardControlsForm(string gameDir, Action changed)
        {
            this.changed = changed;
            path = Path.Combine(gameDir, "keys.ini");
            Text = "Keyboard controls";
            ClientSize = new Size(720, 680);
            BackColor = Palette.Bg;
            ForeColor = Palette.Ink;
            StartPosition = FormStartPosition.CenterParent;
            ShowIcon = false;

            Label title = new Label();
            title.Text = "Keyboard controls";
            title.Font = new Font("Segoe UI", 18f, FontStyle.Bold);
            title.ForeColor = Palette.Ink;
            title.SetBounds(24, 18, 500, 34);
            Controls.Add(title);
            Label help = new Label();
            help.Text = "Click Change, then press the new key. Arrows, Tab and Enter work. The game reads keys.ini when you return to its window.";
            help.ForeColor = Palette.Muted;
            help.SetBounds(26, 52, 650, 24);
            Controls.Add(help);

            FlowLayoutPanel list = new FlowLayoutPanel();
            list.FlowDirection = FlowDirection.TopDown;
            list.WrapContents = false;
            list.AutoScroll = true;
            list.BackColor = Palette.Bg;
            list.SetBounds(24, 88, 672, 532);
            Controls.Add(list);

            if (!File.Exists(path))
            {
                Label none = new Label();
                none.Text = "keys.ini is not there yet. Start the game once so it writes the default keys.";
                none.ForeColor = Palette.Gold;
                none.SetBounds(18, 18, 600, 40);
                list.Controls.Add(none);
            }
            else
            {
                LoadValues();
                for (int i = 0; i < Actions.GetLength(0); ++i) AddRow(list, Actions[i, 0], Actions[i, 1]);
            }

            fileLabel = new Label();
            fileLabel.Text = "File: " + path;
            fileLabel.ForeColor = Palette.Muted;
            fileLabel.SetBounds(24, 636, 560, 20);
            Controls.Add(fileLabel);

            Button close = new Button();
            close.Text = "Close";
            close.SetBounds(612, 632, 84, 30);
            close.Click += delegate { Close(); };
            Controls.Add(close);
        }

        void LoadValues()
        {
            values.Clear();
            foreach (string raw in File.ReadAllLines(path))
            {
                string line = raw.Trim();
                if (line.Length == 0 || line[0] == '#' || line[0] == ';') continue;
                int eq = line.IndexOf('=');
                if (eq <= 0) continue;
                values[line.Substring(0, eq).Trim()] = line.Substring(eq + 1).Trim();
            }
        }

        void AddRow(FlowLayoutPanel list, string action, string label)
        {
            Panel row = new Panel();
            row.Width = 630;
            row.Height = 34;
            row.BackColor = Palette.Card;
            row.Margin = new Padding(0, 0, 0, 4);

            Label name = new Label();
            name.Text = label;
            name.ForeColor = Palette.Ink;
            name.SetBounds(12, 8, 220, 20);
            row.Controls.Add(name);

            Label value = new Label();
            string current;
            value.Text = values.TryGetValue(action, out current) ? current : "";
            value.ForeColor = Palette.Gold;
            value.SetBounds(238, 8, 250, 20);
            row.Controls.Add(value);
            shown[action] = value;

            Button change = new Button();
            change.Text = "Change";
            change.SetBounds(520, 4, 96, 26);
            change.Click += delegate
            {
                using (KeyCaptureForm capture = new KeyCaptureForm(label))
                {
                    if (capture.ShowDialog(this) != DialogResult.OK) return;
                    SetValue(action, capture.Captured);
                    value.Text = capture.Captured;
                    if (changed != null) changed();
                }
            };
            row.Controls.Add(change);
            list.Controls.Add(row);
        }

        void SetValue(string action, string value)
        {
            values[action] = value;
            string[] lines = File.ReadAllLines(path);
            bool found = false;
            for (int i = 0; i < lines.Length; ++i)
            {
                string line = lines[i].Trim();
                if (line.Length == 0 || line[0] == '#' || line[0] == ';') continue;
                int eq = line.IndexOf('=');
                if (eq <= 0) continue;
                if (string.Equals(line.Substring(0, eq).Trim(), action, StringComparison.OrdinalIgnoreCase))
                {
                    lines[i] = action + " = " + value;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                List<string> all = new List<string>(lines);
                all.Add(action + " = " + value);
                lines = all.ToArray();
            }
            File.WriteAllLines(path, lines, new UTF8Encoding(false));
            fileLabel.Text = "Saved to " + path;
        }
    }

    sealed class PadChoice
    {
        public readonly string Label;
        public readonly string Token;
        public PadChoice(string label, string token) { Label = label; Token = token; }
        public override string ToString() { return Label; }
    }

    sealed class GamepadControlsForm : Form
    {
        static readonly string[,] Actions = {
            {"cross", "Cross", "a"}, {"circle", "Circle", "b"}, {"square", "Square", "x"}, {"triangle", "Triangle", "y"},
            {"l1", "L1", "leftshoulder"}, {"r1", "R1", "rightshoulder"},
            {"l3", "L3", "leftstick"}, {"r3", "R3", "rightstick"},
            {"dpad_up", "D-pad Up", "dpup"}, {"dpad_down", "D-pad Down", "dpdown"},
            {"dpad_left", "D-pad Left", "dpleft"}, {"dpad_right", "D-pad Right", "dpright"}
        };

        readonly string path;
        readonly Dictionary<string, string> values = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
        readonly Action changed;
        readonly Label fileLabel;

        public GamepadControlsForm(string gameDir, Action changed)
        {
            this.changed = changed;
            path = Path.Combine(gameDir, "gamepad.ini");
            Text = "Gamepad controls";
            ClientSize = new Size(620, 600);
            BackColor = Palette.Bg;
            ForeColor = Palette.Ink;
            StartPosition = FormStartPosition.CenterParent;
            ShowIcon = false;

            Label title = new Label();
            title.Text = "Gamepad controls";
            title.Font = new Font("Segoe UI", 18f, FontStyle.Bold);
            title.ForeColor = Palette.Ink;
            title.SetBounds(24, 18, 500, 34);
            Controls.Add(title);
            Label help = new Label();
            help.Text = "Choose the controller button for each game action. Start, Select and the triggers stay standard; L3 and R3 map the stick presses.";
            help.ForeColor = Palette.Muted;
            help.SetBounds(26, 52, 570, 36);
            Controls.Add(help);

            if (File.Exists(path)) LoadValues();
            else
            {
                for (int i = 0; i < Actions.GetLength(0); ++i) values[Actions[i, 0]] = Actions[i, 2];
            }

            int y = 96;
            for (int i = 0; i < Actions.GetLength(0); ++i)
            {
                string action = Actions[i, 0], label = Actions[i, 1];
                Label name = new Label();
                name.Text = label;
                name.ForeColor = Palette.Ink;
                name.SetBounds(26, y + 6, 180, 20);
                Controls.Add(name);

                ComboBox box = new ComboBox();
                box.DropDownStyle = ComboBoxStyle.DropDownList;
                box.SetBounds(214, y, 220, 26);
                AddChoices(box);
                string current;
                if (values.TryGetValue(action, out current)) SelectToken(box, current);
                else SelectToken(box, Actions[i, 2]);
                box.SelectedIndexChanged += delegate
                {
                    PadChoice choice = box.SelectedItem as PadChoice;
                    if (choice == null) return;
                    values[action] = choice.Token;
                    Save();
                    if (changed != null) changed();
                };
                Controls.Add(box);
                y += 34;
            }

            fileLabel = new Label();
            fileLabel.Text = "File: " + path;
            fileLabel.ForeColor = Palette.Muted;
            fileLabel.SetBounds(26, 556, 470, 20);
            Controls.Add(fileLabel);

            Button close = new Button();
            close.Text = "Close";
            close.SetBounds(512, 552, 84, 30);
            close.Click += delegate { Close(); };
            Controls.Add(close);
        }

        static void AddChoices(ComboBox box)
        {
            box.Items.Add(new PadChoice("A", "a"));
            box.Items.Add(new PadChoice("B", "b"));
            box.Items.Add(new PadChoice("X", "x"));
            box.Items.Add(new PadChoice("Y", "y"));
            box.Items.Add(new PadChoice("Left Shoulder", "leftshoulder"));
            box.Items.Add(new PadChoice("Right Shoulder", "rightshoulder"));
            box.Items.Add(new PadChoice("Left Stick", "leftstick"));
            box.Items.Add(new PadChoice("Right Stick", "rightstick"));
            box.Items.Add(new PadChoice("D-pad Up", "dpup"));
            box.Items.Add(new PadChoice("D-pad Down", "dpdown"));
            box.Items.Add(new PadChoice("D-pad Left", "dpleft"));
            box.Items.Add(new PadChoice("D-pad Right", "dpright"));
            box.Items.Add(new PadChoice("Back", "back"));
            box.Items.Add(new PadChoice("Start", "start"));
            box.Items.Add(new PadChoice("Guide", "guide"));
            box.Items.Add(new PadChoice("Misc 1", "misc1"));
            box.Items.Add(new PadChoice("Paddle 1", "paddle1"));
            box.Items.Add(new PadChoice("Paddle 2", "paddle2"));
            box.Items.Add(new PadChoice("None", "none"));
        }

        static void SelectToken(ComboBox box, string token)
        {
            for (int i = 0; i < box.Items.Count; ++i)
            {
                PadChoice choice = box.Items[i] as PadChoice;
                if (choice != null && string.Equals(choice.Token, token, StringComparison.OrdinalIgnoreCase))
                {
                    box.SelectedIndex = i;
                    return;
                }
            }
            box.SelectedIndex = box.Items.Count - 1;
        }

        void LoadValues()
        {
            values.Clear();
            foreach (string raw in File.ReadAllLines(path))
            {
                string line = raw.Trim();
                if (line.Length == 0 || line[0] == '#' || line[0] == ';') continue;
                int eq = line.IndexOf('=');
                if (eq <= 0) continue;
                values[line.Substring(0, eq).Trim()] = line.Substring(eq + 1).Trim();
            }
        }

        void Save()
        {
            List<string> lines = new List<string>();
            lines.Add("# gamepad.ini: which controller button works which game button.");
            lines.Add("# SDL names; 'none' turns a button off. Delete this file for the standard mapping.");
            for (int i = 0; i < Actions.GetLength(0); ++i)
            {
                string action = Actions[i, 0], value;
                if (!values.TryGetValue(action, out value)) value = Actions[i, 2];
                lines.Add(action.PadRight(10) + " = " + value);
            }
            Directory.CreateDirectory(Path.GetDirectoryName(path));
            File.WriteAllLines(path, lines.ToArray(), new UTF8Encoding(false));
            fileLabel.Text = "Saved to " + path;
        }

        // Open gamepad.ini must not be a dead end before the first controller is
        // seen: write the standard mapping first, then open it.
        public static void EnsureFile(string gameDir)
        {
            string file = Path.Combine(gameDir, "gamepad.ini");
            if (File.Exists(file)) return;
            Directory.CreateDirectory(gameDir);
            List<string> lines = new List<string>();
            lines.Add("# gamepad.ini: which controller button works which game button.");
            lines.Add("# SDL names; 'none' turns a button off. Delete this file for the standard mapping.");
            for (int i = 0; i < Actions.GetLength(0); ++i)
                lines.Add(Actions[i, 0].PadRight(10) + " = " + Actions[i, 2]);
            File.WriteAllLines(file, lines.ToArray(), new UTF8Encoding(false));
        }
    }

    sealed class Launcher : Form
    {
        readonly string baseDir;
        readonly string stateDir;
        readonly string iniPath;
        readonly bool direct;
        readonly string directDiscEn;
        readonly string directDiscJp;
        readonly string directLanguage;
        readonly Dictionary<string, string> ini = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);

        readonly Label status = new Label();
        readonly RichTextBox log = new RichTextBox();
        readonly Panel content = new BufferedPanel();
        readonly List<RoundButton> navigation = new List<RoundButton>();
        readonly RoundButton play = new RoundButton();
        readonly System.Windows.Forms.Timer refresh = new System.Windows.Forms.Timer();
        Process job;
        string page = "Game";
        string category = "Display";

        TableLayoutPanel gameGrid;
        TableLayoutPanel homeBottomRow;
        Panel contentHost;
        readonly bool autoPlay;
        readonly bool forceLauncher;
        bool closingAfterLaunch;
        readonly float uiScale;
        readonly string importPath;

        public Launcher(bool autoPlay, string importPath, float uiScale, bool forceLauncher,
                        bool direct = false, string directDiscEn = null, string directDiscJp = null,
                        string directLanguage = null, string dataDir = null)
        {
            this.autoPlay = autoPlay;
            this.forceLauncher = forceLauncher;
            this.uiScale = uiScale;
            this.importPath = importPath;
            this.direct = direct;
            this.directDiscEn = directDiscEn;
            this.directDiscJp = directDiscJp;
            this.directLanguage = directLanguage;
            baseDir = AppDomain.CurrentDomain.BaseDirectory;
            stateDir = string.IsNullOrWhiteSpace(dataDir) ? baseDir : Path.GetFullPath(dataDir);
            if (direct) Directory.CreateDirectory(stateDir);
            iniPath = Path.Combine(stateDir, "launcher.ini");
            LoadIni();
            Palette.Apply(Get("theme", "sakura"));

            Text = "Sakura Wars V: So Long, My Love \u2014 Rebloom Launcher";
            // Without this the window keeps the generic .NET form icon, even though the exe carries art\icon.ico.
            try
            {
                string ico = Path.Combine(baseDir, @"art\icon.ico");
                if (File.Exists(ico)) Icon = new Icon(ico, 64, 64);
                else Icon = System.Drawing.Icon.ExtractAssociatedIcon(Application.ExecutablePath);
            }
            catch { }
            Size = new Size(1200, 800);
            MinimumSize = new Size(1000, 700);
            StartPosition = FormStartPosition.CenterScreen;
            if (direct)
            {
                // RecompLauncher starts this with --direct: keep the launcher off-screen and let the game's window be the only one.
                ShowInTaskbar = false;
                WindowState = FormWindowState.Minimized;
                StartPosition = FormStartPosition.Manual;
                Location = new Point(-32000, -32000);
            }
            BackColor = Palette.Bg;
            ForeColor = Palette.Ink;
            Font = new Font("Segoe UI", 10f);
            AutoScaleMode = AutoScaleMode.Dpi;
            KeyPreview = true;
            AllowDrop = true;
            DragEnter += delegate(object sender, DragEventArgs e)
            {
                string[] files = e.Data.GetDataPresent(DataFormats.FileDrop) ? (string[])e.Data.GetData(DataFormats.FileDrop) : null;
                e.Effect = files != null && files.Length == 1 && files[0].EndsWith(".iso", StringComparison.OrdinalIgnoreCase)
                    ? DragDropEffects.Copy : DragDropEffects.None;
            };
            DragDrop += delegate(object sender, DragEventArgs e)
            {
                string[] files = e.Data.GetDataPresent(DataFormats.FileDrop) ? (string[])e.Data.GetData(DataFormats.FileDrop) : null;
                if (files == null || files.Length != 1 || !files[0].EndsWith(".iso", StringComparison.OrdinalIgnoreCase)) return;
                ShowSetup();
                ImportFrom(files[0]);
            };

            TableLayoutPanel shell = new TableLayoutPanel();
            shell.Dock = DockStyle.Fill;
            shell.ColumnCount = 2;
            shell.RowCount = 2;
            shell.Margin = Padding.Empty;
            shell.Padding = Padding.Empty;
            shell.ColumnStyles.Add(new ColumnStyle(SizeType.Absolute, 220));
            shell.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100));
            shell.RowStyles.Add(new RowStyle(SizeType.Percent, 100));
            shell.RowStyles.Add(new RowStyle(SizeType.Absolute, 38));
            Controls.Add(shell);

            Panel rail = new Panel();
            rail.Dock = DockStyle.Fill;
            rail.BackColor = Palette.Rail;
            rail.Margin = Padding.Empty;
            rail.Padding = new Padding(16);
            shell.Controls.Add(rail, 0, 0);

            // mark.png is a small square badge for the rail; logo.png is the wide wordmark and belongs to the banner.
            Image mark = BrandPanel.LoadArt("mark.png");
            if (mark != null)
            {
                PictureBox brand = new PictureBox();
                brand.Image = mark;
                brand.SizeMode = PictureBoxSizeMode.Zoom;
                brand.BackColor = Palette.Rail;
                brand.TabStop = false;
                brand.SetBounds(16, 24, 188, 84);
                rail.Controls.Add(brand);
            }
            else
            {
                Label brand = LabelAt("REBLOOM", 17f, true);
                brand.ForeColor = Palette.Gold;
                brand.SetBounds(16, 40, 188, 52);
                rail.Controls.Add(brand);
            }

            Nav(rail, "Game", 16, 118, delegate { ShowHome(); });
            Nav(rail, "Install", 16, 180, delegate { ShowSetup(); });
            Nav(rail, "Settings", 16, 242, delegate { ShowSettings(category); });

            Panel bottomNav = new Panel();
            bottomNav.Dock = DockStyle.Bottom;
            bottomNav.Height = 120;
            rail.Controls.Add(bottomNav);
            Nav(bottomNav, "Support", 0, 4, delegate { ShowSupport(); });
            Nav(bottomNav, "About", 0, 62, delegate { ShowAbout(); });

            content.Dock = DockStyle.Fill;
            content.Margin = Padding.Empty;
            content.BackColor = Palette.Bg;

            // The pages are capped at a readable width and centred, so a maximised window grows the margins rather than
            // stretching the banner until it is taller than the room the page has. Padding does the centring, so the
            // layout engine sizes the page correctly on the first show and on every resize.
            contentHost = new BufferedPanel();
            contentHost.Dock = DockStyle.Fill;
            contentHost.Margin = Padding.Empty;
            contentHost.BackColor = Palette.Bg;
            shell.Controls.Add(contentHost, 1, 0);
            contentHost.Controls.Add(content);
            contentHost.Resize += delegate { CentreContent(); };
            CentreContent();
            content.SizeChanged += delegate { FitBanner(); };

            Panel footer = new Panel();
            footer.Dock = DockStyle.Fill;
            footer.BackColor = Palette.Footer;
            footer.Margin = Padding.Empty;
            shell.Controls.Add(footer, 0, 1);
            shell.SetColumnSpan(footer, 2);
            status.SetBounds(20, 9, 900, 22);
            status.Anchor = AnchorStyles.Left | AnchorStyles.Top | AnchorStyles.Right;
            status.ForeColor = Palette.Muted;
            status.Font = new Font("Segoe UI", 9f);
            footer.Controls.Add(status);

            log.ReadOnly = true;
            log.BackColor = Palette.Rail;
            log.ForeColor = Palette.Ink;
            log.BorderStyle = BorderStyle.None;
            log.Font = new Font("Consolas", 9f);

            play.Primary = true;
            play.Click += delegate
            {
                if (Ready()) PlayGame();
                else if (!File.Exists(Runner)) ShowSetup();
                else { ShowSetup(); ImportDisc(); }   // the default way to add a disc is to import a copy
            };

            Append("Rebloom Launcher ready.");
            Append("Toolkit: " + Root);
            refresh.Interval = 1500;
            refresh.Tick += delegate { UpdateStatus(); };
            refresh.Start();

            ShowHome();
            UpdateStatus();
        }

        // ---------- settings ----------

        void LoadIni()
        {
            if (!File.Exists(iniPath)) return;
            try
            {
                foreach (string raw in File.ReadAllLines(iniPath))
                {
                    string line = raw.Trim();
                    if (line.Length == 0 || line[0] == ';' || line[0] == '#') continue;
                    int eq = line.IndexOf('=');
                    if (eq <= 0) continue;
                    string key = line.Substring(0, eq).Trim();
                    string value = line.Substring(eq + 1).Trim();
                    if (key == "disc_en" || key == "disc_jp" || key == "root" || key == "textures") value = StoredPath(value);
                    ini[key] = value;
                }
            }
            catch (Exception ex) { Append("settings: " + ex.Message); }
        }

        void SaveIni()
        {
            try
            {
                List<string> lines = new List<string>();
                lines.Add("; Sakura Wars V launcher settings");
                foreach (KeyValuePair<string, string> kv in ini) lines.Add(kv.Key + "=" + kv.Value);
                Directory.CreateDirectory(Path.GetDirectoryName(iniPath));
                File.WriteAllLines(iniPath, lines.ToArray());
            }
            catch (Exception ex) { Append("settings: " + ex.Message); }
        }

        string Get(string key, string fallback)
        {
            string v;
            return ini.TryGetValue(key, out v) && v.Length > 0 ? v : fallback;
        }

        // Paths inside the install are written relative, so moving or renaming the folder keeps working.
        string StoredPath(string path)
        {
            if (string.IsNullOrEmpty(path)) return path;
            if (!Path.IsPathRooted(path)) return path;
            try
            {
                string full = Path.GetFullPath(path);
                string root = Path.GetFullPath(baseDir);
                if (!root.EndsWith(Path.DirectorySeparatorChar.ToString())) root += Path.DirectorySeparatorChar;
                if (full.StartsWith(root, StringComparison.OrdinalIgnoreCase)) return full.Substring(root.Length);
            }
            catch { }
            return path;
        }

        string ResolvedPath(string path)
        {
            if (string.IsNullOrEmpty(path)) return path;
            try
            {
                if (Path.IsPathRooted(path)) return path;
                return Path.GetFullPath(Path.Combine(baseDir, path));
            }
            catch { return path; }
        }

        void Set(string key, string value)
        {
            if (key == "disc_en" || key == "disc_jp" || key == "root" || key == "textures") value = StoredPath(value);
            ini[key] = value;
            SaveIni();
        }

        // Two layouts:
        //   portable  game\ps2run.exe sits beside Rebloom.exe (the release zip): nothing outside this folder is used
        //   checkout  no game\ps2run.exe: fall back to the toolkit folder, for developing against a source build
        string PortableRunner
        {
            get
            {
                string branded = Path.Combine(baseDir, @"game\SakuraWarsV.exe");
                if (File.Exists(branded)) return branded;
                return Path.Combine(baseDir, @"game\ps2run.exe");
            }
        }
        bool IsPortable { get { return File.Exists(PortableRunner); } }

        string Root
        {
            get
            {
                if (IsPortable) return Path.Combine(baseDir, "game");
                return ResolvedPath(Get("root", @"C:\recomp\ps2-native-recomp"));
            }
        }

        string Runner
        {
            get
            {
                if (IsPortable) return PortableRunner;
                return Path.Combine(Get("root", @"C:\recomp\ps2-native-recomp"), @"build\native-sakura5\ps2run.exe");
            }
        }

        string GameDir
        {
            get
            {
                if (IsPortable) return Path.Combine(baseDir, @"game\data");
                return Path.Combine(Get("root", @"C:\recomp\ps2-native-recomp"), @"games\sakura5");
            }
        }

        // Discs in discs\ are found by name, so a release works with no configuration at all.
        // Which voice language a file name points at, or "" when the name says nothing.
        static string DiscLanguage(string path)
        {
            string n = Path.GetFileName(path).ToLowerInvariant();
            if (n.Contains("disc 2") || n.Contains("disc2") || n.Contains("japanese")) return "jp";
            if (n.Contains("disc 1") || n.Contains("disc1") || n.Contains("english")) return "en";
            return "";
        }

        // The boot ELF name inside the ISO is the reliable answer; a generic filename is not.
        static string SerialLanguage(string path)
        {
            try
            {
                using (FileStream fs = File.OpenRead(path))
                {
                    byte[] buffer = new byte[4 << 20];
                    int read = fs.Read(buffer, 0, buffer.Length);
                    string text = Encoding.ASCII.GetString(buffer, 0, read);
                    if (text.IndexOf("SLUS_219.27", StringComparison.OrdinalIgnoreCase) >= 0) return "en";
                    if (text.IndexOf("SLUS_219.30", StringComparison.OrdinalIgnoreCase) >= 0) return "jp";
                }
            }
            catch { }
            return "";
        }

        string FindDisc(string language)
        {
            try
            {
                string dir = Path.Combine(baseDir, "discs");
                if (!Directory.Exists(dir)) return "";
                string[] isos = Directory.GetFiles(dir, "*.iso");
                if (isos.Length == 0) return "";
                string[] prefer = language == "jp"
                    ? new string[] { "disc 2", "disc2", "japanese" }
                    : new string[] { "disc 1", "disc1", "english" };
                foreach (string want in prefer)
                    foreach (string iso in isos)
                        if (Path.GetFileName(iso).ToLowerInvariant().Contains(want)) return iso;
                // One image whose name says nothing about discs is usable for either language. A single image that does
                // name a disc is NOT: asking for Japanese must not quietly boot the English disc.
                if (isos.Length == 1 && DiscLanguage(isos[0]).Length == 0) return isos[0];
                return "";
            }
            catch { return ""; }
        }

        string DiscEn
        {
            get
            {
                if (!string.IsNullOrEmpty(directDiscEn)) return directDiscEn;
                string found = FindDisc("en");
                if (found.Length > 0) return found;
                string stored = Get("disc_en", "");
                if (stored.Length > 0) return ResolvedPath(stored);
                return IsPortable ? "" : @"C:\recomp\work\ps2\Sakura Wars - So Long, My Love (USA) (Disc 1) (English Voice Over).iso";
            }
        }
        string DiscJp
        {
            get
            {
                if (!string.IsNullOrEmpty(directDiscJp)) return directDiscJp;
                string found = FindDisc("jp");
                if (found.Length > 0) return found;
                string stored = Get("disc_jp", "");
                if (stored.Length > 0) return ResolvedPath(stored);
                return IsPortable ? "" : @"C:\recomp\work\ps2\Sakura Wars - So Long, My Love (USA) (Disc 2) (Japanese Voice Over).iso";
            }
        }
        string Language { get { return !string.IsNullOrEmpty(directLanguage) ? directLanguage : Get("language", "en"); } }
        string DiscForLanguage { get { return Language == "jp" ? DiscJp : DiscEn; } }

        // Direct starts keep saves in {data} (RecompLauncher's folder); the normal launcher keeps them beside the game.
        string MemcardDir { get { return Path.Combine(stateDir, @"game\data"); } }
        string MemcardPath { get { return Path.Combine(MemcardDir, Language == "jp" ? "play-japanese.ps2" : "play-english.ps2"); } }

        // ---------- shell ----------

        static Label LabelAt(string text, float size, bool bold)
        {
            return new Label
            {
                Text = text,
                Font = new Font("Segoe UI", size, bold ? FontStyle.Bold : FontStyle.Regular),
                ForeColor = Palette.Ink,
                BackColor = Color.Transparent,
                AutoEllipsis = true,
                UseMnemonic = false
            };
        }

        void Nav(Control host, string title, int x, int y, Action action)
        {
            RoundButton b = new RoundButton();
            b.Text = title;
            b.Tag = title;
            b.BackColor = Palette.Rail;
            b.SetBounds(x, y, 188, 52);
            b.Click += delegate { action(); };
            host.Controls.Add(b);
            navigation.Add(b);
        }

        void Page(string name)
        {
            page = name;
            if (play.Parent != null) play.Parent.Controls.Remove(play);
            if (log.Parent != null) log.Parent.Controls.Remove(log);
            foreach (Control old in content.Controls.Cast<Control>().ToArray()) old.Dispose();
            content.Controls.Clear();
            foreach (RoundButton b in navigation)
            {
                b.Selected = (string)b.Tag == name;
                b.Invalidate();
            }
        }

        Panel Standard(string name, string title, string help)
        {
            Page(name);
            Panel p = new BufferedPanel();
            p.Dock = DockStyle.Fill;
            p.Padding = new Padding(36);
            p.AutoScroll = true;
            content.Controls.Add(p);

            Label h = LabelAt(title, 24f, true);
            h.SetBounds(36, 26, 800, 48);
            p.Controls.Add(h);

            Label d = LabelAt(help, 10f, false);
            d.ForeColor = Palette.Muted;
            d.SetBounds(38, 78, 790, 48);
            d.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
            p.Controls.Add(d);
            return p;
        }

        RoundButton ButtonAt(Control parent, string text, int x, int y, int width, Action action, bool primary)
        {
            RoundButton b = new RoundButton();
            b.Text = text;
            b.Primary = primary;
            b.SetBounds(x, y, width, 42);
            b.Click += delegate
            {
                try { action(); }
                catch (Exception ex) { MessageBox.Show(this, ex.Message, "Sakura Wars", MessageBoxButtons.OK, MessageBoxIcon.Error); }
            };
            parent.Controls.Add(b);
            return b;
        }

        // ReDUB's stepper: a label, the current value in the middle, and <- / -> on the right.
        void Choice(Control host, ref int y, string name, string key, string[] labels, string[] vals, string fallback)
        {
            Label title = LabelAt(name, 10f, false);
            title.SetBounds(24, y, 240, 38);
            host.Controls.Add(title);

            int x = Math.Max(250, host.Width - 300);
            string value = Get(key, fallback);
            int ix = Array.IndexOf(vals, value);
            if (ix < 0) { ix = 0; Set(key, vals[0]); }   // a stale value that is not offered: show and store what the row means

            Label shown = LabelAt(labels[ix], 10f, true);
            shown.SetBounds(x + 44, y - 4, 170, 40);
            shown.TextAlign = ContentAlignment.MiddleCenter;
            shown.Anchor = AnchorStyles.Right | AnchorStyles.Top;
            host.Controls.Add(shown);

            Action<int> change = delegate(int delta)
            {
                try
                {
                    if (GameRunning())
                    {
                        MessageBox.Show(this, "Save and close the game first. The in-game F1 menu applies picture changes live.",
                                        "Game is running", MessageBoxButtons.OK, MessageBoxIcon.Information);
                        return;
                    }
                    ix = (ix + delta + vals.Length) % vals.Length;
                    Set(key, vals[ix]);
                    shown.Text = labels[ix];
                    Append(name + " = " + labels[ix]);
                    if (key == "language") ShowSettingsFor(category);   // stay on this page; ReDUB re-renders rather than jumping home
                    if (key == "theme")
                        MessageBox.Show(this, "Launcher colors saved. Close and reopen Rebloom Launcher to apply them.",
                                        "Launcher colors", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    UpdateStatus();
                }
                catch (Exception ex)
                {
                    MessageBox.Show(this, ex.Message, "Could not save settings", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            };

            RoundButton left = ButtonAt(host, "\u2039", x, y - 4, 40, delegate { change(-1); }, false);
            left.Anchor = AnchorStyles.Right | AnchorStyles.Top;
            RoundButton right = ButtonAt(host, "\u203A", x + 214, y - 4, 40, delegate { change(1); }, false);
            right.Anchor = AnchorStyles.Right | AnchorStyles.Top;
            y += 62;
        }

        // ---------- pages ----------

        // The banner keeps the artwork's own 920:430 shape, from the window width, so nothing is cropped and no bands show.
        float dpiScale;
        float appliedScale = 1f;
        float UiScale
        {
            get
            {
                if (dpiScale <= 0f)
                {
                    try { using (Graphics g = CreateGraphics()) dpiScale = g.DpiX / 96f; }
                    catch { dpiScale = 1f; }
                }
                return Math.Max(appliedScale, dpiScale);
            }
        }

        void CentreContent()
        {
            if (contentHost == null) return;
            int cap = (int)(1280 * UiScale);
            int slack = Math.Max(0, (contentHost.ClientSize.Width - cap) / 2);
            Padding wanted = new Padding(slack, 0, slack, 0);
            if (contentHost.Padding != wanted) contentHost.Padding = wanted;
            content.PerformLayout();
        }

        void ApplyScaleLayout()
        {
            if (homeBottomRow != null) homeBottomRow.ColumnStyles[1].Width = 300 * UiScale;
            CentreContent();
            FitBanner();
        }

        void FitBanner()
        {
            if (gameGrid == null || content.ClientSize.Width < 10) return;
            float wanted = content.ClientSize.Width * 834f / 1886f;                      // the banner file's real shape
            wanted = Math.Max(180f, Math.Min(wanted, content.ClientSize.Height - 260f));   // never taller than the room the controls need
            if (Math.Abs(gameGrid.RowStyles[0].Height - wanted) > 0.5f)
            {
                gameGrid.RowStyles[0].Height = wanted;
                gameGrid.PerformLayout();
            }
        }

        void ShowHome()
        {
            Page("Game");

            TableLayoutPanel grid = new TableLayoutPanel();
            grid.Dock = DockStyle.Fill;
            grid.ColumnCount = 1;
            grid.RowCount = 2;
            grid.Padding = Padding.Empty;
            grid.Margin = Padding.Empty;
            grid.RowStyles.Add(new RowStyle(SizeType.Absolute, 327));   // the banner
            grid.RowStyles.Add(new RowStyle(SizeType.Percent, 100));    // badge, title, Play
            content.Controls.Add(grid);
            grid.Controls.Add(new BrandPanel { Dock = DockStyle.Fill, Margin = Padding.Empty }, 0, 0);

            // The banner keeps the artwork's shape; FitBanner runs again from OnShown and on every resize.
            gameGrid = grid;
            FitBanner();

            TableLayoutPanel bottomRow = new TableLayoutPanel();
            bottomRow.Dock = DockStyle.Fill;
            bottomRow.Margin = Padding.Empty;
            bottomRow.Padding = new Padding(36, 0, 36, 0);
            bottomRow.ColumnCount = 2;
            bottomRow.RowCount = 1;
            bottomRow.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100));
            bottomRow.ColumnStyles.Add(new ColumnStyle(SizeType.Absolute, 300));
            bottomRow.RowStyles.Add(new RowStyle(SizeType.Percent, 100));
            grid.Controls.Add(bottomRow, 0, 1);
            homeBottomRow = bottomRow;
            homeBottomRow.ColumnStyles[1].Width = 300 * UiScale;

            Panel left = new BufferedPanel();
            left.Dock = DockStyle.Fill;
            left.Margin = Padding.Empty;
            left.BackColor = Palette.Bg;
            bottomRow.Controls.Add(left, 0, 0);

            bool hasBuild = File.Exists(Runner);
            bool hasDisc = File.Exists(DiscForLanguage);
            string badgeText = !hasBuild ? "\u25CB  BUILD MISSING"
                             : !hasDisc ? "\u25CF  BUILD FOUND  /  DISC MISSING"
                             : "\u25CF  BUILD FOUND  /  WINDOWS x64";
            Label badge = LabelAt(badgeText, 9f, true);
            badge.ForeColor = !hasBuild ? Palette.Muted : !hasDisc ? Palette.Gold : Palette.Good;
            badge.SetBounds(0, 26, 420, 24);
            left.Controls.Add(badge);

            Label title = LabelAt("Sakura Wars: So Long, My Love", 20f, true);
            title.SetBounds(0, 60, 460, 44);
            left.Controls.Add(title);

            string subtitle = Language == "jp" ? "So Long, My Love, rebuilt for PC \u2014 Japanese voices (Disc 2)."
                                               : "So Long, My Love, rebuilt for PC \u2014 English voices (Disc 1).";
            if (!hasBuild) subtitle = "Run scripts/port.sh once, or use Install to point at the toolkit.";
            else if (!hasDisc) subtitle = Language == "jp"
                ? "Japanese voices need Disc 2 (SLUS_219.30). Put it in discs\\, or import it."
                : "English voices need Disc 1 (SLUS_219.27). Put it in discs\\, or import it.";
            Label desc = LabelAt(subtitle, 10f, false);
            desc.ForeColor = !hasBuild || !hasDisc ? Palette.Gold : Palette.Muted;
            desc.SetBounds(0, 108, 470, 30);
            left.Controls.Add(desc);

            Panel right = new BufferedPanel();
            right.Dock = DockStyle.Fill;
            right.Margin = Padding.Empty;
            right.BackColor = Palette.Bg;
            bottomRow.Controls.Add(right, 1, 0);

            play.Text = hasBuild && hasDisc ? "\u25B6   Play" : "Install";
            play.Primary = true;
            play.SetBounds(0, 24, 288, 58);
            right.Controls.Add(play);
            ButtonAt(right, "Check build", 0, 96, 140, delegate { VerifyBuild(); }, false);
            ButtonAt(right, "Game folder", 148, 96, 140, delegate { OpenPath(GameDir); }, false);
            ButtonAt(right, "Add shortcut", 0, 148, 140, delegate { AddShortcut(); }, false);
            ButtonAt(right, "Voices: " + (Language == "jp" ? "Japanese" : "English"), 148, 148, 140,
                delegate { Set("language", Language == "jp" ? "en" : "jp"); ShowHome(); }, false);

            UpdateStatus();
        }

        void ShowSetup()   // the Install page: import a copy of your own discs
        {
            Panel p = Standard("Install", "Install",
                "Import your disc image: it is copied into discs\\ so the original can be deleted. Disc 1 has English voices; Disc 2 has Japanese. Import both to switch languages.");

            Panel card = new Panel();
            card.BackColor = Palette.Card;
            card.SetBounds(36, 140, Math.Max(600, content.Width - 72), 300);
            card.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
            p.Controls.Add(card);

            Label game = LabelAt("Game", 10f, false);
            game.SetBounds(24, 28, 230, 26);
            card.Controls.Add(game);
            // Never show the developer's toolkit path in a packaged build: keep it relative to this folder.
            string runnerText = IsPortable ? @"game\" + Path.GetFileName(Runner) : Runner;
            Label runner = LabelAt(runnerText, 9f, false);
            runner.ForeColor = Palette.Muted;
            runner.SetBounds(262, 28, Math.Max(180, card.Width - 260), 26);
            card.Controls.Add(runner);

            PathRow(card, 82, "Disc 1 \u2014 English voices", "disc_en", DiscEn, false);
            PathRow(card, 142, "Disc 2 \u2014 Japanese voices", "disc_jp", DiscJp, false);

            Label hint = LabelAt("Disc 1 boots SLUS_219.27; Disc 2 boots SLUS_219.30. They are the same program with " +
                                 "different voice tracks, so one build plays either. To use Japanese voices, import Disc 2 " +
                                 "as well; each language keeps its own memory card.", 9.5f, false);
            hint.ForeColor = Palette.Muted;
            hint.SetBounds(24, 200, Math.Max(400, card.Width - 48), 60);
            hint.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
            card.Controls.Add(hint);

            RoundButton import = ButtonAt(p, "Import disc image\u2026", 36, 456, 210, delegate { ImportDisc(); }, false);
            import.Primary = true;
            ButtonAt(p, "Open discs folder", 256, 456, 170, delegate
            {
                string dir = Path.Combine(baseDir, "discs");
                Directory.CreateDirectory(dir);
                OpenPath(dir);
            }, false);
            ButtonAt(p, "Check build", 436, 456, 150, delegate { VerifyBuild(); }, false);
            ButtonAt(p, "Open game folder", 596, 456, 180, delegate { OpenPath(GameDir); }, false);
        }

        // Install page: pick the disc image for the selected voice language. An explicit choice wins over discs\.
        void ChooseDisc()
        {
            OpenFileDialog d = new OpenFileDialog();
            d.Filter = "Disc images (*.iso)|*.iso|All files (*.*)|*.*";
            d.Title = Language == "jp" ? "Choose the Japanese-voice disc (Disc 2)" : "Choose the English-voice disc (Disc 1)";
            if (d.ShowDialog(this) != DialogResult.OK) return;
            ImportFrom(d.FileName);
        }

        // Install page: copy the chosen disc image into discs\ so the folder is self-contained and the source copy can go.
        void ImportDisc()
        {
            OpenFileDialog d = new OpenFileDialog();
            d.Filter = "Disc images (*.iso)|*.iso|All files (*.*)|*.*";
            d.Title = Language == "jp" ? "Choose the Japanese-voice disc (Disc 2)" : "Choose the English-voice disc (Disc 1)";
            if (d.ShowDialog(this) != DialogResult.OK) return;
            ImportFrom(d.FileName);
        }

        // Copy `source` into discs\ and point the current voice language at it. Returns false when nothing was copied.
        bool ImportFrom(string source, bool quiet = false)
        {
            if (!source.EndsWith(".iso", StringComparison.OrdinalIgnoreCase))
            {
                MessageBox.Show(this, "Only a plain .iso can be imported. Convert a .bin/.cue or an archive first (source\\BUILDING.md).",
                                "Import disc image", MessageBoxButtons.OK, MessageBoxIcon.Information);
                return false;
            }

            string dir = Path.Combine(baseDir, "discs");
            Directory.CreateDirectory(dir);
            string target = Path.Combine(dir, Path.GetFileName(source));
            if (string.Equals(Path.GetFullPath(source), Path.GetFullPath(target), StringComparison.OrdinalIgnoreCase))
            {
                Set(Language == "jp" ? "disc_jp" : "disc_en", target);
                Append("disc already in discs\\: " + target);
                ShowSetup();
                return true;
            }
            if (File.Exists(target))
            {
                if (quiet) File.Delete(target);
                else if (MessageBox.Show(this, "A file with that name is already in discs\\. Replace it?", "Import disc image",
                                         MessageBoxButtons.YesNo, MessageBoxIcon.Question) != DialogResult.Yes)
                    return false;
            }

            long total;
            try { total = new FileInfo(source).Length; }
            catch (Exception ex)
            {
                MessageBox.Show(this, "The disc image could not be read:\n" + ex.Message, "Import disc image",
                                MessageBoxButtons.OK, MessageBoxIcon.Error);
                return false;
            }

            // Read the boot ELF name first; the filename is only a fallback.
            string inferred = SerialLanguage(source);
            if (inferred.Length == 0) inferred = DiscLanguage(source);
            if (inferred.Length == 0 && !quiet)
            {
                DialogResult pick = MessageBox.Show(this,
                    "Which disc is this?\n\nYes = Disc 1 (English voices)\nNo = Disc 2 (Japanese voices)\n\nCancel = do not import.",
                    "Which disc?", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);
                if (pick == DialogResult.Cancel) return false;
                inferred = pick == DialogResult.Yes ? "en" : "jp";
            }
            if (inferred.Length == 0) inferred = Language;

            try
            {
                DriveInfo drive = new DriveInfo(Path.GetPathRoot(Path.GetFullPath(dir)));
                if (total > 4294967295L && drive.DriveFormat.Equals("FAT32", StringComparison.OrdinalIgnoreCase))
                {
                    MessageBox.Show(this, "This disc is larger than 4 GB, and " + drive.Name + " is formatted as FAT32.\n\n" +
                                    "FAT32 cannot store a file this large. Use an NTFS or exFAT drive for discs\\.",
                                    "Import disc image", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                    return false;
                }
                if (drive.AvailableFreeSpace < total + (64L << 20))
                {
                    MessageBox.Show(this, "There is not enough free space in " + drive.Name + ".\n\n" +
                                    "Needed: " + ((total + (64L << 20)) >> 20).ToString("N0") + " MB\n" +
                                    "Free:   " + (drive.AvailableFreeSpace >> 20).ToString("N0") + " MB",
                                    "Import disc image", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                    return false;
                }
            }
            catch { }

            long megabytes = total >> 20;
            if (!quiet && MessageBox.Show(this, "Copy " + Path.GetFileName(source) + " (" + megabytes.ToString("N0") +
                                        " MB) into this folder's discs\\?\n\nAfterwards the copy you imported from can be deleted.",
                                "Import disc image", MessageBoxButtons.YesNo, MessageBoxIcon.Question) != DialogResult.Yes)
                return false;

            using (ImportForm form = new ImportForm(source, target))
            {
                DialogResult r = form.ShowDialog(this);
                try { File.AppendAllText(Path.Combine(baseDir, "import-trace.txt"), DateTime.Now.ToString("HH:mm:ss.fff") + " dialog=" + r + Environment.NewLine); } catch { }
                if (r != DialogResult.OK)
                {
                    Append("import cancelled");
                    return false;
                }
            }
            try
            {
                long copied = new FileInfo(target).Length;
                if (copied != total)
                {
                    File.Delete(target);
                    Append("import failed: copied " + (copied >> 20) + " MB of " + megabytes + " MB");
                    MessageBox.Show(this, "The copy is incomplete (" + (copied >> 20).ToString("N0") + " of " +
                                    megabytes.ToString("N0") + " MB). The partial file was removed; try again.",
                                    "Import disc image", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return false;
                }
            }
            catch (Exception ex)
            {
                Append("import check failed: " + ex.Message);
                return false;
            }
            string slot = inferred;
            Set(slot == "jp" ? "disc_jp" : "disc_en", target);
            if (inferred != Language)
            {
                Set("language", inferred);
                Append("imported as the " + (inferred == "jp" ? "Japanese" : "English") + "-voice disc (from its boot ELF)");
            }
            Append("imported " + Path.GetFileName(source) + " (" + megabytes.ToString("N0") + " MB)");
            ShowSetup();
            return true;
        }

        void PathRow(Panel card, int y, string label, string key, string value, bool folder)
        {
            Label l = LabelAt(label, 10f, false);
            l.SetBounds(24, y + 6, 230, 26);
            card.Controls.Add(l);

            TextBox box = new TextBox();
            box.Text = value;
            box.SetBounds(262, y, Math.Max(180, card.Width - 262 - 130), 28);
            box.BackColor = Palette.Field;
            box.ForeColor = Palette.Ink;
            box.BorderStyle = BorderStyle.FixedSingle;
            box.Font = new Font("Consolas", 9f);
            box.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
            Action commit = delegate
            {
                if (box.IsDisposed) return;
                string path = box.Text.Trim().Trim('"');
                if (path.Length == 0) return;
                if (!File.Exists(path))
                {
                    MessageBox.Show(this, "That disc image is not there:\n" + path, "Disc image",
                                    MessageBoxButtons.OK, MessageBoxIcon.Warning);
                    return;
                }
                string dir = Path.Combine(baseDir, "discs");
                string root = Path.GetFullPath(dir).TrimEnd(Path.DirectorySeparatorChar) + Path.DirectorySeparatorChar;
                string full = Path.GetFullPath(path);
                if (full.StartsWith(root, StringComparison.OrdinalIgnoreCase))
                {
                    Set(key, full);
                    UpdateStatus();
                    return;
                }
                ImportFrom(full);   // every external path is copied into discs\
            };
            box.KeyDown += delegate(object s, KeyEventArgs e)
            {
                if (e.KeyCode != Keys.Enter) return;
                e.SuppressKeyPress = true;
                commit();
            };
            box.Leave += delegate { commit(); };
            card.Controls.Add(box);

            RoundButton browse = new RoundButton();
            browse.Text = "Browse";
            browse.SetBounds(card.Width - 118, y, 94, 30);
            browse.Anchor = AnchorStyles.Top | AnchorStyles.Right;
            browse.Click += delegate
            {
                if (folder)
                {
                    FolderBrowserDialog d = new FolderBrowserDialog();
                    if (d.ShowDialog(this) == DialogResult.OK) box.Text = d.SelectedPath;
                }
                else
                {
                    OpenFileDialog d = new OpenFileDialog();
                    d.Filter = "Disc images (*.iso)|*.iso|All files (*.*)|*.*";
                    if (d.ShowDialog(this) == DialogResult.OK) ImportFrom(d.FileName);
                }
            };
            card.Controls.Add(browse);
        }

        void ShowSettings(string cat)
        {
            category = cat;
            string help = cat == "Game" ? "Language, the memory card and where things live."
                        : cat == "Advanced" ? "Diagnostics. Change these only when something is wrong."
                        : cat == "Controls" ? "Keyboard and gamepad bindings. The game reads the files when you return to its window."
                        : cat == "Display" ? "Display-side options. Launcher colors apply when the launcher reopens. Exclusive full screen is the default; Borderless is the safer choice if it causes trouble."
                        : "Display-side options. The game's own picture is not modified.";
            Panel p = Standard("Settings", "Settings", help);

            string[] categories = { "Display", "Graphics", "Controls", "Game", "Advanced" };
            for (int i = 0; i < categories.Length; i++)
            {
                string name = categories[i];   // the loop variable itself would be captured, and be past the end by the time it is clicked
                RoundButton b = ButtonAt(p, name, 36, 140 + i * 54, 160,
                    delegate { ShowSettingsFor(name); }, false);
                b.Selected = name == cat;
            }

            Panel card = new Panel();
            card.BackColor = Palette.Card;
            // A row spans 760 px at most: past that the label and its stepper drift so far apart that the row reads as
            // two unrelated things, which is what happened at 1920 px wide.
            card.SetBounds(228, 140, Math.Min(760, Math.Max(560, content.Width - 264)),
                cat == "Display" ? 540 : 460);
            card.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
            p.Controls.Add(card);

            int y = 24;
            if (cat == "Display")
            {
                Choice(card, ref y, "Aspect ratio", "aspect", new string[] { "4:3", "16:9", "Stretch" },
                    new string[] { "4:3", "16:9", "fill" }, "16:9");
                Choice(card, ref y, "Window", "fullscreen", new string[] { "Windowed", "Fullscreen" },
                    new string[] { "0", "1" }, "1");
                Choice(card, ref y, "Fullscreen mode", "fs_mode", new string[] { "Borderless", "Exclusive" },
                    new string[] { "borderless", "exclusive" }, "exclusive");
                Choice(card, ref y, "V-Sync", "vsync", new string[] { "On", "Adaptive", "Off" },
                    new string[] { "fifo", "relaxed", "immediate" }, "fifo");
                Choice(card, ref y, "Frames in flight", "latency", new string[] { "1", "2", "3", "4" },
                    new string[] { "1", "2", "3", "4" }, "2");
                Choice(card, ref y, "Internal resolution", "scale", new string[] { "Game's own", "1x", "2x", "3x", "4x" },
                    new string[] { "", "1", "2", "3", "4" }, "3");
                Choice(card, ref y, "Deinterlace", "deinterlace", new string[] { "Blend (smooth)", "Off (sharper)" },
                    new string[] { "blend", "off" }, "off");
                Choice(card, ref y, "Launcher colors", "theme", new string[] { "Sakura", "Classic (gold)" },
                    new string[] { "sakura", "classic" }, "sakura");
            }
            else if (cat == "Graphics")
            {
                Choice(card, ref y, "Text and menus", "sharp", new string[] { "Game's own", "Soft", "Sharp", "Sharpest" },
                    new string[] { "", "0", "1", "2" }, "");
                Choice(card, ref y, "Picture look", "look",
                    new string[] { "Crisp", "Crisp + edges", "Soft", "Soft + edges", "Sharp", "Sharp + edges" },
                    new string[] { "0", "1", "2", "3", "4", "5" }, "1");
                Choice(card, ref y, "Graphics API", "backend", new string[] { "Direct3D 12", "Vulkan" },
                    new string[] { "dx12", "vulkan" }, "dx12");
                Choice(card, ref y, "Frame pacing", "pacing", new string[] { "Clock", "Sound device" },
                    new string[] { "clock", "audio" }, "clock");
                Label note = LabelAt("Picture look chooses Crisp/Soft/Sharp scaling and whether smooth-edge AA is applied. " +
                                     "Text and menus filters 2D art separately. Clock paces evenly; use Sound device only if a " +
                                     "wireless headset makes the picture judder.", 9.5f, false);
                note.ForeColor = Palette.Muted;
                note.SetBounds(24, y + 4, Math.Max(380, card.Width - 48), 64);
                note.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
                card.Controls.Add(note);
                ButtonAt(card, "Performance preset", 24, 350, 210, delegate { ApplyGraphicsPreset(false); }, false);
                ButtonAt(card, "Quality preset", 250, 350, 190, delegate { ApplyGraphicsPreset(true); }, false);

                Label texLabel = LabelAt("HD textures", 9.5f, false);
                texLabel.SetBounds(24, 408, 150, 24);
                card.Controls.Add(texLabel);
                TextBox texBox = new TextBox();
                texBox.Text = Get("textures", "");
                texBox.SetBounds(180, 406, Math.Max(180, card.Width - 310), 26);
                texBox.BackColor = Palette.Field;
                texBox.ForeColor = Palette.Ink;
                texBox.BorderStyle = BorderStyle.FixedSingle;
                texBox.Font = new Font("Consolas", 9f);
                texBox.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
                texBox.TextChanged += delegate { Set("textures", texBox.Text); };
                card.Controls.Add(texBox);
                RoundButton texBrowse = new RoundButton();
                texBrowse.Text = "Browse";
                texBrowse.SetBounds(card.Width - 112, 404, 88, 30);
                texBrowse.Anchor = AnchorStyles.Top | AnchorStyles.Right;
                texBrowse.Click += delegate
                {
                    FolderBrowserDialog pick = new FolderBrowserDialog();
                    pick.Description = "Folder with PNG texture overrides (optional; no pack is included)";
                    if (pick.ShowDialog(this) == DialogResult.OK)
                    {
                        Set("textures", pick.SelectedPath);
                        ShowSettingsFor("Graphics");
                    }
                };
                card.Controls.Add(texBrowse);
            }
            else if (cat == "Controls")
            {
                ButtonAt(card, "Keyboard controls...", 24, 28, 230, delegate
                {
                    using (KeyboardControlsForm f = new KeyboardControlsForm(GameDir, delegate { Append("keyboard controls updated"); }))
                        f.ShowDialog(this);
                }, false);
                ButtonAt(card, "Gamepad controls...", 270, 28, 230, delegate
                {
                    using (GamepadControlsForm f = new GamepadControlsForm(GameDir, delegate { Append("gamepad controls updated"); }))
                        f.ShowDialog(this);
                }, false);
                Label note = LabelAt("Keyboard: click Change, then press the new key - arrows, Tab and Enter work. " +
                                     "Gamepad: choose the controller button for each game action. Start, Select and the " +
                                     "triggers stay standard; L3 and R3 map the stick presses. Bindings apply as soon " +
                                     "as the game window has focus again.", 9.5f, false);
                note.ForeColor = Palette.Muted;
                note.SetBounds(24, 92, Math.Max(400, card.Width - 48), 90);
                note.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
                card.Controls.Add(note);
                ButtonAt(card, "Open keys.ini", 24, 196, 190, delegate { OpenPath(Path.Combine(GameDir, "keys.ini")); }, false);
                ButtonAt(card, "Open gamepad.ini", 228, 196, 190, delegate
                {
                    GamepadControlsForm.EnsureFile(GameDir);
                    OpenPath(Path.Combine(GameDir, "gamepad.ini"));
                }, false);
            }
            else if (cat == "Game")
            {
                Choice(card, ref y, "Voice language", "language", new string[] { "English (Disc 1)", "Japanese (Disc 2)" },
                    new string[] { "en", "jp" }, "en");
                Choice(card, ref y, "When opened", "bypass", new string[] { "Show the launcher", "Play immediately" },
                    new string[] { "0", "1" }, "0");
                Label note = LabelAt("Each language keeps its own memory card: play-english.ps2 and play-japanese.ps2.\n" +
                                     "Play immediately skips this window and starts the game; hold Shift (or run with --launcher) to open it.", 9.5f, false);
                note.ForeColor = Palette.Muted;
                note.SetBounds(24, y + 6, Math.Max(380, card.Width - 48), 60);
                note.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
                card.Controls.Add(note);
            }
            else
            {
                int y2 = 150;
                ButtonAt(card, "De-dither: " + (Get("dedither", "1") == "1" ? "On (temporal)" : "Off"), 24, 24, 260, delegate
                {
                    Set("dedither", Get("dedither", "1") == "1" ? "0" : "1");
                    ShowSettingsFor("Advanced");
                }, false);
                Label note = LabelAt("The runner is started with the settings above. If the game will not start, use " +
                                     "Support to read the log, and Install to point the launcher at the toolkit.", 9.5f, false);
                note.ForeColor = Palette.Muted;
                note.SetBounds(24, 80, Math.Max(380, card.Width - 48), 64);
                note.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
                card.Controls.Add(note);
                Choice(card, ref y2, "Controller menu", "menu_chord", new string[] { "Off", "Select + Start", "Guide only" },
                    new string[] { "off", "on", "guide" }, "off");
                Choice(card, ref y2, "Speed limit", "limit", new string[] { "Normal", "Unlocked" },
                    new string[] { "normal", "off" }, "normal");
                Label speed = LabelAt("The controller chord is held Select then Start; with Off, Select goes straight to the game " +
                                      "and F1 (or the key bound to \"menu\" in keys.ini) is the only way in. Unlocked removes the " +
                                      "wait for the clock and the sound device: it measures how fast the port runs, and the sound " +
                                      "plays out of step. Not a play mode.", 9.5f, false);
                speed.ForeColor = Palette.Muted;
                speed.SetBounds(24, y2 + 58, Math.Max(380, card.Width - 48), 60);
                speed.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
                card.Controls.Add(speed);
                ButtonAt(card, "Clear launcher settings", 24, 400, 230, delegate
                {
                    if (MessageBox.Show(this, "Put every setting back to its default?", "Sakura Wars",
                                        MessageBoxButtons.YesNo) != DialogResult.Yes) return;
                    ini.Clear();
                    SaveIni();
                    Append("settings cleared");
                    ShowSettings("Display");
                }, false);
                ButtonAt(card, "Open launcher.ini", 264, 400, 200, delegate { OpenPath(iniPath); }, false);
            }
        }

        void ShowSettingsFor(string cat) { ShowSettings(cat); }

        void ApplyGraphicsPreset(bool quality)
        {
            if (GameRunning())
            {
                MessageBox.Show(this, "Save and close the game first. The in-game F1 menu applies picture changes live.",
                                "Game is running", MessageBoxButtons.OK, MessageBoxIcon.Information);
                return;
            }
            Set("scale", quality ? "2" : "1");
            Set("sharp", quality ? "2" : "0");
            Set("look", quality ? "5" : "0");
            Set("vsync", quality ? "fifo" : "immediate");
            Set("latency", quality ? "2" : "1");
            Set("backend", "dx12");
            Set("pacing", "clock");
            Set("limit", "normal");
            Append("graphics preset: " + (quality ? "quality (2x, sharpest 2D, V-Sync)" : "performance (1x, soft 2D, no V-Sync)"));
            ShowSettingsFor("Graphics");
            UpdateStatus();
        }

        void ShowSupport()
        {
            Panel p = Standard("Support", "Support & activity", "What the launcher did, and where things are. Nothing is uploaded.");
            ButtonAt(p, "Open game folder", 36, 140, 190, delegate { OpenPath(GameDir); }, false);
            ButtonAt(p, "Open logs", 240, 140, 150, delegate
            {
                string logs = Path.Combine(GameDir, "logs");
                if (Directory.Exists(logs)) OpenPath(logs);
                else { Append("no game logs yet"); OpenPath(GameDir); }
            }, false);
            ButtonAt(p, "Check build", 404, 140, 150, delegate { VerifyBuild(); }, false);
            ButtonAt(p, "Open cache", 568, 140, 140, delegate { OpenPath(CacheDir); }, false);
            ButtonAt(p, "Copy diagnostics", 36, 190, 200, delegate { CopyDiagnostics(); }, false);
            ButtonAt(p, "Clear log", 250, 190, 130, delegate { log.Clear(); }, false);
            ButtonAt(p, "Clear cache", 394, 190, 150, delegate { ClearCache(); }, false);

            Label cache = LabelAt("Code and VU caches: " + (CacheBytes() >> 20).ToString("N0") + " MB. Clearing them is safe; the first run afterwards is slower.", 9.5f, false);
            cache.ForeColor = Palette.Muted;
            cache.SetBounds(36, 246, Math.Max(600, content.Width - 72), 24);
            cache.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right;
            p.Controls.Add(cache);

            log.SetBounds(36, 282, Math.Max(600, content.Width - 72), Math.Max(180, content.Height - 322));
            log.Anchor = AnchorStyles.Top | AnchorStyles.Left | AnchorStyles.Right | AnchorStyles.Bottom;
            p.Controls.Add(log);
        }

        string CacheDir { get { return Path.Combine(GameDir, "data"); } }

        long CacheBytes()
        {
            long total = 0;
            foreach (string name in new string[] { "ee-live", "vu1-live" })
            {
                try
                {
                    string dir = Path.Combine(CacheDir, name);
                    if (Directory.Exists(dir))
                        foreach (FileInfo f in new DirectoryInfo(dir).GetFiles("*", SearchOption.AllDirectories)) total += f.Length;
                }
                catch { }
            }
            return total;
        }

        void ClearCache()
        {
            if (MessageBox.Show(this, "Delete the translated-code and VU caches?\n\nSaves and replays are not touched. The next run is slower while they are rebuilt.",
                                "Clear cache", MessageBoxButtons.YesNo, MessageBoxIcon.Question) != DialogResult.Yes) return;
            foreach (string name in new string[] { "ee-live", "vu1-live" })
            {
                try
                {
                    string dir = Path.Combine(CacheDir, name);
                    if (Directory.Exists(dir)) Directory.Delete(dir, true);
                }
                catch (Exception ex) { Append("could not clear " + name + ": " + ex.Message); }
            }
            Append("code and VU caches cleared");
            ShowSupport();
        }

        void CopyDiagnostics()
        {
            try
            {
                string text = "Rebloom Launcher " + Application.ProductVersion + Environment.NewLine +
                              "mode: " + (IsPortable ? "portable (game\\ beside the launcher)" : "checkout (toolkit folder)") + Environment.NewLine +
                              "root: " + Root + Environment.NewLine +
                              "runner: " + Runner + Environment.NewLine +
                              "game: " + GameDir + Environment.NewLine +
                              "disc en: " + DiscEn + Environment.NewLine +
                              "disc jp: " + DiscJp + Environment.NewLine +
                              "language: " + Language + Environment.NewLine +
                              "os: " + Environment.OSVersion;
                Clipboard.SetText(text);
                Append("diagnostics copied to clipboard");
            }
            catch (Exception ex) { Append("copy diagnostics failed: " + ex.Message); }
        }

        void ShowAbout()
        {
            Panel p = Standard("About", "Rebloom",
                "A community edition of Sakura Wars V: So Long, My Love, rebuilt for PC.");
            Label copy = LabelAt(
                "Rebloom is a community static recompilation of Sakura Wars V: So Long, My Love.\n\n" +
                "Built on ps2-native-recomp by exoteric33, which is built on ps2-web-recomp by Samir Nuri.\n\n" +
                "Launcher 0.1. No game data, disc image or BIOS is included; use your own discs.\n" +
                "Not affiliated with Sega or Red Entertainment.",
                11f, false);
            copy.SetBounds(38, 140, 800, 170);
            p.Controls.Add(copy);
            ButtonAt(p, "Features & credits", 36, 330, 230, delegate { OpenDocument(Path.Combine(baseDir, "README.md")); }, false);
            ButtonAt(p, "Third-party notices", 276, 330, 210, delegate { OpenDocument(Path.Combine(baseDir, "THIRD-PARTY.md")); }, false);
            ButtonAt(p, "License", 496, 330, 150, delegate { OpenDocument(Path.Combine(baseDir, "LICENSE")); }, false);
        }

        void OpenDocument(string path)
        {
            if (!File.Exists(path))
            {
                MessageBox.Show(this, "This is not there yet:\n" + path, "Sakura Wars");
                return;
            }
            Process.Start(new ProcessStartInfo(path) { UseShellExecute = true });
        }

        // ---------- state ----------

        bool Ready()
        {
            return File.Exists(Runner) && File.Exists(DiscForLanguage);
        }

        bool GameRunning()
        {
            Process[] all = Process.GetProcessesByName("SakuraWarsV");
            Process[] old = Process.GetProcessesByName("ps2run");
            bool found = all.Length + old.Length > 0;
            foreach (Process p in all) p.Dispose();
            foreach (Process p in old) p.Dispose();
            return found;
        }

        void UpdateStatus()
        {
            bool running = GameRunning();
            bool build = File.Exists(Runner);
            bool disc = File.Exists(DiscForLanguage);
            play.Enabled = !running;
            play.Text = running ? "Game is running" : (build && disc) ? "\u25B6   Play" : "Install";

            string state = running ? "Game is running \u2014 save and close before changing settings."
                : !build ? "Build missing \u2014 run scripts/port.sh once, or use Install to point at the toolkit."
                : !disc ? "Disc image missing \u2014 set it under Install."
                : "Ready \u2014 " + (Language == "jp" ? "Japanese voices" : "English voices") + " \u00B7 " +
                  Get("aspect", "16:9") + " \u00B7 " + (Get("scale", "3").Length > 0 ? Get("scale", "3") + "x" : "game's own resolution");
            status.Text = state;
            status.ForeColor = running ? Palette.Muted : (!build || !disc) ? Palette.Gold : Palette.Good;

            if (running && job != null && job.HasExited) job = null;
        }

        void Append(string line)
        {
            if (IsDisposed) return;
            if (InvokeRequired) { BeginInvoke(new Action<string>(Append), line); return; }
            log.AppendText(DateTime.Now.ToString("HH:mm:ss") + "  " + line + Environment.NewLine);
            log.SelectionStart = log.TextLength;
            log.ScrollToCaret();
        }

        void VerifyBuild()
        {
            Append("runner: " + Runner + (File.Exists(Runner) ? "  (found)" : "  (MISSING)"));
            Append("game folder: " + GameDir + (Directory.Exists(GameDir) ? "  (found)" : "  (MISSING)"));
            Append("disc (en): " + DiscEn + (File.Exists(DiscEn) ? "  (found)" : "  (MISSING)"));
            Append("disc (jp): " + DiscJp + (File.Exists(DiscJp) ? "  (found)" : "  (MISSING)"));
            if (Directory.Exists(GameDir))
            {
                long bytes = 0;
                try
                {
                    foreach (FileInfo f in new DirectoryInfo(GameDir).GetFiles()) bytes += f.Length;
                }
                catch { }
                Append("game folder: " + (bytes >> 20) + " MiB of caches and cards");
            }
            Append("mode: " + (IsPortable ? "portable (game\\ beside the launcher)" : "checkout (toolkit folder)"));
            ShowSupport();   // the log lives here: wherever Check build was pressed, the answer is now on screen
        }

        void AddShortcut()
        {
            try
            {
                string exe = Application.ExecutablePath;
                string desktop = Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
                string link = Path.Combine(desktop, "Sakura Wars V - Rebloom.lnk");
                // Remove the pre-rename shortcut if this folder was upgraded in place.
                string oldLink = Path.Combine(desktop, "Rebloom Launcher.lnk");
                if (File.Exists(oldLink)) File.Delete(oldLink);
                string script = "$s=(New-Object -ComObject WScript.Shell).CreateShortcut('" + link.Replace("'", "''") + "');" +
                                "$s.TargetPath='" + exe.Replace("'", "''") + "';" +
                                "$s.WorkingDirectory='" + Path.GetDirectoryName(exe).Replace("'", "''") + "';" +
                                "$s.Description='Sakura Wars V: So Long, My Love - Rebloom';$s.Save()";
                Process.Start(new ProcessStartInfo("powershell.exe",
                    "-NoProfile -ExecutionPolicy Bypass -Command \"" + script + "\"") { UseShellExecute = false, CreateNoWindow = true });
                Append("shortcut: " + link);
            }
            catch (Exception ex) { Append("shortcut failed: " + ex.Message); }
        }

        void OpenPath(string path)
        {
            if (File.Exists(path)) { Process.Start("notepad.exe", "\"" + path + "\""); return; }
            if (Directory.Exists(path)) { Process.Start(new ProcessStartInfo(path) { UseShellExecute = true }); return; }
            MessageBox.Show(this, "This is not there yet:\n" + path, "Sakura Wars");
        }

        // ---------- running ----------

        // The one place the launch line is built, so the preview on the Game page and the real launch cannot drift.
        List<string> LaunchArgs()
        {
            List<string> args = new List<string>();
            args.Add("--disc");
            args.Add(Quote(DiscForLanguage));
            args.Add("--game-dir");
            args.Add(Quote(GameDir));
            args.Add("--memcard");
            args.Add(Quote(MemcardPath));
            args.Add(Get("fullscreen", "1") == "1" ? "--fullscreen" : "--window");
            return args;
        }

        string LaunchLine()
        {
            if (!File.Exists(Runner)) return "game\\SakuraWarsV.exe is missing";
            if (DiscForLanguage.Length == 0) return "Put a disc image in discs\\ (or choose one under Setup)";
            return Quote(Runner) + " " + string.Join(" ", LaunchArgs().ToArray());
        }

        void ApplyEnvironment(ProcessStartInfo psi)
        {
            // "Game's own" (empty) leaves the variable unset, so keys.ini and the F1 menu keep their values.
            if (Get("scale", "3").Length > 0) psi.EnvironmentVariables["PS2_SCALE"] = Get("scale", "3");
            if (Get("sharp", "").Length > 0) psi.EnvironmentVariables["PS2_SHARP_2D"] = Get("sharp", "");
            psi.EnvironmentVariables["PS2_LOOK"] = Get("look", "1");
            string textures = Get("textures", "");
            if (textures.Length > 0)
            {
                string full = ResolvedPath(textures);
                if (Directory.Exists(full)) psi.EnvironmentVariables["PS2_TEX_OVERRIDE_DIR"] = full;
                else Append("texture folder missing: " + full);
            }
            psi.EnvironmentVariables["PS2_ASPECT"] = Get("aspect", "16:9");
            psi.EnvironmentVariables["PS2_EXCLUSIVE_FULLSCREEN"] = Get("fs_mode", "exclusive") == "exclusive" ? "1" : "0";
            if (Get("deinterlace", "off") == "off") psi.EnvironmentVariables["PS2_NO_DEINTERLACE"] = "1";
            if (Get("dedither", "1") == "1")
            {
                string shader = Path.Combine(baseDir, @"game\blit-dedither.wgsl");
                if (File.Exists(shader)) psi.EnvironmentVariables["PS2_BLIT_SHADER"] = shader;
                else Append("de-dither shader missing: " + shader);
            }
            psi.EnvironmentVariables["PS2_PRESENT_MODE"] = Get("vsync", "fifo");
            psi.EnvironmentVariables["PS2_FRAME_LATENCY"] = Get("latency", "2");
            psi.EnvironmentVariables["PS2_WINDOW_TITLE"] = "Sakura Wars V: So Long, My Love \u2014 Rebloom";
            string backend = Get("backend", "dx12");
            if (backend.Length > 0) psi.EnvironmentVariables["PS2_GPU_BACKEND"] = backend;
            if (Get("pacing", "clock") == "audio") psi.EnvironmentVariables["PS2_PACE"] = "audio";
            if (Get("limit", "normal") == "off") psi.EnvironmentVariables["PS2_NO_LIMIT"] = "1";
            if (Get("menu_chord", "off") != "off") psi.EnvironmentVariables["PS2_MENU_CHORD"] = Get("menu_chord", "off");
        }

        void PlayGame()
        {
            if (job != null && !job.HasExited)
            {
                MessageBox.Show(this, "The game is already running.", "Sakura Wars");
                return;
            }
            if (DiscForLanguage.Length == 0 || (direct && !File.Exists(DiscForLanguage)))
            {
                if (direct)
                {
                    Append("direct launch: the selected disc image is missing: " + DiscForLanguage);
                    Environment.ExitCode = 2;
                    closingAfterLaunch = true;
                    Close();
                    return;
                }
                ShowSetup();
                MessageBox.Show(this, Language == "jp"
                    ? "Japanese voices need Disc 2 (SLUS_219.30).\n\nPut it in discs\\ or use Import disc image."
                    : "English voices need Disc 1 (SLUS_219.27).\n\nPut it in discs\\ or use Import disc image.",
                    "Rebloom Launcher", MessageBoxButtons.OK, MessageBoxIcon.Information);
                return;
            }

            ProcessStartInfo psi = new ProcessStartInfo();
            psi.FileName = Runner;
            psi.Arguments = string.Join(" ", LaunchArgs().ToArray());
            psi.WorkingDirectory = Root;
            psi.UseShellExecute = false;
            ApplyEnvironment(psi);

            try
            {
                Directory.CreateDirectory(GameDir);   // the runner wants its game folder to exist
                Directory.CreateDirectory(MemcardDir);
                Append("play: " + LaunchLine());
                Append("      display: " + (Get("scale", "3").Length > 0 ? Get("scale", "3") + "x" : "game's own resolution") +
                       ", " + (Get("sharp", "").Length > 0 ? "2D filter " + Get("sharp", "") : "game's own 2D filter") +
                       ", aspect " + Get("aspect", "16:9"));
                Append("      PS2_PRESENT_MODE=" + Get("vsync", "fifo") + "  PS2_FRAME_LATENCY=" + Get("latency", "2") +
                       "  PS2_GPU_BACKEND=" + Get("backend", "dx12"));
                job = Process.Start(psi);
                job.EnableRaisingEvents = true;
                job.Exited += delegate { try { BeginInvoke(new Action(UpdateStatus)); } catch { } };
                Append("started pid " + job.Id + " \u2014 the game runs in its own window");
                UpdateStatus();
            }
            catch (Exception ex)
            {
                Append("launch failed: " + ex.Message);
                if (direct)
                {
                    Environment.ExitCode = 3;
                    closingAfterLaunch = true;
                    Close();
                    return;
                }
                MessageBox.Show(this, "The game did not start:\n" + ex.Message + "\n\nLine:\n" + LaunchLine(),
                                "Sakura Wars");
            }
        }

        static string Quote(string s) { return "\"" + s + "\""; }

        protected override void OnFormClosing(FormClosingEventArgs e)
        {
            if (!closingAfterLaunch && GameRunning() && MessageBox.Show(this,
                    "The game is still running. Close the launcher anyway?\n\nThe game keeps running in its own window.",
                    "Rebloom Launcher", MessageBoxButtons.YesNo, MessageBoxIcon.Question) != DialogResult.Yes)
            {
                e.Cancel = true;
                return;
            }
            if (!direct) SaveIni();
            base.OnFormClosing(e);
        }

        protected override void OnShown(EventArgs e)
        {
            base.OnShown(e);
            if (direct)
            {
                // RecompLauncher: start the game, wait for it to close, and pass its exit code back without a window.
                closingAfterLaunch = true;
                BeginInvoke(new Action(delegate
                {
                    PlayGame();
                    if (job == null) { Close(); return; }
                    job.EnableRaisingEvents = true;
                    job.Exited += delegate
                    {
                        try
                        {
                            BeginInvoke(new Action(delegate
                            {
                                Environment.ExitCode = job.ExitCode;
                                Close();
                            }));
                        }
                        catch { }
                    };
                    if (job.HasExited)
                    {
                        Environment.ExitCode = job.ExitCode;
                        Close();
                    }
                }));
                return;
            }
            // QA hook: --ui-scale 1.5 renders the same layout at 150% without changing Windows' display DPI.
            if (uiScale > 0.01f && Math.Abs(uiScale - 1f) > 0.01f)
            {
                // Do not outgrow the screen: 200% on a 1080p display would put the right-hand controls off-screen.
                Rectangle work = Screen.FromControl(this).WorkingArea;
                float widthFit = Math.Max(1f, (work.Width - 40f) / 1200f);
                appliedScale = Math.Min(uiScale, widthFit);
                SuspendLayout();
                Scale(new SizeF(appliedScale, appliedScale));
                ResumeLayout(true);
                int w = Math.Min(Width, work.Width), h = Math.Min(Height, work.Height);
                if (Width != w || Height != h) Size = new Size(w, h);
            }
            ApplyScaleLayout();
            if (!string.IsNullOrEmpty(importPath))
            {
                // Rebloom Launcher.exe --import <file>: copy it in, then leave (a script has no use for the window).
                BeginInvoke(new Action(delegate { ImportFrom(importPath, true); Close(); }));
                return;
            }
            bool shift = (Control.ModifierKeys & Keys.Shift) != 0;
            bool bypass = !forceLauncher && !shift && (autoPlay || Get("bypass", "0") == "1");
            if (bypass)
            {
                if (Ready())
                {
                    closingAfterLaunch = true;
                    BeginInvoke(new Action(delegate
                    {
                        PlayGame();
                        if (job != null && !job.HasExited) Close();
                        else closingAfterLaunch = false;
                    }));
                }
                else ShowSetup();
                return;
            }
            if (autoPlay) BeginInvoke(new Action(PlayGame));  // --play --launcher: fill the window, then start
        }

        static string ArgValue(string[] args, string name)
        {
            for (int i = 0; i < args.Length; ++i)
            {
                if (string.Equals(args[i], name, StringComparison.Ordinal))
                    return i + 1 < args.Length ? args[i + 1] : null;
                if (args[i].StartsWith(name + "=", StringComparison.Ordinal))
                    return args[i].Substring(name.Length + 1);
            }
            return null;
        }

        [STAThread]
        static void Main(string[] args)
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            bool play = Array.IndexOf(args, "--play") >= 0;
            bool forceLauncher = Array.IndexOf(args, "--launcher") >= 0;
            bool direct = Array.IndexOf(args, "--direct") >= 0;
            int at = Array.IndexOf(args, "--import");
            string import = at >= 0 && at + 1 < args.Length ? args[at + 1] : null;
            string disc1 = ArgValue(args, "--disc1");
            string disc2 = ArgValue(args, "--disc2");
            string lang = ArgValue(args, "--lang");
            string data = ArgValue(args, "--data");
            float uiScale = 1f;
            int scaleAt = Array.IndexOf(args, "--ui-scale");
            if (scaleAt >= 0 && scaleAt + 1 < args.Length)
            {
                float parsed;
                if (float.TryParse(args[scaleAt + 1], out parsed) && parsed >= 0.5f && parsed <= 3f) uiScale = parsed;
            }
            Application.Run(new Launcher(play, import, uiScale, forceLauncher, direct, disc1, disc2, lang, data));
        }
    }
}
