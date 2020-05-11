//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit31.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CCALENDR"
#pragma resource "*.dfm"
TCalender *Calender;
//---------------------------------------------------------------------------
__fastcall TCalender::TCalender(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCalender::BitBtn1Click(TObject *Sender)
{
  Calendar1->PrevYear();        
}
//---------------------------------------------------------------------------
void __fastcall TCalender::BitBtn2Click(TObject *Sender)
{
  Calendar1->PrevMonth();        
}
//---------------------------------------------------------------------------
void __fastcall TCalender::BitBtn3Click(TObject *Sender)
{
  Calendar1->NextMonth();        
}
//---------------------------------------------------------------------------
void __fastcall TCalender::BitBtn4Click(TObject *Sender)
{
  Calendar1->NextYear();        
}
//---------------------------------------------------------------------------
void __fastcall TCalender::Calendar1Change(TObject *Sender)
{
  Caption = "Takvim   " + DateToStr(Calendar1->CalendarDate);
}
//---------------------------------------------------------------------------
