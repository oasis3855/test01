// ************************************************************
// Windows �o�[�W�����֘A�֐�
//
// ************************************************************

#include "StdAfx.h"
#include "CheckWinVer.h"

// �e�X�g�������� on 2015/03/28 for git svn test


// ************************************************************
// WindowsNT �n��� Windows 95 �n��̔���
// WinNT �n��̂Ƃ� TRUE
// ************************************************************
BOOL IsWinNT(void)
{
	OSVERSIONINFO ver;

	// OS�o�[�W����
	ver.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
	::GetVersionEx((LPOSVERSIONINFO)&ver);


	if(ver.dwPlatformId == VER_PLATFORM_WIN32_NT)
		return TRUE;

	return FALSE;
}