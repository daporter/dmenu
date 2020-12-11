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
static const char* const nord[] = { "#121212", "#3b4252", "#434c5e", "#4c566a",
				    "#8892a4", "#e5e9f0", "#eceff4",
				    "#8fbcbb", "#88c0d0", "#81a1c1", "#5e81ac",
				    "#bf616a", "#d08770", "#ebcb8b", "#a3be8c", "#b48ead" };

static const char *colors[SchemeLast][2] = {
	/*                          fg        bg       */
	[SchemeNorm]		= { nord[4],  nord[0]  },
	[SchemeNormHighlight]	= { nord[13], nord[0]  },
	[SchemeSel]		= { nord[0],  nord[9]  },
	[SchemeSelHighlight]	= { nord[13], nord[9]  },
	[SchemeOut]		= { nord[0],  nord[14] },
	[SchemeOutHighlight]	= { nord[13], nord[14] },
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
