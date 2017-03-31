//---------------------------------------------------------------------------

#include <vcl.h>
#include <windows.h>
#include <Tlhelp32.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
DWORD PIDS[1000];
int globalSelI;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    HANDLE  pHandle;
	PROCESSENTRY32  ProcessEntry;
	DWORD pid;

	pHandle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	ProcessEntry.dwSize = sizeof(ProcessEntry);
	bool Loop = Process32First(pHandle, &ProcessEntry);

	String process;
	int i = 0;

	StringGridPrcs->RowCount = 2;
	StringGridPrcs->Cells[0][0] = "Процесс";
	StringGridPrcs->Cells[1][0] = "PID";
	StringGridPrcs->Cells[2][0] = "PID родителя";
	StringGridPrcs->Cells[3][0] = "Потоков";
	StringGridPrcs->Cells[4][0] = "Приоритет";

	while (Loop)
	{
		PIDS[i] = ProcessEntry.th32ProcessID;

		StringGridPrcs->RowCount++;

		StringGridPrcs->Cells[0][i+1] = ProcessEntry.szExeFile;
		StringGridPrcs->Cells[1][i+1] = IntToStr((int) PIDS[i]);
		StringGridPrcs->Cells[2][i+1] = IntToStr((int)ProcessEntry.th32ParentProcessID);
		StringGridPrcs->Cells[3][i+1] = IntToStr((int)ProcessEntry.cntThreads);
		StringGridPrcs->Cells[4][i+1] = IntToStr((int)ProcessEntry.pcPriClassBase);

		Loop = Process32Next(pHandle, &ProcessEntry);

		i++;
	}

	lbState->Caption = "Процессов: " + IntToStr(i);

	CloseHandle(pHandle);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N1Click(TObject *Sender)
{
    frStartProcess->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::UpDown1Changing(TObject *Sender, bool &AllowChange)
{
 	timerupdPrcList->Interval = StrToInt(edUpdTime->Text)*1000;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerupdPrcListTimer(TObject *Sender)
{
    HANDLE  pHandle;
	PROCESSENTRY32  ProcessEntry;
	DWORD pid;

	pHandle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	ProcessEntry.dwSize = sizeof(ProcessEntry);
	bool Loop = Process32First(pHandle, &ProcessEntry);

	String process;
	int i = 0;

	StringGridPrcs->RowCount = 2;
	StringGridPrcs->Cells[0][0] = "Процесс";
	StringGridPrcs->Cells[1][0] = "PID";
	StringGridPrcs->Cells[2][0] = "PID родителя";
	StringGridPrcs->Cells[3][0] = "Потоков";
	StringGridPrcs->Cells[4][0] = "Приоритет";

	while (Loop)
	{
		PIDS[i] = ProcessEntry.th32ProcessID;

		StringGridPrcs->RowCount++;

		StringGridPrcs->Cells[0][i+1] = ProcessEntry.szExeFile;
		StringGridPrcs->Cells[1][i+1] = IntToStr((int) PIDS[i]);
		StringGridPrcs->Cells[2][i+1] = IntToStr((int)ProcessEntry.th32ParentProcessID);
		StringGridPrcs->Cells[3][i+1] = IntToStr((int)ProcessEntry.cntThreads);
		StringGridPrcs->Cells[4][i+1] = IntToStr((int)ProcessEntry.pcPriClassBase);

		Loop = Process32Next(pHandle, &ProcessEntry);

		i++;
	}

	lbState->Caption = "Процессов: " + IntToStr(i);

	CloseHandle(pHandle);


}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGridPrcsMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
	int Acol, Arow;
	if (Button = mbRight)
		StringGridPrcs->MouseToCell(X, Y, Acol, Arow);
	//ShowMessage(IntToStr(Arow));
	globalSelI = Arow;
	StringGridPrcs->CellRect(0, Arow);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
   HANDLE ph = OpenProcess(PROCESS_ALL_ACCESS, 0, PIDS[globalSelI-1]);
   TerminateProcess(ph, NULL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::tsEnableTimerClick(TObject *Sender)
{
	if(tsEnableTimer->State == tssOff)
		timerupdPrcList->Enabled = false;
	else
		timerupdPrcList->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
   frPrcInfo->prcPID = PIDS[globalSelI-1];
   frPrcInfo->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
	ShowMessage("Разработано в рамкам курсовой по ОС. \n Студент КМБ-131 Джамиев Нур-Магомед \n Науч. рук: Гусева Людмила Леонидовна");
}
//---------------------------------------------------------------------------

