//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit27.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKarayar *Karayar;
//---------------------------------------------------------------------------
__fastcall TKarayar::TKarayar(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TKarayar::Button1Click(TObject *Sender)
{
float Kayar1;
float Kayar2;
Kayar1 = StrToFloat(Edit1->Text);
Kayar2 = StrToFloat(Edit2->Text);
Karayolu->Series1->Add( Kayar1, Kayar2, StringToColor(ColorBox1->Selected));
}
//---------------------------------------------------------------------------
void __fastcall TKarayar::Button2Click(TObject *Sender)
{
float Kince;
Kince = StrToFloat(Edit3->Text);
Karayolu->Series1->FillSampleValues(Kince);
}
//---------------------------------------------------------------------------

