// Team Absynthe 2019

#include "cbase.h"
#include "filesystem.h"
#include "absynthe/ay_conmsg.h"
// Copied from VDC and played with by Graham Dianaty
// Mounts other game's stuff from inside Source SDK 2013 MP
void DoAdditonalContentMount()
{
	KeyValues *pFile = new KeyValues( "gameinfo.txt" );
#ifndef _WINDOWS
	// case sensitivity
	pFile->LoadFromFile( filesystem, "GameInfo.txt", "MOD" );
	if (!pFile)
#endif
	pFile->LoadFromFile( filesystem, "gameinfo.txt", "MOD" );
	
	if (pFile)
	{
		KeyValues* pFileSystemInfo = pFile->FindKey( "FileSystem" );
		if (pFileSystemInfo)
		{
			for (KeyValues* pKey = pFileSystemInfo->GetFirstSubKey(); pKey; pKey = pKey->GetNextKey())
			{
				if (strcmp(pKey->GetName(), "AssetAppId") == 0)
				{
					int appid = abs(pKey->GetInt());
					if (appid)
					{
						if (filesystem->MountSteamContent(-appid) != FILESYSTEM_MOUNT_OK)
						{
							Warning("[FILESYSTEM] [FAIL!!!] Unable to mount extra content with appId: %i\n", appid);
						}
#ifdef DEBUG
						else
						{
							ConColorMsg(VARCMSG_COLOR_GREEN, "[FILESYSTEM] Loaded content from appid %i\n", appid);
						}
#endif
					}

				}
			}
		}
	}	
	pFile->deleteThis();
}