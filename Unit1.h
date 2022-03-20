//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TMainMenu *MainMenu1;
	TMenuItem *Menu1;
	TMenuItem *Menu2;
	TStringGrid *StringGrid1;
	TMenuItem *Pregunta21;
	TMenuItem *Pregunta31;
	TMenuItem *Pregunta441;
	TMenuItem *pREGUNTA51;
	TMenuItem *Pregunta61;
	TStringGrid *StringGrid2;
	TMenuItem *Pregunta71;
	TMenuItem *Pregunta81;
	void __fastcall Menu2Click(TObject *Sender);
	void __fastcall Pregunta21Click(TObject *Sender);
	void __fastcall Pregunta31Click(TObject *Sender);
	void __fastcall Pregunta441Click(TObject *Sender);
	void __fastcall pREGUNTA51Click(TObject *Sender);
	void __fastcall Pregunta61Click(TObject *Sender);
	void __fastcall Pregunta71Click(TObject *Sender);
	void __fastcall Pregunta81Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
