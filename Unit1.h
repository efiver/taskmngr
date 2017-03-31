//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.WinXCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *lbState;
	TStringGrid *StringGridPrcs;
	TPopupMenu *pmPrcList;
	TMenuItem *N9;
	TOpenDialog *OpenDialog;
	TMainMenu *MainMenu;
	TMenuItem *sdfg1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TLabel *Label1;
	TEdit *edUpdTime;
	TLabel *Label2;
	TUpDown *UpDown1;
	TTimer *timerupdPrcList;
	TMenuItem *N7;
	TToggleSwitch *tsEnableTimer;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall N1Click(TObject *Sender);
	void __fastcall UpDown1Changing(TObject *Sender, bool &AllowChange);
	void __fastcall timerupdPrcListTimer(TObject *Sender);
	void __fastcall StringGridPrcsMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall N9Click(TObject *Sender);
	void __fastcall tsEnableTimerClick(TObject *Sender);
	void __fastcall N7Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
