#include "ExtractZipPassFromCredMan.h"

int ExtractZipPassFromCredMan(PCREDENTIALW ** credBuf, DWORD  * count)
{
	CredEnumerate(L"*.zip", 0, count, credBuf);

	if (!credBuf)
		return CREDENTIALS_BUFFER_ERROR;

	if (ERROR_NOT_FOUND == GetLastError())
		return ZIP_PASS_NOT_FOUND;

	return ZIP_PASS_EXTRACTED;
}
