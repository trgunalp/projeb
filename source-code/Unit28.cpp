//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit28.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THidayar *Hidayar;
//---------------------------------------------------------------------------
__fastcall THidayar::THidayar(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THidayar::Button1Click(TObject *Sender)
{
float Hayar1;
float Hayar2;
Hayar1 = StrToFloat(Edit1->Text);
Hayar2 = StrToFloat(Edit2->Text);
Hidroloji->Series1->Add( Hayar1, Hayar2, StringToColor(ColorBox1->Selected));
}
//---------------------------------------------------------------------------
void __fastcall THidayar::Button2Click(TObject *Sender)
{
float Hayar3;
float Hayar4;
Hayar3 = StrToFloat(Edit3->Text);
Hayar4 = StrToFloat(Edit4->Text);
Hidroloji->Series2->Add( Hayar3, Hayar4, StringToColor(ColorBox2->Selected));
}
//---------------------------------------------------------------------------
void __fastcall THidayar::Button3Click(TObject *Sender)
{
float Hince1;
Hince1 = StrToFloat(Edit5->Text);
Hidroloji->Series1->FillSampleValues(Hince1);
}
//---------------------------------------------------------------------------
void __fastcall THidayar::Button4Click(TObject *Sender)
{
float Hince2;
Hince2 = StrToFloat(Edit6->Text);
Hidroloji->Series2->FillSampleValues(Hince2);
}
//---------------------------------------------------------------------------
