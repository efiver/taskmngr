//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrPrcInfo : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TLabel *lbPrcPath;
	TButton *Button1;
	TGroupBox *GroupBox2;
	TCheckBox *CheckBox1;
	TLabeledEdit *LabeledEdit1;
	TButton *Button2;
	TButton *Button3;
	TGroupBox *GroupBox3;
	TLabel *Label1;
	TLabel *lbTimeStart;
	TLabel *Label2;
	TLabel *lbExitTime;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    DWORD prcPID;
	__fastcall TfrPrcInfo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrPrcInfo *frPrcInfo;
//---------------------------------------------------------------------------
#endif
