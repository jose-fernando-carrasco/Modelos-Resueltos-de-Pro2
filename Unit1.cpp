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
//Inicio: Pregunta 1
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

void p1CargarVec(TStringGrid*vec, String cad){
  cad = cad.Trim();
  if(cad.Length()>0){
	 int a = cad.LastDelimiter(" ");
	 int b = cad.Length() - a;
	 String pal = cad.SubString(a+1,b);
	 cad.Delete(a+1,b);
	 p1CargarVec(vec,cad);
	 String vo = p1Vocales(pal);
	 if (vo.Length()>0) {
		 vec->Cells[vec->ColCount-1][0] = vo;
		 vec->ColCount++;
	 }
  }
}
//Fin: Pregunta 1

void __fastcall TForm1::Menu2Click(TObject *Sender)
{
  StringGrid1->ColCount = 1;
  String cadena = InputBox("","","");
  p1CargarVec(StringGrid1,cadena);

}
//---------------------------------------------------------------------------
