/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka Nerd Font Propo:pixelsize=11:antialias=true:autohint=true"
};
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	/*                          fg        bg       */
	[SchemeNorm]		= { "#eaf2ef", "#222524" },
	[SchemeNormHighlight]	= { "#eaf2ef", "#3e4140" },
	[SchemeSel]		= { "#222524", "#8fcfbb" },
	[SchemeSelHighlight]	= { "#222524", "#6fcfd2" },
	[SchemeOut]		= { "#eaf2ef", "#00522a" },
	[SchemeOutHighlight]	= { "#eaf2ef", "#3e4140" },

};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 20;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;
