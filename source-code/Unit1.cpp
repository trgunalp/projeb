//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

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
#include "Unit11.h"
#include "Unit18.h"
#include "Unit20.h"
#include "Unit22.h"
#include "Unit24.h"
#include "Unit29.h"
#include "Unit30.h"
#include "Unit31.h"
#include "Unit32.h"
#include "Unit33.h"
#include "Unit34.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton2Click(TObject *Sender)
{
Hakkedis = new THakkedis(this);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Programdank1Click(TObject *Sender)
{
int Kapat;
Kapat = Application->MessageBoxA("Program kapatýlsýn mý?", "Uyarý!", 3);
if (Kapat==6)
      Application->Terminate();
else
      Action = caNone;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Klt1Click(TObject *Sender)
{
Application->Minimize();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ToolButton5Click(TObject *Sender)
{
Betonarme = new TBetonarme(this);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Birey1Click(TObject *Sender)
{
Birey = new TBirey(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HakkediRaporu1Click(TObject *Sender)
{
Hakkedis = new THakkedis(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::izimEditr1Click(TObject *Sender)
{
Cizim = new TCizim(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Betonarme1Click(TObject *Sender)
{
Betonarme = new TBetonarme(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Karayolu1Click(TObject *Sender)
{
Karayolu = new TKarayolu(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Hidroloji1Click(TObject *Sender)
{
Hidroloji = new THidroloji(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OfficeExpress1Click(TObject *Sender)
{
Application->CreateForm(__classid(TOffice), &Office);
Office->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Xlime1Click(TObject *Sender)
{
Application->CreateForm(__classid(TXlime), &Xlime);
Xlime->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Paint1Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm10), &Form10);
Form10->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton18Click(TObject *Sender)
{
int Sal;
Sal = WinExec("Help\\klvz.exe", 9);
if (Sal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (Sal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton14Click(TObject *Sender)
{
Application->CreateForm(__classid(TOffice), &Office);
Office->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton15Click(TObject *Sender)
{
Application->CreateForm(__classid(TXlime), &Xlime);
Xlime->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Application->OnHint = Hint_yaz;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Hint_yaz(TObject *Sender)
{
StatusBar1->SimpleText = Application->Hint;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Yanyana1Click(TObject *Sender)
{
Tile();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Altalta1Click(TObject *Sender)
{
Cascade();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Grupla1Click(TObject *Sender)
{
ArrangeIcons();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton1Click(TObject *Sender)
{
Birey = new TBirey(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton7Click(TObject *Sender)
{
Karayolu = new TKarayolu(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton8Click(TObject *Sender)
{
Hidroloji = new THidroloji(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton16Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm10), &Form10);
Form10->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton19Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm11), &Form11);
Form11->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton3Click(TObject *Sender)
{
Cizim = new TCizim(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton10Click(TObject *Sender)
{
Application->CreateForm(__classid(Tiletisim), &iletisim);
iletisim->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton12Click(TObject *Sender)
{
Application->CreateForm(__classid(TCalender), &Calender);
Calender->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PersonelTantmKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TPkayit), &Pkayit);
Pkayit->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KaynakKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TKkayit), &Kkayit);
Kkayit->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KaytlMteri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TSkayit), &Skayit);
Skayit->ShowModal();     
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KaytlBetonarmeBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBetonoku), &Betonoku);
Betonoku->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KaytlMetrajBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TMetrajoku), &Metrajoku);
Metrajoku->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConvertB1Click(TObject *Sender)
{
int Cal;
Cal = WinExec("Convertb.exe", 9);
if (Cal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (Cal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListB1Click(TObject *Sender)
{
int kal;
kal = WinExec("Listb.exe", 9);
if (kal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (kal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SrmBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TProduct), &Product);
Product->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KullanmKlavuzu1Click(TObject *Sender)
{
int Mal;
Mal = WinExec("Help\\klvz.exe", 9);
if (Mal==2)
ShowMessage("Program dosyasý bulunamadý.");
if (Mal==3)
ShowMessage("Sürücü veya klasör adý geçersiz.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ProjeBHakknda1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBilgi), &Bilgi);
Bilgi->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TG1Click(TObject *Sender)
{
Application->CreateForm(__classid(TTGinfo), &TGinfo);
TGinfo->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::YazcAyarlar1Click(TObject *Sender)
{
PrinterSetupDialog1->Execute();        
}
//---------------------------------------------------------------------------

