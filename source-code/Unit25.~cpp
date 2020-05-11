//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit25.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit11.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TWizard *Wizard;
//---------------------------------------------------------------------------
__fastcall TWizard::TWizard(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TWizard::Image2Click(TObject *Sender)
{
Birey = new TBirey(this);
Close();
}
//---------------------------------------------------------------------------

void __fastcall TWizard::Image3Click(TObject *Sender)
{
Hakkedis = new THakkedis(this);
Close();
}
//---------------------------------------------------------------------------

void __fastcall TWizard::Image4Click(TObject *Sender)
{
Cizim = new TCizim(this);
Close();
}
//---------------------------------------------------------------------------

void __fastcall TWizard::Image5Click(TObject *Sender)
{
Betonarme = new TBetonarme(this);
Close();
}
//---------------------------------------------------------------------------

void __fastcall TWizard::Image7Click(TObject *Sender)
{
Karayolu = new TKarayolu(this);
Close();
}
//---------------------------------------------------------------------------

void __fastcall TWizard::Image6Click(TObject *Sender)
{
Hidroloji = new THidroloji(this);
Close();
}
//---------------------------------------------------------------------------

void __fastcall TWizard::Image9Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm11), &Form11);
Form11->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TWizard::Image10Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

