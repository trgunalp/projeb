//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit12.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TElips *Elips;
//---------------------------------------------------------------------------
__fastcall TElips::TElips(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TElips::Button1Click(TObject *Sender)
{
int en, boy, xeksen, yeksen;
en = StrToInt(Edit1->Text);
boy = StrToInt(Edit2->Text);
xeksen = StrToInt(Edit3->Text);
yeksen = StrToInt(Edit4->Text);
Cizim->Image->Canvas->Ellipse(xeksen, yeksen, en, boy);
}
//---------------------------------------------------------------------------

