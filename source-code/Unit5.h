//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include <jpeg.hpp>
#include <ToolWin.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TBetonarme : public TForm
{
__published:	// IDE-managed Components
        TToolBar *ToolBar1;
        TToolButton *ToolButton1;
        TToolButton *ToolButton2;
        TImageList *ImageList1;
        TStringGrid *StringGrid1;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TEdit *Edit10;
        TToolButton *ToolButton3;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TToolButton *ToolButton6;
        TEdit *Edit11;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TButton *Button1;
        TMainMenu *MainMenu1;
        TMenuItem *Dosya1;
        TMenuItem *YeniProje1;
        TEdit *Edit12;
        TEdit *Edit13;
        TLabel *Label22;
        TLabel *Label23;
        TLabel *Label24;
        TLabel *Label25;
        TLabel *Label26;
        TEdit *Edit14;
        TLabel *Label27;
        TLabel *Label28;
        TLabel *Label29;
        TEdit *Edit15;
        TEdit *Edit16;
        TEdit *Edit17;
        TMenuItem *Birey1;
        TMenuItem *MetrajCetveli1;
        TMenuItem *izimEditr1;
        TMenuItem *Betonarme1;
        TMenuItem *Karayolu1;
        TMenuItem *Hidroloji1;
        TMenuItem *N1;
        TMenuItem *Kaydet1;
        TMenuItem *N2;
        TMenuItem *YazcAyarlar1;
        TMenuItem *N3;
        TMenuItem *OfficeExpress1;
        TMenuItem *Xlime1;
        TMenuItem *Paint1;
        TMenuItem *N4;
        TMenuItem *Programdank1;
        TMenuItem *N5;
        TMenuItem *Kapat1;
        TPrinterSetupDialog *PrinterSetupDialog1;
        TMenuItem *Grnm1;
        TMenuItem *Klt1;
        TMenuItem *Ynetim1;
        TMenuItem *Hesapla1;
        TMenuItem *Veriler1;
        TMenuItem *KaytlBetonarmeBilgileri1;
        TMenuItem *N6;
        TMenuItem *PersonelTantmKart1;
        TMenuItem *KaynakKart1;
        TMenuItem *KaytlMteri1;
        TMenuItem *N7;
        TMenuItem *KaytlMetrajBilgileri1;
        TMenuItem *Aralar1;
        TMenuItem *ConvertB1;
        TMenuItem *ListB1;
        TMenuItem *Pencere1;
        TMenuItem *Yanyana1;
        TMenuItem *Altalta1;
        TMenuItem *Grupla1;
        TMenuItem *Yardm1;
        TMenuItem *KullanmKlavuzu1;
        TMenuItem *TG1;
        TMenuItem *ProjeBHakknda1;
        TMenuItem *SrmBilgileri1;
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ToolButton3Click(TObject *Sender);
        void __fastcall ToolButton5Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall YazcAyarlar1Click(TObject *Sender);
        void __fastcall Birey1Click(TObject *Sender);
        void __fastcall MetrajCetveli1Click(TObject *Sender);
        void __fastcall izimEditr1Click(TObject *Sender);
        void __fastcall Betonarme1Click(TObject *Sender);
        void __fastcall Karayolu1Click(TObject *Sender);
        void __fastcall Hidroloji1Click(TObject *Sender);
        void __fastcall Kaydet1Click(TObject *Sender);
        void __fastcall Kapat1Click(TObject *Sender);
        void __fastcall OfficeExpress1Click(TObject *Sender);
        void __fastcall Xlime1Click(TObject *Sender);
        void __fastcall Paint1Click(TObject *Sender);
        void __fastcall Programdank1Click(TObject *Sender);
        void __fastcall Klt1Click(TObject *Sender);
        void __fastcall Hesapla1Click(TObject *Sender);
        void __fastcall KaytlBetonarmeBilgileri1Click(TObject *Sender);
        void __fastcall PersonelTantmKart1Click(TObject *Sender);
        void __fastcall KaynakKart1Click(TObject *Sender);
        void __fastcall KaytlMteri1Click(TObject *Sender);
        void __fastcall KaytlMetrajBilgileri1Click(TObject *Sender);
        void __fastcall ConvertB1Click(TObject *Sender);
        void __fastcall ListB1Click(TObject *Sender);
        void __fastcall Yanyana1Click(TObject *Sender);
        void __fastcall Altalta1Click(TObject *Sender);
        void __fastcall Grupla1Click(TObject *Sender);
        void __fastcall KullanmKlavuzu1Click(TObject *Sender);
        void __fastcall TG1Click(TObject *Sender);
        void __fastcall ProjeBHakknda1Click(TObject *Sender);
        void __fastcall SrmBilgileri1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TBetonarme(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBetonarme *Betonarme;
//---------------------------------------------------------------------------
#endif
