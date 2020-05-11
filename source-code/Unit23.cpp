//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit23.h"
#include "Unit25.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLoading *Loading;
//---------------------------------------------------------------------------
__fastcall TLoading::TLoading(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLoading::FormCreate(TObject *Sender)
{
  Timer1->Enabled = true;
  Application->CreateForm(__classid(TForm1), &Form1);
Form1->Show();
  Timer1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer2Timer(TObject *Sender)
{
  Timer2->Enabled = true;
Loading->Release();
  Timer2->Enabled = false;        
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer3Timer(TObject *Sender)
{
  Timer3->Enabled = true;
Form1->Enabled = true;
  Timer3->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer4Timer(TObject *Sender)
{
   Timer4->Enabled = true;
ProgressBar1->Position = ProgressBar1->Position +10;
  Timer4->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer5Timer(TObject *Sender)
{
   Timer5->Enabled = true;
ProgressBar1->Position = ProgressBar1->Position +20;
  Timer5->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer6Timer(TObject *Sender)
{
   Timer6->Enabled = true;
ProgressBar1->Position = ProgressBar1->Position +10;
  Timer6->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer7Timer(TObject *Sender)
{
   Timer7->Enabled = true;
ProgressBar1->Position = ProgressBar1->Position +10;
  Timer7->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer8Timer(TObject *Sender)
{
   Timer8->Enabled = true;
ProgressBar1->Position = ProgressBar1->Position +30;
  Timer8->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer9Timer(TObject *Sender)
{
   Timer9->Enabled = true;
ProgressBar1->Position = ProgressBar1->Position +20;
  Timer9->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer10Timer(TObject *Sender)
{
   Timer10->Enabled = true;
ProgressBar1->Position = ProgressBar1->Position +10;
  Timer10->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TLoading::Timer11Timer(TObject *Sender)
{
  Timer11->Enabled = true;
  Application->CreateForm(__classid(TWizard), &Wizard);
Wizard->Show();
  Timer11->Enabled = false;
}
//---------------------------------------------------------------------------

