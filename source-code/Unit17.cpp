//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit17.h"
#include "stdio.h"
#include "string.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPersonel *Personel;
struct Yapip
{
char Birimi[40];
char Ad[20];
char Soyad[20];
char Gorevi[40];
char Bas[10];
char Cik[10];
char Sicil[20];
char TC[20];
char Vergi[20];
char Dogum[10];
char Dogumyer[10];
char Adres[300];
char Tel[40];
char SayfaNo[10];
};
struct Yapip Adres_kaydip;
FILE *Dosyap;
//---------------------------------------------------------------------------
__fastcall TPersonel::TPersonel(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPersonel::FormCreate(TObject *Sender)
{
int Tus;
    if ((Dosyap = fopen("Data\\Personel.prjb", "r+b"))== NULL)
    {
     ShowMessage("Data klasöründe dosya bulunamadý.");
     Tus = Application->MessageBoxA("Personel.prjb adlý dosya hazýrlansýn mý?",
     "Dosya Hazýrlama Onayý", 3);
     if( Tus == 6)
         Dosyap = fopen("Data\\Personel.prjb", "w+t");
         }        
}
//---------------------------------------------------------------------------

void __fastcall TPersonel::ToolButton1Click(TObject *Sender)
{
strcpy(Adres_kaydip.Birimi, Edit1->Text.c_str());
strcpy(Adres_kaydip.Ad, Edit2->Text.c_str());
strcpy(Adres_kaydip.Soyad, Edit3->Text.c_str());
strcpy(Adres_kaydip.Gorevi, Edit4->Text.c_str());
strcpy(Adres_kaydip.Bas, Edit5->Text.c_str());
strcpy(Adres_kaydip.Cik, Edit6->Text.c_str());
strcpy(Adres_kaydip.Sicil, Edit7->Text.c_str());
strcpy(Adres_kaydip.TC, Edit8->Text.c_str());
strcpy(Adres_kaydip.Vergi, Edit9->Text.c_str());
strcpy(Adres_kaydip.Dogum, Edit10->Text.c_str());
strcpy(Adres_kaydip.Dogumyer, Edit11->Text.c_str());
strcpy(Adres_kaydip.Adres, Memo1->Text.c_str());
strcpy(Adres_kaydip.Tel, Edit12->Text.c_str());
strcpy(Adres_kaydip.SayfaNo, Edit13->Text.c_str());

if (MessageDlg("Bilgiler Kaydedilsin mi?",
              mtConfirmation, TMsgDlgButtons()
              <<mbYes<<mbNo, 0) == mrYes)
{
  fseek(Dosyap, 0, SEEK_END);
  fwrite(&Adres_kaydip, sizeof(Yapip), 1, Dosyap);
  }
        Edit1->Text = "";
        Edit2->Text = "";
        Edit3->Text = "";
        Edit4->Text = "";
        Edit5->Text = "";
        Edit6->Text = "";
        Edit7->Text = "";
        Edit8->Text = "";
        Edit9->Text = "";
        Edit10->Text = "";
        Edit11->Text = "";
        Edit12->Text = "";
        Memo1->Text = "";
        Edit13->Text = "No:";
}
//---------------------------------------------------------------------------

