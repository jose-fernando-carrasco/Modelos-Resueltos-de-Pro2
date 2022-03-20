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
	 char z = s[s.Length()];
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

//Inicio: Pregunta 2
String p2cadena(TStringGrid*vec, int n){
  String cad = "";
  if(n>0){
	 String valor = vec->Cells[n-1][0];
	 cad = p2cadena(vec,n-1) + valor[valor.Length()];
  }
  return cad;
}
//Fin: Pregunta 2

void __fastcall TForm1::Pregunta21Click(TObject *Sender)
{
  int dim = StrToInt(InputBox("Dimension","",""));
  StringGrid1->ColCount = dim;
  ShowMessage(p2cadena(StringGrid1,dim));
}
//---------------------------------------------------------------------------

//Inicio: Pregunta 3
// cad = "h como"
void p3Cargar(TStringGrid*vec, String cad){
 cad = cad.Trim();
 if(cad.Length()>0){
	int a = cad.LastDelimiter(" ");
	int b = cad.Length() - a;
	String pal = cad.SubString(a+1,b);
	cad.Delete(a+1,b);
	p3Cargar(vec,cad);
	pal[1] = UpperCase(pal[1])[1];
	vec->Cells[vec->ColCount-1][0] = pal;
    vec->ColCount++;
 }
}
//Fin: Pregunta 3

void __fastcall TForm1::Pregunta31Click(TObject *Sender)
{
  StringGrid1->ColCount = 1;
  String cadena = InputBox("","","");
  p3Cargar(StringGrid1,cadena);
}
//---------------------------------------------------------------------------

//Inicio: Pregunta 4          IMCOMPLETO
//Cad = "Hola        como"
String p4Eliminar(String cad){
  
  if(cad.Length()>1){
	 char zd = cad[cad.Length()];
	 char zi = cad[cad.Length()-1];

  }
}
//Fin: Pregunta 4

void __fastcall TForm1::Pregunta441Click(TObject *Sender)
{
	 //g
}
//---------------------------------------------------------------------------


//Inicio: Pregunta 5
String p5Generar(int d, char c){
  String s = "";
  if(d>0)
	 s = p5Generar(d-1, c) + c;
  return s;
}

String p5Litera(int n){
String cad = "";
  if(n>0){
	 int d = n % 10;
	 cad = p5Litera(n/10);
	 cad += p5Generar(d,IntToStr(d)[1]);
  }
  return cad;
}
//Fin: Pregunta 5

void __fastcall TForm1::pREGUNTA51Click(TObject *Sender)
{
   int num = StrToInt(InputBox("Numero","",""));
   ShowMessage(p5Litera(num));
}
//---------------------------------------------------------------------------


//Inicio: Pregunta 6
String p6PalabraLarga(String cad){
  String s = "";
  cad = cad.Trim();
  if(cad.Length()>0){
	 int a = cad.LastDelimiter(" ");
	 int b = cad.Length()- a;
	 String pal = cad.SubString(a+1,b);
	 cad.Delete(a+1,b);
	 s = p6PalabraLarga(cad);
	 s = (pal.Length() > s.Length())? pal : s;
  }
  return s;
}
//Fin: Pregunta 6

void __fastcall TForm1::Pregunta61Click(TObject *Sender)
{
  String cadena = InputBox("Cadena","","");
  ShowMessage(p6PalabraLarga(cadena));
}
//---------------------------------------------------------------------------

//Inicio: Pregunta 7  Nota: no rellené de ceros
void p7cargarCirculo(TStringGrid*G,int fi,int ff,int cf,int ci,int cff,int fff,int raz){
   if( (cf > 0) || (fff > 0) ){
	  if (cf >= ci){
		  G->Cells[cf-1][fi-1] = raz;  //fi  const    cf--
		  G->Cells[cf-1][ff-1] = raz;  //ff  const    cf--
	  }
	  if (fff >= fi){
		  G->Cells[ci-1][fff-1] = raz; //ci  const    fff--
		  G->Cells[cff-1][fff-1] = raz;//cff const    fff--
	  }
	  p7cargarCirculo(G,fi,ff,cf-1,ci,cff,fff-1,raz);
   }
}

void p7CargarM(TStringGrid*G,int A, int f, int c, int raz){
  int filas = A-(f-1);
  int cols  = A-(c-1);
  int Dim   = (filas < 0 || cols < 0)? -1: filas*cols;
  if(Dim > 0){
	  p7cargarCirculo(G,f,A,A,c,A,A,raz);
	  p7CargarM(G,A-1,f+1,c+1,raz+1);
  }
}
//Fin: Pregunta 7

void __fastcall TForm1::Pregunta71Click(TObject *Sender)
{
  int A = StrToInt(InputBox("Fila y Columna","",""));
  StringGrid2->RowCount = A;
  StringGrid2->ColCount = A;
  int fila = StrToInt(InputBox("Fila inicial","",""))+1;
  int col  = StrToInt(InputBox("Col inicial","",""))+1;
  int raz  = StrToInt(InputBox("Razon","",""));
  p7CargarM(StringGrid2,A,fila,col,raz);
}
//---------------------------------------------------------------------------

//Inicio: Pregunta 8
void p8cargarCirculo(TStringGrid*G){

}

void p8CargarM(TStringGrid*G,int A, int f, int c, int raz){
  int filas = A-(f-1);
  int cols  = A-(c-1);
  int Dim   = (filas < 0 || cols < 0)? -1: filas*cols;
  if(Dim > 0){
	  
  }
}

//Fin: Pregunta 8
void __fastcall TForm1::Pregunta81Click(TObject *Sender)
{
  int A = StrToInt(InputBox("Fila y Columna","",""));
  StringGrid2->RowCount = A;
  StringGrid2->ColCount = A;
  int fila = StrToInt(InputBox("Fila inicial","",""))+1;
  int col  = StrToInt(InputBox("Col inicial","",""))+1;
  int raz  = StrToInt(InputBox("Razon","",""));
  p7CargarM(StringGrid2,A,fila,col,raz);
}
//---------------------------------------------------------------------------

//Inicio: Pregunta 2
//Fin: Pregunta 2
