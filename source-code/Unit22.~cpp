//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit22.h"
#include "Unit2.h"
#include "stdio.h"
#include "string.h"
#include "io.h"
#include "fcntl.h"
AnsiString Current6File;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSkayit *Skayit;
struct Yapisk
{
char Ad[20];
char Soyad[20];
char Musteri[10];
char Hesap[10];
char Kayit[10];
char Kayityapan[20];
char Gorevi[20];
char Birimi[20];
char Dogum[10];
char Dogumyer[20];
char Meslek[20];
char Sektor[20];
char Ev[100];
char Evtel[20];
char is[100];
char istel[20];
char Ceptel[20];
char email[20];
char Odeme[400];
char SayfaNo[10];
};
struct Yapisk Adres_kaydisk;
FILE *Dosyask;
//---------------------------------------------------------------------------
__fastcall TSkayit::TSkayit(TComponent* Owner)
        : TForm(Owner)
{
Image1->Picture->LoadFromFile("Logom135.bmp");
}
//---------------------------------------------------------------------------
void __fastcall TSkayit::ToolButton1Click(TObject *Sender)
{
  if (OpenPictureDialog1->Execute()){
    Current6File = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(Current6File);
  }
}
//---------------------------------------------------------------------------

void __fastcall TSkayit::FormCreate(TObject *Sender)
{
if ((Dosyask = fopen("Data\\Musteri.prjb", "rb")) == NULL)
     ShowMessage("Data\\Musteri.prjb dosyasý bulunamadý.");
else
{
fseek(Dosyask, 0, SEEK_SET);
fread(&Adres_kaydisk, sizeof(Yapisk), 1, Dosyask);
        Edit1->Text = String(Adres_kaydisk.Ad);
        Edit2->Text = String(Adres_kaydisk.Soyad);
        Edit3->Text = String(Adres_kaydisk.Musteri);
        Edit4->Text = String(Adres_kaydisk.Hesap);
        Edit5->Text = String(Adres_kaydisk.Kayit);
        Edit6->Text = String(Adres_kaydisk.Kayityapan);
        Edit7->Text = String(Adres_kaydisk.Gorevi);
        Edit8->Text = String(Adres_kaydisk.Birimi);
        Edit9->Text = String(Adres_kaydisk.Dogum);
        Edit10->Text = String(Adres_kaydisk.Dogumyer);
        Edit11->Text = String(Adres_kaydisk.Meslek);
        Edit12->Text = String(Adres_kaydisk.Sektor);
        Memo2->Text = String(Adres_kaydisk.Ev);
        Edit13->Text = String(Adres_kaydisk.Evtel);
        Memo3->Text = String(Adres_kaydisk.is);
        Edit14->Text = String(Adres_kaydisk.istel);
        Edit15->Text = String(Adres_kaydisk.Ceptel);
        Edit16->Text = String(Adres_kaydisk.email);
        Memo1->Text = String(Adres_kaydisk.Odeme);
        Edit17->Text = String(Adres_kaydisk.SayfaNo);
        }
}
//---------------------------------------------------------------------------

void __fastcall TSkayit::ToolButton2Click(TObject *Sender)
{
Birey->FarklKaydet1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TSkayit::Image1Click(TObject *Sender)
{
  if (OpenPictureDialog1->Execute()){
    Current6File = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(Current6File);
  }        
}
//---------------------------------------------------------------------------

void __fastcall TSkayit::ToolButton4Click(TObject *Sender)
{
  if (PrintDialog1->Execute()){
    try {
        Skayit->Print();
    }
    catch(...){
        Printer()->EndDoc();
        throw;
    }
  }
}
//---------------------------------------------------------------------------

void __fastcall TSkayit::ToolButton6Click(TObject *Sender)
{
int Kayit_no;
fseek(Dosyask, (Kayit_no * sizeof(Yapisk)), SEEK_SET);
fread(&Adres_kaydisk, sizeof(Yapisk), 1, Dosyask);
        Edit1->Text = String(Adres_kaydisk.Ad);
        Edit2->Text = String(Adres_kaydisk.Soyad);
        Edit3->Text = String(Adres_kaydisk.Musteri);
        Edit4->Text = String(Adres_kaydisk.Hesap);
        Edit5->Text = String(Adres_kaydisk.Kayit);
        Edit6->Text = String(Adres_kaydisk.Kayityapan);
        Edit7->Text = String(Adres_kaydisk.Gorevi);
        Edit8->Text = String(Adres_kaydisk.Birimi);
        Edit9->Text = String(Adres_kaydisk.Dogum);
        Edit10->Text = String(Adres_kaydisk.Dogumyer);
        Edit11->Text = String(Adres_kaydisk.Meslek);
        Edit12->Text = String(Adres_kaydisk.Sektor);
        Memo2->Text = String(Adres_kaydisk.Ev);
        Edit13->Text = String(Adres_kaydisk.Evtel);
        Memo3->Text = String(Adres_kaydisk.is);
        Edit14->Text = String(Adres_kaydisk.istel);
        Edit15->Text = String(Adres_kaydisk.Ceptel);
        Edit16->Text = String(Adres_kaydisk.email);
        Memo1->Text = String(Adres_kaydisk.Odeme);
        Edit17->Text = String(Adres_kaydisk.SayfaNo);
        if (Kayit_no >= 1)
        Kayit_no = Kayit_no -1;
        else
        Kayit_no = 1;
}
//---------------------------------------------------------------------------

void __fastcall TSkayit::ToolButton7Click(TObject *Sender)
{
fseek(Dosyask, 0, SEEK_SET);
fread(&Adres_kaydisk, sizeof(Yapisk), 1, Dosyask);
        Edit1->Text = String(Adres_kaydisk.Ad);
        Edit2->Text = String(Adres_kaydisk.Soyad);
        Edit3->Text = String(Adres_kaydisk.Musteri);
        Edit4->Text = String(Adres_kaydisk.Hesap);
        Edit5->Text = String(Adres_kaydisk.Kayit);
        Edit6->Text = String(Adres_kaydisk.Kayityapan);
        Edit7->Text = String(Adres_kaydisk.Gorevi);
        Edit8->Text = String(Adres_kaydisk.Birimi);
        Edit9->Text = String(Adres_kaydisk.Dogum);
        Edit10->Text = String(Adres_kaydisk.Dogumyer);
        Edit11->Text = String(Adres_kaydisk.Meslek);
        Edit12->Text = String(Adres_kaydisk.Sektor);
        Memo2->Text = String(Adres_kaydisk.Ev);
        Edit13->Text = String(Adres_kaydisk.Evtel);
        Memo3->Text = String(Adres_kaydisk.is);
        Edit14->Text = String(Adres_kaydisk.istel);
        Edit15->Text = String(Adres_kaydisk.Ceptel);
        Edit16->Text = String(Adres_kaydisk.email);
        Memo1->Text = String(Adres_kaydisk.Odeme);
        Edit17->Text = String(Adres_kaydisk.SayfaNo);
}
//---------------------------------------------------------------------------

void __fastcall TSkayit::ToolButton8Click(TObject *Sender)
{
int Boyut;
int Handle;
int Yer;
Yer = ftell(Dosyask);
Handle = open("Data\\Musteri.prjb", O_APPEND);
Boyut = filelength(Handle);
if (Boyut == Yer )
   ShowMessage("Dosyanýn sonundasýnýz");
   else
   {
   fseek(Dosyask, 0, SEEK_CUR);
   fread(&Adres_kaydisk, sizeof(Yapisk), 1, Dosyask);
        Edit1->Text = String(Adres_kaydisk.Ad);
        Edit2->Text = String(Adres_kaydisk.Soyad);
        Edit3->Text = String(Adres_kaydisk.Musteri);
        Edit4->Text = String(Adres_kaydisk.Hesap);
        Edit5->Text = String(Adres_kaydisk.Kayit);
        Edit6->Text = String(Adres_kaydisk.Kayityapan);
        Edit7->Text = String(Adres_kaydisk.Gorevi);
        Edit8->Text = String(Adres_kaydisk.Birimi);
        Edit9->Text = String(Adres_kaydisk.Dogum);
        Edit10->Text = String(Adres_kaydisk.Dogumyer);
        Edit11->Text = String(Adres_kaydisk.Meslek);
        Edit12->Text = String(Adres_kaydisk.Sektor);
        Memo2->Text = String(Adres_kaydisk.Ev);
        Edit13->Text = String(Adres_kaydisk.Evtel);
        Memo3->Text = String(Adres_kaydisk.is);
        Edit14->Text = String(Adres_kaydisk.istel);
        Edit15->Text = String(Adres_kaydisk.Ceptel);
        Edit16->Text = String(Adres_kaydisk.email);
        Memo1->Text = String(Adres_kaydisk.Odeme);
        Edit17->Text = String(Adres_kaydisk.SayfaNo);
        }
}
//---------------------------------------------------------------------------

