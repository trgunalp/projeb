//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit15.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCizgi *Cizgi;
//---------------------------------------------------------------------------
__fastcall TCizgi::TCizgi(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCizgi::Button1Click(TObject *Sender)
{
int en, boy, xeksen, yeksen, kal;
en = StrToInt(Edit1->Text);
boy = StrToInt(Edit2->Text);
kal = StrToInt(Edit3->Text);
xeksen = StrToInt(Edit4->Text);
yeksen = StrToInt(Edit5->Text);
Cizim->Image->Canvas->MoveTo(xeksen, yeksen);
Cizim->Image->Canvas->LineTo(en, boy);
Cizim->Image->Canvas->Pen->Width = kal;
}
//---------------------------------------------------------------------------
