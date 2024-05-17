/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;  
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=11:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char norm_fg[] = "#D8DEE9";
static const char norm_bg[] = "#2E3440";


static const char sel_fg[] = "#d8dee9";
static const char sel_bg[] = "#5e81ac";

static const char urg_fg[] = "#bf616a";
static const char urg_bg[] = "#81a1c1";

static const char hl_norm_fg[] = "#81a1c1";
static const char hl_norm_bg[] = "";

static const char hl_sel_fg[] = "#3b4252";
static const char hl_sel_bg[] = "";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { norm_fg, norm_bg },
	[SchemeSel] = { sel_fg, sel_bg },
	[SchemeOut] = { norm_fg, norm_bg },
  [SchemeSelHighlight] = { hl_sel_fg, sel_bg },
  [SchemeNormHighlight] = { hl_norm_fg, norm_bg },
  [SchemeMid] = { norm_fg, norm_bg },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 1;
