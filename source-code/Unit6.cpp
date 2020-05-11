//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit18.h"
#include "Unit20.h"
#include "Unit22.h"
#include "Unit24.h"
#include "Unit27.h"
#include "Unit29.h"
#include "Unit32.h"
#include "Unit33.h"
#include "Unit34.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKarayolu *Karayolu;
//---------------------------------------------------------------------------
__fastcall TKarayolu::TKarayolu(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TKarayolu::ToolButton1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void TKarayolu::Animate(TChartSeries* Series)
{
  Series1->Delete(0); // <-- remove the first point
  // Add a new random point
  Series1->AddXY(Series->XValues->Last()+1,
    Series1->YValues->Last()+(random(ChartSamplesMax)-(ChartSamplesMax/2)),
    "");
    }
void __fastcall TKarayolu::Timer1Timer(TObject *Sender)
{
String tmpLabel;
Animate(Series1);
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::FormCreate(TObject *Sender)
{
Series1->FillSampleValues(20); // <-- Some random points
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::CheckBox1Click(TObject *Sender)
{
  Timer1->Enabled=CheckBox1->Checked;        
}
//---------------------------------------------------------------------------



void __fastcall TKarayolu::CheckBox2Click(TObject *Sender)
{
  Chart1->View3D=CheckBox2->Checked;        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::ToolButton3Click(TObject *Sender)
{
  int tmpH,tmpW;
  // This code creates and stores a new BITMAP file
  // which contains the FOUR charts.
  // Asks previously the user the BMP filename.
  if (SaveDialog1->Execute()) {
    Graphics::TBitmap* bm = new Graphics::TBitmap;
    try {
      // calculate bitmap size (2x2)
      tmpW=Chart1->Width;
      tmpH=Chart1->Height;
      bm->Width = 1*tmpW;
      bm->Height= 1*tmpH;
      // draw chart 1
      Chart1->BufferedDisplay=false;
      Chart1->Draw(bm->Canvas,Rect(0,0,tmpW,tmpH));
      Chart1->BufferedDisplay=true;
      bm->SaveToFile(SaveDialog1->FileName);
    }
    __finally {
      delete bm;
    }
  }
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::ToolButton5Click(TObject *Sender)
{
  if (PrintDialog1->Execute()){
    try {
        Chart1->Print();
    }
    catch(...){
        Printer()->EndDoc();
        throw;
    }
  }        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::FormClose(TObject *Sender, TCloseAction &Action)
{
Action=caFree;        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::ToolButton7Click(TObject *Sender)
{
Application->CreateForm(__classid(TKarayar), &Karayar);
Karayar->Show();
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Birey1Click(TObject *Sender)
{
Birey = new TBirey(this);
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::MetrajCetveli1Click(TObject *Sender)
{
Hakkedis = new THakkedis(this);
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::izimEditr1Click(TObject *Sender)
{
Cizim = new TCizim(this);        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Betonarme1Click(TObject *Sender)
{
Betonarme = new TBetonarme(this);
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Karayolu1Click(TObject *Sender)
{
Karayolu = new TKarayolu(this);        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Hidroloji1Click(TObject *Sender)
{
Hidroloji = new THidroloji(this);        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Kaydet1Click(TObject *Sender)
{
ToolButton3Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Yazdr1Click(TObject *Sender)
{
ToolButton5Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::YazcAyarlar1Click(TObject *Sender)
{
PrinterSetupDialog1->Execute();         
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Kapat1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::OfficeExpress1Click(TObject *Sender)
{
Application->CreateForm(__classid(TOffice), &Office);
Office->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Xlime1Click(TObject *Sender)
{
Application->CreateForm(__classid(TXlime), &Xlime);
Xlime->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Paint1Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm10), &Form10);
Form10->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Programdank1Click(TObject *Sender)
{
int Kapat;
Kapat = Application->MessageBoxA("Program kapatýlsýn mý?", "Uyarý!", 3);
if (Kapat==6)
      Application->Terminate();
else
      Action = caNone;        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Klt1Click(TObject *Sender)
{
Application->Minimize();        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Ayarlar1Click(TObject *Sender)
{
Application->CreateForm(__classid(TKarayar), &Karayar);
Karayar->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::PersonelTantmKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TPkayit), &Pkayit);
Pkayit->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::KaynakKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TKkayit), &Kkayit);
Kkayit->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::KaytlMteri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TSkayit), &Skayit);
Skayit->ShowModal();           
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::KaytlMetrajBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TMetrajoku), &Metrajoku);
Metrajoku->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::KaytlBetonarmeBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBetonoku), &Betonoku);
Betonoku->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::ConvertB1Click(TObject *Sender)
{
int Cal;
Cal = WinExec("Convertb.exe", 9);
if (Cal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (Cal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::ListB1Click(TObject *Sender)
{
int kal;
kal = WinExec("Listb.exe", 9);
if (kal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (kal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");         
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Yanyana1Click(TObject *Sender)
{
Form1->Yanyana1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Altalta1Click(TObject *Sender)
{
Form1->Altalta1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::Grupla1Click(TObject *Sender)
{
Form1->Grupla1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::KullanmaKlavuzu1Click(TObject *Sender)
{
int Mal;
Mal = WinExec("Help\\klvz.exe", 9);
if (Mal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (Mal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::TG1Click(TObject *Sender)
{
Application->CreateForm(__classid(TTGinfo), &TGinfo);
TGinfo->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::ProjeBHakknda1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBilgi), &Bilgi);
Bilgi->ShowModal();          
}
//---------------------------------------------------------------------------

void __fastcall TKarayolu::SrmBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TProduct), &Product);
Product->ShowModal();
}
//---------------------------------------------------------------------------

