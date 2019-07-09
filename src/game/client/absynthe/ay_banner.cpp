// =============== Project Absynthe =============== >>
// Authored by Graham Dianaty, 2019.
// This fucking file has been copied like twenty times.
//
// Startup message, to tell us what build we're on.
// Greenyred gets lost easily which is why this is here.
// ================================================ >>

#include "cbase.h"
#include "igamesystem.h"
#include "steam/steam_api.h"
#include "absynthe/ay_conmsg.h"
#include "tier0/icommandline.h"

#define MSG		CONMSG_ABSYNTHE
#define SPC		CONMSG_SPACER
#define ENDL	CONMSG_ENDL


class C_WelcomeBanner : public CAutoGameSystem
{
public:
	C_WelcomeBanner() {};
	~C_WelcomeBanner() {};

	virtual void PostInit()
	{
		CONMSG_ENDL
		MSG("===================================================>>") 	CONMSG_ENDL
		SPC MSG("Loaded Absynthe Revision 3 (Public)") 					CONMSG_ENDL
		SPC MSG("Built for: ")							 				CONMSG_ENDL
		SPC MSG("Built on: ")		CONMSG_BUILDINFO() 					CONMSG_ENDL
		SPC MSG("Build channel: ")	CONMSG_BUILDTYPE()					CONMSG_ENDL
		SPC MSG("Check us out at https://absynthe.gmdianaty.com/")		CONMSG_ENDL
		MSG("===================================================>>")	CONMSG_ENDL
		CONMSG_ENDL
	};

	virtual void Shutdown() {};
};

static C_WelcomeBanner g_pLogGameStart;
C_WelcomeBanner *GetLogGameStartGameSystem() { return &g_pLogGameStart; };