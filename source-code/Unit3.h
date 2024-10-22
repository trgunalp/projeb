//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
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
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
#include <Menus.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class THakkedis : public TForm
{
__published:	// IDE-managed Components
        TToolBar *ToolBar1;
        TToolButton *ToolButton1;
        TImageList *ImageList1;
        TImage *Image1;
        TOpenPictureDialog *OpenPictureDialog1;
        TSavePictureDialog *SavePictureDialog1;
        TMainMenu *MainMenu1;
        TMenuItem *Dosya1;
        TMenuItem *LogoBelirle1;
        TMenuItem *Kaydet1;
        TMenuItem *FarklKaydet1;
        TLabel *Label1;
        TEdit *Edit1;
        TLabel *Label2;
        TEdit *Edit2;
        TLabel *Label3;
        TEdit *Edit3;
        TLabel *Label4;
        TEdit *Edit4;
        TLabel *Label5;
        TEdit *Edit5;
        TStringGrid *StringGrid1;
        TLabel *Label6;
        TEdit *Edit6;
        TButton *Button1;
        TToolButton *ToolButton2;
        TToolButton *ToolButton3;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TToolButton *ToolButton6;
        TToolButton *ToolButton7;
        TToolButton *ToolButton8;
        TToolButton *ToolButton9;
        TEdit *Edit7;
        TLabel *Label7;
        TEdit *Edit8;
        TMenuItem *YeniProje1;
        TMenuItem *Birey1;
        TMenuItem *MetrajCetveli1;
        TMenuItem *izimEditr1;
        TMenuItem *Betonarme1;
        TMenuItem *Karayolu1;
        TMenuItem *Hidroloji1;
        TMenuItem *N1;
        TMenuItem *Kaydet2;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *OfficeExpress1;
        TMenuItem *Xlime1;
        TMenuItem *Paint1;
        TMenuItem *N4;
        TMenuItem *Programdank1;
        TMenuItem *N5;
        TMenuItem *Kapat1;
        TMenuItem *Grnm1;
        TMenuItem *Klt1;
        TMenuItem *Ynetim1;
        TMenuItem *Hesapla1;
        TMenuItem *Veriler1;
        TMenuItem *KaytlMetrajBilgileri1;
        TMenuItem *N6;
        TMenuItem *PersonelTantmKart1;
        TMenuItem *KaynakKart1;
        TMenuItem *KaytlMteri1;
        TMenuItem *N7;
        TMenuItem *KaytlBetonarmeBilgileri1;
        TMenuItem *Aralar1;
        TMenuItem *ConvertB1;
        TMenuItem *ListB1;
        TMenuItem *Yardm1;
        TMenuItem *KullanmKlavuzu1;
        TMenuItem *TG1;
        TMenuItem *ProjeBHakknda1;
        TMenuItem *SrmBilgileri1;
        TMenuItem *Pencere1;
        TMenuItem *Yanyana1;
        TMenuItem *Altalta1;
        TMenuItem *Grupla1;
        TPrinterSetupDialog *PrinterSetupDialog1;
        TMenuItem *N8;
        TMenuItem *YazcAyarlar1;
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall LogoBelirle1Click(TObject *Sender);
        void __fastcall Kaydet1Click(TObject *Sender);
        void __fastcall FarklKaydet1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ToolButton3Click(TObject *Sender);
        void __fastcall ToolButton5Click(TObject *Sender);
        void __fastcall ToolButton6Click(TObject *Sender);
        void __fastcall ToolButton8Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Birey1Click(TObject *Sender);
        void __fastcall MetrajCetveli1Click(TObject *Sender);
        void __fastcall izimEditr1Click(TObject *Sender);
        void __fastcall Betonarme1Click(TObject *Sender);
        void __fastcall Karayolu1Click(TObject *Sender);
        void __fastcall Hidroloji1Click(TObject *Sender);
        void __fastcall Kaydet2Click(TObject *Sender);
        void __fastcall Kapat1Click(TObject *Sender);
        void __fastcall OfficeExpress1Click(TObject *Sender);
        void __fastcall Xlime1Click(TObject *Sender);
        void __fastcall Paint1Click(TObject *Sender);
        void __fastcall Programdank1Click(TObject *Sender);
        void __fastcall Klt1Click(TObject *Sender);
        void __fastcall Hesapla1Click(TObject *Sender);
        void __fastcall PersonelTantmKart1Click(TObject *Sender);
        void __fastcall KaynakKart1Click(TObject *Sender);
        void __fastcall KaytlMteri1Click(TObject *Sender);
        void __fastcall KaytlMetrajBilgileri1Click(TObject *Sender);
        void __fastcall KaytlBetonarmeBilgileri1Click(TObject *Sender);
        void __fastcall ConvertB1Click(TObject *Sender);
        void __fastcall ListB1Click(TObject *Sender);
        void __fastcall KullanmKlavuzu1Click(TObject *Sender);
        void __fastcall TG1Click(TObject *Sender);
        void __fastcall ProjeBHakknda1Click(TObject *Sender);
        void __fastcall SrmBilgileri1Click(TObject *Sender);
        void __fastcall Yanyana1Click(TObject *Sender);
        void __fastcall Altalta1Click(TObject *Sender);
        void __fastcall Grupla1Click(TObject *Sender);
        void __fastcall YazcAyarlar1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall THakkedis(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THakkedis *Hakkedis;
//---------------------------------------------------------------------------
#endif
