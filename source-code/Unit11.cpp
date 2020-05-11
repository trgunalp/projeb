//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit11.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm11::Image2Click(TObject *Sender)
{
int Cal;
Cal = WinExec("Convertb.exe", 9);
if (Cal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (Cal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");        
}
//---------------------------------------------------------------------------
void __fastcall TForm11::Image3Click(TObject *Sender)
{
int kal;
kal = WinExec("Listb.exe", 9);
if (kal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (kal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");
}
//---------------------------------------------------------------------------
