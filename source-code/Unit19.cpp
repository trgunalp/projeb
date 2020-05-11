//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit19.h"
#include "stdio.h"
#include "string.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKaynak *Kaynak;
struct Yapik
{
char No[10];
char Tipi[20];
char Ad[20];
char Adet[10];
char Gelis[10];
char Gelisyer[100];
char Durumu[100];
char Gonder[10];
char Gonderyer[100];
char Maliyet[20];
char Sat[20];
char Vergi[20];
char Sattarih[10];
char Satyer[100];
char Sorumlu[30];
char Birimi[30];
char SayfaNo[10];
};
struct Yapik Adres_kaydik;
FILE *Dosyak;
//---------------------------------------------------------------------------
__fastcall TKaynak::TKaynak(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TKaynak::FormCreate(TObject *Sender)
{
int Tus;
    if ((Dosyak = fopen("Data\\Kaynak.prjb", "r+b"))== NULL)
    {
     ShowMessage("Data klasöründe dosya bulunamadý.");
     Tus = Application->MessageBoxA("Kaynak.prjb adlý dosya hazýrlansýn mý?",
     "Dosya Hazýrlama Onayý", 3);
     if( Tus == 6)
         Dosyak = fopen("Data\\Kaynak.prjb", "w+t");
         }
}
//---------------------------------------------------------------------------

void __fastcall TKaynak::ToolButton1Click(TObject *Sender)
{
strcpy(Adres_kaydik.No, Edit1->Text.c_str());
strcpy(Adres_kaydik.Tipi, Edit2->Text.c_str());
strcpy(Adres_kaydik.Ad, Edit3->Text.c_str());
strcpy(Adres_kaydik.Adet, Edit4->Text.c_str());
strcpy(Adres_kaydik.Gelis, Edit5->Text.c_str());
strcpy(Adres_kaydik.Gelisyer, Memo1->Text.c_str());
strcpy(Adres_kaydik.Durumu, Memo2->Text.c_str());
strcpy(Adres_kaydik.Gonder, Edit6->Text.c_str());
strcpy(Adres_kaydik.Gonderyer, Memo3->Text.c_str());
strcpy(Adres_kaydik.Maliyet, Edit7->Text.c_str());
strcpy(Adres_kaydik.Sat, Edit8->Text.c_str());
strcpy(Adres_kaydik.Vergi, Edit9->Text.c_str());
strcpy(Adres_kaydik.Sattarih, Edit10->Text.c_str());
strcpy(Adres_kaydik.Satyer, Memo4->Text.c_str());
strcpy(Adres_kaydik.Sorumlu, Edit11->Text.c_str());
strcpy(Adres_kaydik.Birimi, Edit12->Text.c_str());
strcpy(Adres_kaydik.SayfaNo, Edit13->Text.c_str());

if (MessageDlg("Bilgiler Kaydedilsin mi?",
              mtConfirmation, TMsgDlgButtons()
              <<mbYes<<mbNo, 0) == mrYes)
{
  fseek(Dosyak, 0, SEEK_END);
  fwrite(&Adres_kaydik, sizeof(Yapik), 1, Dosyak);
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
        Edit13->Text = "No:";
        Memo1->Text = "";
        Memo2->Text = "";
        Memo3->Text = "";
        Memo4->Text = "";

}
//---------------------------------------------------------------------------

