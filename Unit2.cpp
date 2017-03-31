//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrStartProcess *frStartProcess;
//---------------------------------------------------------------------------
__fastcall TfrStartProcess::TfrStartProcess(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrStartProcess::Button1Click(TObject *Sender)
{
	if(FileOpenDialog->Execute()){
		exePath->Text = FileOpenDialog->FileName;
		btnStartProcess->Enabled = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrStartProcess::btnStartProcessClick(TObject *Sender)
{
	STARTUPINFO startupInfo;
	PROCESS_INFORMATION processInfo;
	SECURITY_DESCRIPTOR SD;
	SECURITY_ATTRIBUTES SA;

	InitializeSecurityDescriptor(&SD, SECURITY_DESCRIPTOR_REVISION);
	SA.nLength = sizeof(SECURITY_ATTRIBUTES);
	SA.lpSecurityDescriptor = &SD;
	SA.bInheritHandle = true;

	startupInfo = STARTUPINFO();

	wchar_t *appName =  exePath->Text.c_str();

	int result = (int) CreateProcess(appName,
										NULL,
										&SA,
										&SA,
										false,
										0,
										NULL,
										NULL,
										&startupInfo,
										&processInfo);


	if(!result){
		 ShowMessage("Error: " + (UnicodeString) GetLastError());
	}

	WaitForSingleObject( processInfo.hProcess, INFINITE );
}
//---------------------------------------------------------------------------
