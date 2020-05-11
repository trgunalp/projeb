//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TOffice *Office;
//---------------------------------------------------------------------------
__fastcall TOffice::TOffice(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOffice::Image2Click(TObject *Sender)
{
ShellExecute(0, "Open", "OfficeExp\\Bel1.doc", NULL, NULL, SW_SHOW);
}
//---------------------------------------------------------------------------

void __fastcall TOffice::Image3Click(TObject *Sender)
{
ShellExecute(0, "Open", "OfficeExp\\Kitap1.xls", NULL, NULL, SW_SHOW);
}
//---------------------------------------------------------------------------

void __fastcall TOffice::Image4Click(TObject *Sender)
{
ShellExecute(0, "Open", "OfficeExp\\Sunu1.ppt", NULL, NULL, SW_SHOW);
}
//---------------------------------------------------------------------------

