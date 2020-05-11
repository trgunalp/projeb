//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit20.h"
#include "Unit2.h"
#include "stdio.h"
#include "string.h"
#include "io.h"
#include "fcntl.h"
struct Yapikk
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
struct Yapikk Adres_kaydikk;
FILE *Dosyakk;
AnsiString Current5File;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKkayit *Kkayit;
//---------------------------------------------------------------------------
__fastcall TKkayit::TKkayit(TComponent* Owner)
        : TForm(Owner)
{
Image1->Picture->LoadFromFile("Logom135.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TKkayit::Image1Click(TObject *Sender)
{
  if (OpenPictureDialog1->Execute()){
    Current5File = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(Current5File);
  }
}
//---------------------------------------------------------------------------

void __fastcall TKkayit::ToolButton1Click(TObject *Sender)
{
  if (OpenPictureDialog1->Execute()){
    Current5File = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(Current5File);
  }
}
//---------------------------------------------------------------------------

void __fastcall TKkayit::ToolButton2Click(TObject *Sender)
{
Birey->FarklKaydet1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TKkayit::ToolButton4Click(TObject *Sender)
{
  if (PrintDialog1->Execute()){
    try {
        Kkayit->Print();
    }
    catch(...){
        Printer()->EndDoc();
        throw;
    }
  }
}
//---------------------------------------------------------------------------

void __fastcall TKkayit::ToolButton6Click(TObject *Sender)
{
int Kayit_no;
fseek(Dosyakk, (Kayit_no * sizeof(Yapikk)), SEEK_SET);
fread(&Adres_kaydikk, sizeof(Yapikk), 1, Dosyakk);
        Edit1->Text = String(Adres_kaydikk.No);
        Edit2->Text = String(Adres_kaydikk.Tipi);
        Edit3->Text = String(Adres_kaydikk.Ad);
        Edit4->Text = String(Adres_kaydikk.Adet);
        Edit5->Text = String(Adres_kaydikk.Gelis);
        Memo1->Text = String(Adres_kaydikk.Gelisyer);
        Memo2->Text = String(Adres_kaydikk.Durumu);
        Edit6->Text = String(Adres_kaydikk.Gonder);
        Memo3->Text = String(Adres_kaydikk.Gonderyer);
        Edit7->Text = String(Adres_kaydikk.Maliyet);
        Edit8->Text = String(Adres_kaydikk.Sat);
        Edit9->Text = String(Adres_kaydikk.Vergi);
        Edit10->Text = String(Adres_kaydikk.Sattarih);
        Memo4->Text = String(Adres_kaydikk.Satyer);
        Edit11->Text = String(Adres_kaydikk.Sorumlu);
        Edit12->Text = String(Adres_kaydikk.Birimi);
        Edit13->Text = String(Adres_kaydikk.SayfaNo);
        if (Kayit_no >= 1)
        Kayit_no = Kayit_no -1;
        else
        Kayit_no = 1;
}
//---------------------------------------------------------------------------

void __fastcall TKkayit::FormCreate(TObject *Sender)
{
if ((Dosyakk = fopen("Data\\Kaynak.prjb", "rb")) == NULL)
     ShowMessage("Data\\Kaynak.prjb dosyasý bulunamadý.");
else
{
fseek(Dosyakk, 0, SEEK_SET);
fread(&Adres_kaydikk, sizeof(Yapikk), 1, Dosyakk);
        Edit1->Text = String(Adres_kaydikk.No);
        Edit2->Text = String(Adres_kaydikk.Tipi);
        Edit3->Text = String(Adres_kaydikk.Ad);
        Edit4->Text = String(Adres_kaydikk.Adet);
        Edit5->Text = String(Adres_kaydikk.Gelis);
        Memo1->Text = String(Adres_kaydikk.Gelisyer);
        Memo2->Text = String(Adres_kaydikk.Durumu);
        Edit6->Text = String(Adres_kaydikk.Gonder);
        Memo3->Text = String(Adres_kaydikk.Gonderyer);
        Edit7->Text = String(Adres_kaydikk.Maliyet);
        Edit8->Text = String(Adres_kaydikk.Sat);
        Edit9->Text = String(Adres_kaydikk.Vergi);
        Edit10->Text = String(Adres_kaydikk.Sattarih);
        Memo4->Text = String(Adres_kaydikk.Satyer);
        Edit11->Text = String(Adres_kaydikk.Sorumlu);
        Edit12->Text = String(Adres_kaydikk.Birimi);
        Edit13->Text = String(Adres_kaydikk.SayfaNo);
        }
}
//---------------------------------------------------------------------------

void __fastcall TKkayit::ToolButton7Click(TObject *Sender)
{
fseek(Dosyakk, 0, SEEK_SET);
fread(&Adres_kaydikk, sizeof(Yapikk), 1, Dosyakk);
        Edit1->Text = String(Adres_kaydikk.No);
        Edit2->Text = String(Adres_kaydikk.Tipi);
        Edit3->Text = String(Adres_kaydikk.Ad);
        Edit4->Text = String(Adres_kaydikk.Adet);
        Edit5->Text = String(Adres_kaydikk.Gelis);
        Memo1->Text = String(Adres_kaydikk.Gelisyer);
        Memo2->Text = String(Adres_kaydikk.Durumu);
        Edit6->Text = String(Adres_kaydikk.Gonder);
        Memo3->Text = String(Adres_kaydikk.Gonderyer);
        Edit7->Text = String(Adres_kaydikk.Maliyet);
        Edit8->Text = String(Adres_kaydikk.Sat);
        Edit9->Text = String(Adres_kaydikk.Vergi);
        Edit10->Text = String(Adres_kaydikk.Sattarih);
        Memo4->Text = String(Adres_kaydikk.Satyer);
        Edit11->Text = String(Adres_kaydikk.Sorumlu);
        Edit12->Text = String(Adres_kaydikk.Birimi);
        Edit13->Text = String(Adres_kaydikk.SayfaNo);
}
//---------------------------------------------------------------------------

void __fastcall TKkayit::ToolButton8Click(TObject *Sender)
{
int Boyut;
int Handle;
int Yer;
Yer = ftell(Dosyakk);
Handle = open("Data\\Kaynak.prjb", O_APPEND);
Boyut = filelength(Handle);
if (Boyut == Yer )
   ShowMessage("Dosyanýn sonundasýnýz");
   else
   {
   fseek(Dosyakk, 0, SEEK_CUR);
   fread(&Adres_kaydikk, sizeof(Yapikk), 1, Dosyakk);
        Edit1->Text = String(Adres_kaydikk.No);
        Edit2->Text = String(Adres_kaydikk.Tipi);
        Edit3->Text = String(Adres_kaydikk.Ad);
        Edit4->Text = String(Adres_kaydikk.Adet);
        Edit5->Text = String(Adres_kaydikk.Gelis);
        Memo1->Text = String(Adres_kaydikk.Gelisyer);
        Memo2->Text = String(Adres_kaydikk.Durumu);
        Edit6->Text = String(Adres_kaydikk.Gonder);
        Memo3->Text = String(Adres_kaydikk.Gonderyer);
        Edit7->Text = String(Adres_kaydikk.Maliyet);
        Edit8->Text = String(Adres_kaydikk.Sat);
        Edit9->Text = String(Adres_kaydikk.Vergi);
        Edit10->Text = String(Adres_kaydikk.Sattarih);
        Memo4->Text = String(Adres_kaydikk.Satyer);
        Edit11->Text = String(Adres_kaydikk.Sorumlu);
        Edit12->Text = String(Adres_kaydikk.Birimi);
        Edit13->Text = String(Adres_kaydikk.SayfaNo);
        }
}
//---------------------------------------------------------------------------

