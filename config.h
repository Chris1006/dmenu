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

static const char norm_fg[] = "#bdae93";
static const char norm_bg[] = "#1d2021";
static const char norm_border[] = "#504945";

static const char bar_border[] = "#504945";

static const char sel_fg[] = "#ebdbb2";
static const char sel_bg[] = "#504945";
static const char sel_border[] = "#bdae93";

static const char urg_fg[] = "#cc241d";
static const char urg_bg[] = "#1d2021";
static const char urg_border[] = "#504945";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { norm_fg, norm_bg },
	[SchemeSel] = { sel_fg, sel_bg },
	[SchemeOut] = { norm_fg, norm_bg },
  [SchemeSelHighlight] = { urg_fg, sel_bg },
	[SchemeNormHighlight] = { urg_fg, norm_bg },
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
