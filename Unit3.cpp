//---------------------------------------------------------------------------

#include <vcl.h>
#include <System.DateUtils.hpp>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrPrcInfo *frPrcInfo;
HANDLE process;
//---------------------------------------------------------------------------
__fastcall TfrPrcInfo::TfrPrcInfo(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrPrcInfo::FormShow(TObject *Sender)
{
	//ShowMessage(IntToStr((int)prcPID));
	process = OpenProcess(PROCESS_ALL_ACCESS, 0, prcPID);
	_FILETIME creationTime,
				exitTime,
				kernelTime,
				userTime;

	_SYSTEMTIME SystemTime;
	GetProcessTimes(process, &creationTime, &exitTime, &kernelTime, &userTime);
	FileTimeToSystemTime(&creationTime, &SystemTime);
	//ShowMessage(IntToStr(SystemTime.wYear));
	TDateTime DateTime=EncodeDateTime(SystemTime.wYear,
										SystemTime.wMonth,
										SystemTime.wDay,
										SystemTime.wHour+3,
										SystemTime.wMinute,
										SystemTime.wSecond,
										SystemTime.wMilliseconds);
	lbTimeStart->Caption = DateTimeToStr(DateTime);

	//------
	try{
		FileTimeToSystemTime(&kernelTime, &SystemTime);
		DateTime=EncodeDateTime(SystemTime.wYear,
											SystemTime.wMonth,
											SystemTime.wDay,
											SystemTime.wHour+3,
											SystemTime.wMinute,
											SystemTime.wSecond,
											SystemTime.wMilliseconds);
		lbExitTime->Caption = DateTimeToStr(DateTime);
	}catch(...){
		ShowMessage("g");
	}

}
//---------------------------------------------------------------------------
void __fastcall TfrPrcInfo::Button3Click(TObject *Sender)
{
	TerminateProcess(process, NULL);
}
//---------------------------------------------------------------------------
