//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit14.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPasta *Pasta;
//---------------------------------------------------------------------------
__fastcall TPasta::TPasta(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPasta::Button1Click(TObject *Sender)
{
int en, boy, xeksen, yeksen, en2, boy2, en3, boy3;
en = StrToInt(Edit1->Text);
boy = StrToInt(Edit2->Text);
xeksen = StrToInt(Edit7->Text);
yeksen = StrToInt(Edit8->Text);
en2 = StrToInt(Edit3->Text);
boy2 = StrToInt(Edit4->Text);
en3 = StrToInt(Edit5->Text);
boy3 = StrToInt(Edit6->Text);
Cizim->Canvas->Pie(xeksen, yeksen, en, boy, en2, boy2, en3, boy3);
}
//---------------------------------------------------------------------------
