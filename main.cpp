#include "ExtractZipPassFromCredMan.h"

#include <iostream>
using namespace std;

int main()
{

	PCREDENTIALW * credBuf = NULL;

	DWORD count;

	int result = ExtractZipPassFromCredMan(&credBuf, &count);

	if (result == CREDENTIALS_BUFFER_ERROR)
	{
		cout << "CREDENTIALS_BUFFER_ERROR" << endl;
		goto __cleanup;
	}
	else if (result == ZIP_PASS_NOT_FOUND)
	{
		cout << "No Zip passwords found!" << endl;
		goto __cleanup;
	}
	else
	{
		for (DWORD i = 0; i < count; i++)
		{
			if (credBuf[i]->CredentialBlob && credBuf[i]->TargetName)
			{
				cout << endl << "------------------------------------------------------" << endl;
				wcout << "Target: " << (wchar_t *)credBuf[i]->TargetName << endl << endl;
				wcout << "Password: " << (wchar_t *)credBuf[i]->CredentialBlob << endl;
				cout << "------------------------------------------------------" << endl << endl;
			}
		}
	}
	
__cleanup:

	if (credBuf)
		CredFree(credBuf);
	
	cin.get();
	return 0;
}