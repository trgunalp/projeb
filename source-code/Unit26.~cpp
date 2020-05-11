//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit26.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit18.h"
#include "Unit20.h"
#include "Unit22.h"
#include "Unit24.h"
#include "Unit29.h"
#include "Unit32.h"
#include "Unit33.h"
#include "Unit34.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGrafik *Grafik;
//---------------------------------------------------------------------------
__fastcall TGrafik::TGrafik(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGrafik::Button1Click(TObject *Sender)
{
float Dilim1;
float Dilim2;
float Dilim3;
float Dilim4;
float Dilim5;
float Dilim6;
float Dilim7;
float Dilim8;
float Dilim9;
float Dilim10;
float Dilim11;
float Dilim12;
float Dilim13;
float Dilim14;
float Dilim15;
float Dilim16;
float Dilim17;
float Dilim18;
float Dilim19;
float Dilim20;
float Dilim21;
float Dilim22;
float Dilim23;
float Dilim24;
float Dilim25;
Dilim1 = StrToFloat(Edit1->Text);
Dilim2 = StrToFloat(Edit2->Text);
Dilim3 = StrToFloat(Edit3->Text);
Dilim4 = StrToFloat(Edit4->Text);
Dilim5 = StrToFloat(Edit5->Text);
Dilim6 = StrToFloat(Edit6->Text);
Dilim7 = StrToFloat(Edit7->Text);
Dilim8 = StrToFloat(Edit8->Text);
Dilim9 = StrToFloat(Edit9->Text);
Dilim10 = StrToFloat(Edit10->Text);
Dilim11 = StrToFloat(Edit11->Text);
Dilim12 = StrToFloat(Edit12->Text);
Dilim13 = StrToFloat(Edit13->Text);
Dilim14 = StrToFloat(Edit14->Text);
Dilim15 = StrToFloat(Edit15->Text);
Dilim16 = StrToFloat(Edit16->Text);
Dilim17 = StrToFloat(Edit17->Text);
Dilim18 = StrToFloat(Edit18->Text);
Dilim19 = StrToFloat(Edit19->Text);
Dilim20 = StrToFloat(Edit20->Text);
Dilim21 = StrToFloat(Edit21->Text);
Dilim22 = StrToFloat(Edit22->Text);
Dilim23 = StrToFloat(Edit23->Text);
Dilim24 = StrToFloat(Edit24->Text);
Dilim25 = StrToFloat(Edit25->Text);
Chartfx1->OpenDataEx(1, 1, 3);
Chartfx1->ThisSerie = 0;
Chartfx1->Value[0] = Dilim1;
Chartfx1->Value[1] = Dilim2;
Chartfx1->Value[2] = Dilim3;
Chartfx1->Value[3] = Dilim4;
Chartfx1->Value[4] = Dilim5;
Chartfx1->Value[5] = Dilim6;
Chartfx1->Value[6] = Dilim7;
Chartfx1->Value[7] = Dilim8;
Chartfx1->Value[8] = Dilim9;
Chartfx1->Value[9] = Dilim10;
Chartfx1->Value[10] = Dilim11;
Chartfx1->Value[11] = Dilim12;
Chartfx1->Value[12] = Dilim13;
Chartfx1->Value[13] = Dilim14;
Chartfx1->Value[14] = Dilim15;
Chartfx1->Value[15] = Dilim16;
Chartfx1->Value[16] = Dilim17;
Chartfx1->Value[17] = Dilim18;
Chartfx1->Value[18] = Dilim19;
Chartfx1->Value[19] = Dilim20;
Chartfx1->Value[20] = Dilim21;
Chartfx1->Value[21] = Dilim22;
Chartfx1->Value[22] = Dilim23;
Chartfx1->Value[23] = Dilim24;
Chartfx1->Value[24] = Dilim25;
Chartfx1->CloseData(1);
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::FormClose(TObject *Sender, TCloseAction &Action)
{
Action=caFree;
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::ToolButton1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Birey1Click(TObject *Sender)
{
Birey = new TBirey(this);
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::MetrajCetveli1Click(TObject *Sender)
{
Hakkedis = new THakkedis(this);        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::izimEditr1Click(TObject *Sender)
{
Cizim = new TCizim(this);        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Betonarme1Click(TObject *Sender)
{
Betonarme = new TBetonarme(this);        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Karayolu1Click(TObject *Sender)
{
Karayolu = new TKarayolu(this);        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Hidroloji1Click(TObject *Sender)
{
Hidroloji = new THidroloji(this);        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::ChartB1Click(TObject *Sender)
{
Grafik = new TGrafik(this);
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::YazcAyarlar1Click(TObject *Sender)
{
PrinterSetupDialog1->Execute();         
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Kapat1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::OfficeExpress1Click(TObject *Sender)
{
Application->CreateForm(__classid(TOffice), &Office);
Office->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Xlime1Click(TObject *Sender)
{
Application->CreateForm(__classid(TXlime), &Xlime);
Xlime->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Paint1Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm10), &Form10);
Form10->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Programdank1Click(TObject *Sender)
{
int Kapat;
Kapat = Application->MessageBoxA("Program kapatýlsýn mý?", "Uyarý!", 3);
if (Kapat==6)
      Application->Terminate();
else
      Action = caNone;
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Klt1Click(TObject *Sender)
{
Application->Minimize();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::PersonelTantmKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TPkayit), &Pkayit);
Pkayit->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::KaynakKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TKkayit), &Kkayit);
Kkayit->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::KaytlMteri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TSkayit), &Skayit);
Skayit->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::KaytlMetrajBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TMetrajoku), &Metrajoku);
Metrajoku->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::KaytlBetonarmeBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBetonoku), &Betonoku);
Betonoku->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::ConvertB1Click(TObject *Sender)
{
int Cal;
Cal = WinExec("Convertb.exe", 9);
if (Cal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (Cal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::ListB1Click(TObject *Sender)
{
int kal;
kal = WinExec("Listb.exe", 9);
if (kal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (kal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Yanyana1Click(TObject *Sender)
{
Form1->Yanyana1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Altalta1Click(TObject *Sender)
{
Form1->Altalta1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Grupla1Click(TObject *Sender)
{
Form1->Grupla1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::KullanmaKlavuzu1Click(TObject *Sender)
{
int Mal;
Mal = WinExec("Help\\klvz.exe", 9);
if (Mal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (Mal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::TG1Click(TObject *Sender)
{
Application->CreateForm(__classid(TTGinfo), &TGinfo);
TGinfo->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::ProjeBHakknda1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBilgi), &Bilgi);
Bilgi->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::SrmBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TProduct), &Product);
Product->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::Olutur1Click(TObject *Sender)
{
Button1Click(Sender);        
}
//---------------------------------------------------------------------------

