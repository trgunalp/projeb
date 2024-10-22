//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit1.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit12.h"
#include "Unit13.h"
#include "Unit14.h"
#include "Unit15.h"
#include "Unit16.h"
#include "Unit18.h"
#include "Unit20.h"
#include "Unit22.h"
#include "Unit24.h"
#include "Unit29.h"
#include "Unit32.h"
#include "Unit33.h"
#include "Unit34.h"
#include <Clipbrd.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCizim *Cizim;
//---------------------------------------------------------------------------
__fastcall TCizim::TCizim(TComponent* Owner)
        : TForm(Owner)
{
Image->Canvas->MoveTo(0,0);
}
//---------------------------------------------------------------------------


void __fastcall TCizim::ImageMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
  Drawing = true;
  Image->Canvas->MoveTo(X, Y);
  Origin = Point(X, Y);
  MovePt = Origin;

  TVarRec tempvar[2] = {X, Y};
  Form1->StatusBar1->Panels->Items[0]->Text = Format("Ba�lang�� Koordinat Tak�m�: (%d, %d)", tempvar, 2);
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ImageMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
  if (Drawing){
    DrawShape(Origin, MovePt, pmNotXor);
    MovePt = Point(X, Y);
    DrawShape(Origin, MovePt, pmNotXor);
  }
    TVarRec tempvar[2] = {X, Y};
  Form1->StatusBar1->Panels->Items[1]->Text = Format("Koordinat Tak�m�: (%d, %d)", tempvar, 2);
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ImageMouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
  if (Drawing){
    DrawShape(Origin, Point(X, Y), pmCopy);
    Drawing = false;
  }
}
//---------------------------------------------------------------------------

void __fastcall TCizim::DrawShape(TPoint TopLeft, TPoint BottomRight, TPenMode AMode){
    Image->Canvas->Pen->Mode = AMode;

    switch (DrawingTool){
           case dtLine : {
                Image->Canvas->MoveTo(TopLeft.x, TopLeft.y);
                Image->Canvas->LineTo(BottomRight.x, BottomRight.y);
                break;
           }

           case dtRectangle : {
                Image->Canvas->Rectangle(TopLeft.x, TopLeft.y, BottomRight.x, BottomRight.y);
                break;
           }

           case dtEllipse : {
                Image->Canvas->Ellipse(TopLeft.x, TopLeft.y, BottomRight.x, BottomRight.y);
                break;
           }

           case dtRoundRect : {
                Image->Canvas->RoundRect(TopLeft.x, TopLeft.y, BottomRight.x, BottomRight.y, (TopLeft.x - BottomRight.x)/2, (TopLeft.y - BottomRight.y)/2);
                break;
           }
    }
}
//---------------------------------------------------------------------


void __fastcall TCizim::FormClose(TObject *Sender, TCloseAction &Action)
{
Action=caFree;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::izimEditr1Click(TObject *Sender)
{
Cizim = new TCizim(this);        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ResimBelgesiA1Click(TObject *Sender)
{
  if (OpenDialog1->Execute()){
    CurrentFile = OpenDialog1->FileName;
    Image->Picture->LoadFromFile(CurrentFile);
  }
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Kapat1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Kaydet1Click(TObject *Sender)
{
  if (CurrentFile != EmptyStr){
    Image->Picture->SaveToFile(CurrentFile);
  }
  else{
   FarklKaydet1Click(Sender);
  }        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::FarklKaydet1Click(TObject *Sender)
{
  if (SaveDialog1->Execute()){
    CurrentFile = SaveDialog1->FileName;
    Kaydet1Click(Sender);
  }
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Yazdr1Click(TObject *Sender)
{
  if (PrintDialog1->Execute()){
    try {
        Cizim->Print();
    }
    catch(...){
        Printer()->EndDoc();
        throw;
    }
  }
}
//---------------------------------------------------------------------------

void __fastcall TCizim::YazcAyarlar1Click(TObject *Sender)
{
PrinterSetupDialog1->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TCizim::OfficeExpress1Click(TObject *Sender)
{
Application->CreateForm(__classid(TOffice), &Office);
Office->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Xlime1Click(TObject *Sender)
{
Application->CreateForm(__classid(TXlime), &Xlime);
Xlime->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Paint1Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm10), &Form10);
Form10->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Kes1Click(TObject *Sender)
{
TRect ARect;

 Kopyala1Click(Sender);

 Image->Canvas->CopyMode = cmWhiteness;
 ARect = Rect(0, 0, Image->Width, Image->Height);
 Image->Canvas->CopyRect(ARect, Image->Canvas, ARect);
 Image->Canvas->CopyMode = cmSrcCopy;
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Kopyala1Click(TObject *Sender)
{
Clipboard()->Assign(Image->Picture);        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Yaptr1Click(TObject *Sender)
{
Graphics::TBitmap *Bitmap;

  if (Clipboard()->HasFormat(CF_BITMAP)){
    Bitmap = new Graphics::TBitmap();
    try{
      Bitmap->Assign(Clipboard());
      Image->Canvas->Draw(0, 0, Bitmap);
      delete Bitmap;
    }
    catch(...){
      delete Bitmap;
    }
  }
}
//---------------------------------------------------------------------------


void __fastcall TCizim::ToolButton1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton3Click(TObject *Sender)
{
  if (OpenDialog1->Execute()){
    CurrentFile = OpenDialog1->FileName;
    Image->Picture->LoadFromFile(CurrentFile);
  }        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton34Click(TObject *Sender)
{
  if (CurrentFile != EmptyStr){
    Image->Picture->SaveToFile(CurrentFile);
  }
  else{
   FarklKaydet1Click(Sender);
  }        
}
//---------------------------------------------------------------------------


void __fastcall TCizim::ToolButton36Click(TObject *Sender)
{
    unsigned int BitmapInfoSize, BitmapImageSize;
    long DIBWidth, DIBHeight;
    PChar BitmapImage;
    Windows::PBitmapInfo BitmapInfo;
    Graphics::TBitmap *Bitmap;

    Printer()->BeginDoc();
    Bitmap = new Graphics::TBitmap();
    Bitmap->Assign(Image->Picture);
    GetDIBSizes(Bitmap->Handle, BitmapInfoSize, BitmapImageSize);
    BitmapInfo  = (PBitmapInfo) new char[BitmapInfoSize];
    BitmapImage = (PChar) new char [BitmapImageSize];
    GetDIB(Bitmap->Handle, 0, BitmapInfo, BitmapImage);
    DIBWidth  = BitmapInfo->bmiHeader.biWidth;
    DIBHeight = BitmapInfo->bmiHeader.biHeight;
    StretchDIBits(Printer()->Canvas->Handle,
                0, 0, DIBWidth, DIBHeight,
                0, 0, DIBWidth, DIBHeight,
                BitmapImage, BitmapInfo,
                DIB_RGB_COLORS, SRCCOPY);
    delete [] BitmapImage;
    delete [] BitmapInfo;
    delete Bitmap;

    Printer()->EndDoc();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton38Click(TObject *Sender)
{
TRect ARect;

 Kopyala1Click(Sender);

 Image->Canvas->CopyMode = cmWhiteness;
 ARect = Rect(0, 0, Image->Width, Image->Height);
 Image->Canvas->CopyRect(ARect, Image->Canvas, ARect);
 Image->Canvas->CopyMode = cmSrcCopy;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton39Click(TObject *Sender)
{
Clipboard()->Assign(Image->Picture);        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton40Click(TObject *Sender)
{
Graphics::TBitmap *Bitmap;

  if (Clipboard()->HasFormat(CF_BITMAP)){
    Bitmap = new Graphics::TBitmap();
    try{
      Bitmap->Assign(Clipboard());
      Image->Canvas->Draw(0, 0, Bitmap);
      delete Bitmap;
    }
    catch(...){
      delete Bitmap;
    }
  }        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::PenSizeChangeChange(TObject *Sender)
{
Image->Canvas->Pen->Width = PenWidth->Position;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton4Click(TObject *Sender)
{
     Graphics::TBitmap *Bitmap;

     NewBMPForm->ActiveControl = NewBMPForm->WidthEdit;
     NewBMPForm->WidthEdit->Text = IntToStr(Image->Picture->Graphic->Width);
     NewBMPForm->HeightEdit->Text = IntToStr(Image->Picture->Graphic->Height);
//     if (ShowModal() != idCancel){
     if (NewBMPForm->ShowModal() != IDCANCEL){
        Bitmap = new Graphics::TBitmap();
//        Bitmap->Create();
        Bitmap->Width = StrToInt(NewBMPForm->WidthEdit->Text);
        Bitmap->Height = StrToInt(NewBMPForm->HeightEdit->Text);
        Image->Picture->Graphic = Bitmap;
        CurrentFile = EmptyStr;
     }        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton6Click(TObject *Sender)
{
DrawingTool = dtLine;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton7Click(TObject *Sender)
{
DrawingTool = dtRectangle;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton8Click(TObject *Sender)
{
DrawingTool = dtEllipse;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton9Click(TObject *Sender)
{
DrawingTool = dtRoundRect;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton11Click(TObject *Sender)
{
Image->Canvas->Pen->Style = psSolid;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton12Click(TObject *Sender)
{
Image->Canvas->Pen->Style = psDash;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton13Click(TObject *Sender)
{
Image->Canvas->Pen->Style = psDot;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton14Click(TObject *Sender)
{
Image->Canvas->Pen->Style = psDashDot;
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton15Click(TObject *Sender)
{
Image->Canvas->Pen->Style = psDashDotDot;
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton16Click(TObject *Sender)
{
Image->Canvas->Pen->Style = psClear;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton17Click(TObject *Sender)
{
  ColorDialog1->Color = Image->Canvas->Pen->Color;
  if (ColorDialog1->Execute()){
    Image->Canvas->Pen->Color = ColorDialog1->Color;
  }        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton19Click(TObject *Sender)
{
Image->Canvas->Brush->Style = bsSolid;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton20Click(TObject *Sender)
{
Image->Canvas->Brush->Style = bsClear;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton21Click(TObject *Sender)
{
Image->Canvas->Brush->Style = bsHorizontal;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton22Click(TObject *Sender)
{
Image->Canvas->Brush->Style = bsVertical;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton23Click(TObject *Sender)
{
Image->Canvas->Brush->Style = bsFDiagonal;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton24Click(TObject *Sender)
{
Image->Canvas->Brush->Style = bsBDiagonal;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton25Click(TObject *Sender)
{
Image->Canvas->Brush->Style = bsCross;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton26Click(TObject *Sender)
{
Image->Canvas->Brush->Style = bsDiagCross;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton27Click(TObject *Sender)
{
  ColorDialog1->Color = Image->Canvas->Brush->Color;
  if (ColorDialog1->Execute()){
    Image->Canvas->Brush->Color = ColorDialog1->Color;
  }         
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton29Click(TObject *Sender)
{
Application->CreateForm(__classid(TCizgi), &Cizgi);
Cizgi->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton30Click(TObject *Sender)
{
Application->CreateForm(__classid(TKare), &Kare);
Kare->Show();
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton31Click(TObject *Sender)
{
Application->CreateForm(__classid(TElips), &Elips);
Elips->Show();
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ToolButton32Click(TObject *Sender)
{
Application->CreateForm(__classid(TPasta), &Pasta);
Pasta->Show();
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Birey1Click(TObject *Sender)
{
Birey = new TBirey(this);
}
//---------------------------------------------------------------------------

void __fastcall TCizim::HakediRaporu1Click(TObject *Sender)
{
Hakkedis = new THakkedis(this);
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Karayolu1Click(TObject *Sender)
{
Karayolu = new TKarayolu(this);
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Betonarme1Click(TObject *Sender)
{
Betonarme = new TBetonarme(this);
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Hidroloji1Click(TObject *Sender)
{
Hidroloji = new THidroloji(this);
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Programdank1Click(TObject *Sender)
{
int Kapat;
Kapat = Application->MessageBoxA("Program kapat�ls�n m�?", "Uyar�!", 3);
if (Kapat==6)
      Application->Terminate();
else
      Action = caNone;        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Klt1Click(TObject *Sender)
{
Application->Minimize();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::PersonelTantmKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TPkayit), &Pkayit);
Pkayit->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::KaynakKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TKkayit), &Kkayit);
Kkayit->ShowModal();         
}
//---------------------------------------------------------------------------

void __fastcall TCizim::KaytlMteri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TSkayit), &Skayit);
Skayit->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::KaytlMetrajBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TMetrajoku), &Metrajoku);
Metrajoku->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::KaytlBetonarmeBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBetonoku), &Betonoku);
Betonoku->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ConvertB1Click(TObject *Sender)
{
int Cal;
Cal = WinExec("Convertb.exe", 9);
if (Cal==2)
ShowMessage("Program dosyas� bulunamad�.");
if (Cal==3)
ShowMessage("S�r�c� veya klas�r ad� ge�ersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ListB1Click(TObject *Sender)
{
int kal;
kal = WinExec("Listb.exe", 9);
if (kal==2)
ShowMessage("Program dosyas� bulunamad�.");
if (kal==3)
ShowMessage("S�r�c� veya klas�r ad� ge�ersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::YenialmaAlan1Click(TObject *Sender)
{
ToolButton4Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Yanyana1Click(TObject *Sender)
{
Form1->Yanyana1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Altalta1Click(TObject *Sender)
{
Form1->Altalta1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Grupla1Click(TObject *Sender)
{
Form1->Grupla1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::izgi1Click(TObject *Sender)
{
Application->CreateForm(__classid(TCizgi), &Cizgi);
Cizgi->Show();          
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Dikdrtgen1Click(TObject *Sender)
{
Application->CreateForm(__classid(TKare), &Kare);
Kare->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Elips1Click(TObject *Sender)
{
Application->CreateForm(__classid(TElips), &Elips);
Elips->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::Pasta1Click(TObject *Sender)
{
Application->CreateForm(__classid(TPasta), &Pasta);
Pasta->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::KullanmaKlavuzu1Click(TObject *Sender)
{
int Mal;
Mal = WinExec("Help\\klvz.exe", 9);
if (Mal==2)
ShowMessage("Program dosyas� bulunamad�.");
if (Mal==3)
ShowMessage("S�r�c� veya klas�r ad� ge�ersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::TG1Click(TObject *Sender)
{
Application->CreateForm(__classid(TTGinfo), &TGinfo);
TGinfo->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TCizim::ProjeBHakknda1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBilgi), &Bilgi);
Bilgi->ShowModal();         
}
//---------------------------------------------------------------------------

void __fastcall TCizim::SrmBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TProduct), &Product);
Product->ShowModal();
}
//---------------------------------------------------------------------------

