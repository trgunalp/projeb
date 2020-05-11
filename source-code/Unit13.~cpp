//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit13.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKare *Kare;
//---------------------------------------------------------------------------
__fastcall TKare::TKare(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TKare::Button1Click(TObject *Sender)
{
int en, boy, xeksen, yeksen;
en = StrToInt(Edit1->Text);
boy = StrToInt(Edit2->Text);
xeksen = StrToInt(Edit3->Text);
yeksen = StrToInt(Edit4->Text);
Cizim->Canvas->Rectangle(xeksen, yeksen, en, boy);
}
//---------------------------------------------------------------------------
