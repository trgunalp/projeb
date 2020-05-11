//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit32.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBilgi *Bilgi;
//---------------------------------------------------------------------------
__fastcall TBilgi::TBilgi(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBilgi::Image1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
void __fastcall TBilgi::FormCreate(TObject *Sender)
{
ProgressBar1->Position = ProgressBar1->Position +110;        
}
//---------------------------------------------------------------------------
