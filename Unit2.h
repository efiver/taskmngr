//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrStartProcess : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *exePath;
	TButton *Button1;
	TButton *btnStartProcess;
	TFileOpenDialog *FileOpenDialog;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall btnStartProcessClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrStartProcess(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrStartProcess *frStartProcess;
//---------------------------------------------------------------------------
#endif
