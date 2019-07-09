// =============== Project Absynthe =============== >>
// Easy preprocessor defined console output commands
// with colors enabled.
// ================================================ >>

#ifndef AY_CONMSG_H
#define AY_CONMSG_H
#ifdef _WIN32
#pragma once
#endif


// Console Output:
//	End a line.
#define CONMSG_ENDL	\
	ConMsg("\n");

#define VARCMSG_COLOR_RED		Color(255, 64, 64, 255)
#define VARCMSG_COLOR_BLUE		Color(153, 204, 255, 255)
#define VARCMSG_COLOR_YELLOW	Color(255, 178, 0, 255)
#define VARCMSG_COLOR_GREEN		Color(153, 255, 153, 255)
#ifdef DEBUG
#define VARCMSG_BUILDTYPE_COLOR	Color(249,72,72,240)
#define VARCMSG_BUILDTYPE		"DEBUG"
#else
#define VARCMSG_BUILDTYPE_COLOR	Color(80,200,120,240)
#define VARCMSG_BUILDTYPE		"RELEASE"
#endif

// Colored Console Output:
//	Emerald Absynthe Green
#define CONMSG_ABSYNTHE(input) \
	ConColorMsg(Color(80,200,120,240), input);

// Colored Console Output: 
//	Red for Debug, Green for Release
#define CONMSG_BUILDTYPE() \
	ConColorMsg(VARCMSG_BUILDTYPE_COLOR, VARCMSG_BUILDTYPE );

// Colored Console Output:
//	Outputs time and date of compilation.
#define CONMSG_BUILDINFO() \
	ConColorMsg(VARCMSG_BUILDTYPE_COLOR, "%s, at %s.", __DATE__, __TIME__);

// Colored Console Output:
//	Red (AUTOMATICALLY TERMIANTES LINE!)
#define CONMSG_RED(input) \
	ConColorMsg(VARCMSG_COLOR_RED, input ); CONMSG_ENDL

// Colored Console Output:
//	Blue (AUTOMATICALLY TERMIANTES LINE!)
#define CONMSG_BLUE(input) \
	ConColorMsg(VARCMSG_COLOR_BLUE, input ); CONMSG_ENDL

// Colored Console Output:
//	Yellow (AUTOMATICALLY TERMIANTES LINE!)
#define CONMSG_YELLOW(input) \
	ConColorMsg(VARCMSG_COLOR_YELLOW, input ); CONMSG_ENDL

// Colored Console Output:
//	Green (AUTOMATICALLY TERMIANTES LINE!)
#define CONMSG_GREEN(input) \
	ConColorMsg(VARCMSG_COLOR_GREEN, input); CONMSG_ENDL

// ConUtility Output:
//	Gives an appropriate amount of space between current line and next line.
#define CONMSG_SPACER \
	ConMsg("   ");

// ConUtlity Output:
//	Gives a spacer but twice this time.
#define CONMSG_SPACER2 \
	CONMSG_SPACER \
	CONMSG_SPACER

// ConUtlity Output:
//	Gives a spacer but thrice this time.
#define CONMSG_SPACER3 \
	CONMSG_SPACER \
	CONMSG_SPACER \
	CONMSG_SPACER

#define CONMSG_SPACER2HALF \
	CONMSG_SPACER \
	CONMSG_SPACER \
	ConMsg("   ");

#endif // AY_CONMSG_H