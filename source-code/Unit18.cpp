//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit18.h"
#include "Unit2.h"
#include "stdio.h"
#include "string.h"
#include "io.h"
#include "fcntl.h"
AnsiString Current4File;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPkayit *Pkayit;
struct Yapipk
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
struct Yapipk Adres_kaydipk;
FILE *Dosyapk;
//---------------------------------------------------------------------------
__fastcall TPkayit::TPkayit(TComponent* Owner)
        : TForm(Owner)
{
Image1->Picture->LoadFromFile("Logom135.bmp");
}
//---------------------------------------------------------------------------
void __fastcall TPkayit::FormCreate(TObject *Sender)
{
if ((Dosyapk = fopen("Data\\Personel.prjb", "rb")) == NULL)
     ShowMessage("Data\\Personel.prjb dosyasý bulunamadý.");
else
{
fseek(Dosyapk, 0, SEEK_SET);
fread(&Adres_kaydipk, sizeof(Yapipk), 1, Dosyapk);
        Edit1->Text = String(Adres_kaydipk.Birimi);
        Edit2->Text = String(Adres_kaydipk.Ad);
        Edit3->Text = String(Adres_kaydipk.Soyad);
        Edit4->Text = String(Adres_kaydipk.Gorevi);
        Edit5->Text = String(Adres_kaydipk.Bas);
        Edit6->Text = String(Adres_kaydipk.Cik);
        Edit7->Text = String(Adres_kaydipk.Sicil);
        Edit8->Text = String(Adres_kaydipk.TC);
        Edit9->Text = String(Adres_kaydipk.Vergi);
        Edit10->Text = String(Adres_kaydipk.Dogum);
        Edit11->Text = String(Adres_kaydipk.Dogumyer);
        Memo1->Text = String(Adres_kaydipk.Adres);
        Edit12->Text = String(Adres_kaydipk.Tel);
        Edit13->Text = String(Adres_kaydipk.SayfaNo);
        }
}
//---------------------------------------------------------------------------
void __fastcall TPkayit::Image1Click(TObject *Sender)
{
  if (OpenPictureDialog1->Execute()){
    Current4File = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(Current4File);
  }        
}
//---------------------------------------------------------------------------

void __fastcall TPkayit::ToolButton1Click(TObject *Sender)
{
  if (OpenPictureDialog1->Execute()){
    Current4File = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(Current4File);
  }
}
//---------------------------------------------------------------------------

void __fastcall TPkayit::ToolButton4Click(TObject *Sender)
{
  if (PrintDialog1->Execute()){
    try {
        Pkayit->Print();
    }
    catch(...){
        Printer()->EndDoc();
        throw;
    }
  }        
}
//---------------------------------------------------------------------------

void __fastcall TPkayit::ToolButton6Click(TObject *Sender)
{
int Kayit_no;
fseek(Dosyapk, (Kayit_no * sizeof(Yapipk)), SEEK_SET);
fread(&Adres_kaydipk, sizeof(Yapipk), 1, Dosyapk);
        Edit1->Text = String(Adres_kaydipk.Birimi);
        Edit2->Text = String(Adres_kaydipk.Ad);
        Edit3->Text = String(Adres_kaydipk.Soyad);
        Edit4->Text = String(Adres_kaydipk.Gorevi);
        Edit5->Text = String(Adres_kaydipk.Bas);
        Edit6->Text = String(Adres_kaydipk.Cik);
        Edit7->Text = String(Adres_kaydipk.Sicil);
        Edit8->Text = String(Adres_kaydipk.TC);
        Edit9->Text = String(Adres_kaydipk.Vergi);
        Edit10->Text = String(Adres_kaydipk.Dogum);
        Edit11->Text = String(Adres_kaydipk.Dogumyer);
        Memo1->Text = String(Adres_kaydipk.Adres);
        Edit12->Text = String(Adres_kaydipk.Tel);
        Edit13->Text = String(Adres_kaydipk.SayfaNo);
        if (Kayit_no >= 1)
        Kayit_no = Kayit_no -1;
        else
        Kayit_no = 1;        
}
//---------------------------------------------------------------------------

void __fastcall TPkayit::ToolButton7Click(TObject *Sender)
{
fseek(Dosyapk, 0, SEEK_SET);
fread(&Adres_kaydipk, sizeof(Yapipk), 1, Dosyapk);
        Edit1->Text = String(Adres_kaydipk.Birimi);
        Edit2->Text = String(Adres_kaydipk.Ad);
        Edit3->Text = String(Adres_kaydipk.Soyad);
        Edit4->Text = String(Adres_kaydipk.Gorevi);
        Edit5->Text = String(Adres_kaydipk.Bas);
        Edit6->Text = String(Adres_kaydipk.Cik);
        Edit7->Text = String(Adres_kaydipk.Sicil);
        Edit8->Text = String(Adres_kaydipk.TC);
        Edit9->Text = String(Adres_kaydipk.Vergi);
        Edit10->Text = String(Adres_kaydipk.Dogum);
        Edit11->Text = String(Adres_kaydipk.Dogumyer);
        Memo1->Text = String(Adres_kaydipk.Adres);
        Edit12->Text = String(Adres_kaydipk.Tel);
        Edit13->Text = String(Adres_kaydipk.SayfaNo);        
}
//---------------------------------------------------------------------------

void __fastcall TPkayit::ToolButton8Click(TObject *Sender)
{
int Boyut;
int Handle;
int Yer;
Yer = ftell(Dosyapk);
Handle = open("Data\\Personel.prjb", O_APPEND);
Boyut = filelength(Handle);
if (Boyut == Yer )
   ShowMessage("Dosyanýn sonundasýnýz");
   else
   {
   fseek(Dosyapk, 0, SEEK_CUR);
   fread(&Adres_kaydipk, sizeof(Yapipk), 1, Dosyapk);
       Edit1->Text = String(Adres_kaydipk.Birimi);
        Edit2->Text = String(Adres_kaydipk.Ad);
        Edit3->Text = String(Adres_kaydipk.Soyad);
        Edit4->Text = String(Adres_kaydipk.Gorevi);
        Edit5->Text = String(Adres_kaydipk.Bas);
        Edit6->Text = String(Adres_kaydipk.Cik);
        Edit7->Text = String(Adres_kaydipk.Sicil);
        Edit8->Text = String(Adres_kaydipk.TC);
        Edit9->Text = String(Adres_kaydipk.Vergi);
        Edit10->Text = String(Adres_kaydipk.Dogum);
        Edit11->Text = String(Adres_kaydipk.Dogumyer);
        Memo1->Text = String(Adres_kaydipk.Adres);
        Edit12->Text = String(Adres_kaydipk.Tel);
        Edit13->Text = String(Adres_kaydipk.SayfaNo);
        }        
}
//---------------------------------------------------------------------------

void __fastcall TPkayit::ToolButton2Click(TObject *Sender)
{
Birey->FarklKaydet1Click(Sender);
}
//---------------------------------------------------------------------------

