//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

String p1Vocales(String s){
  String vc = "", vocales = "aeiouAEIOU";
  if(s.Length()>0){
	 String z = s[s.Length()];
	 s.Delete(s.Length(),1);
	 vc = p1Vocales(s);
	 vc = (vocales.Pos(z)>0)? vc+z : vc;
  }
  return vc;
}


void __fastcall TForm1::Menu2Click(TObject *Sender)
{
  String cadena = InputBox("","","");
  ShowMessage();
}
//---------------------------------------------------------------------------
