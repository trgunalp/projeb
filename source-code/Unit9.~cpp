//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TXlime *Xlime;
//---------------------------------------------------------------------------
__fastcall TXlime::TXlime(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TXlime::Image2Click(TObject *Sender)
{
int Cal;
Cal = WinExec("C:\\Program Files\\Computers and Structures\\SAP2000 8 Nonlinear\\Sap2000.exe", 9);
if (Cal==2)
ShowMessage("C sürücüsünde program dosyasý bulunamadý.");
if (Cal==3)
ShowMessage("C sürücüsü veya klasör adý geçersiz.");
}
//---------------------------------------------------------------------------

