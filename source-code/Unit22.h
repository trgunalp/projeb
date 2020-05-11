//---------------------------------------------------------------------------

#ifndef Unit22H
#define Unit22H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TSkayit : public TForm
{
__published:	// IDE-managed Components
        TCoolBar *CoolBar1;
        TToolBar *ToolBar1;
        TImageList *ImageList1;
        TToolButton *ToolButton1;
        TToolButton *ToolButton2;
        TToolButton *ToolButton3;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TToolButton *ToolButton6;
        TToolButton *ToolButton7;
        TToolButton *ToolButton8;
        TToolButton *ToolButton9;
        TImage *Image1;
        TLabel *Label1;
        TLabel *Label2;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TMemo *Memo1;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TEdit *Edit8;
        TLabel *Label9;
        TLabel *Label10;
        TEdit *Edit9;
        TLabel *Label11;
        TEdit *Edit10;
        TLabel *Label12;
        TEdit *Edit11;
        TLabel *Label13;
        TLabel *Label14;
        TEdit *Edit12;
        TEdit *Edit13;
        TMemo *Memo2;
        TLabel *Label15;
        TLabel *Label16;
        TMemo *Memo3;
        TEdit *Edit14;
        TEdit *Edit15;
        TEdit *Edit16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TEdit *Edit17;
        TPrintDialog *PrintDialog1;
        TOpenPictureDialog *OpenPictureDialog1;
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ToolButton2Click(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall ToolButton4Click(TObject *Sender);
        void __fastcall ToolButton6Click(TObject *Sender);
        void __fastcall ToolButton7Click(TObject *Sender);
        void __fastcall ToolButton8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSkayit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSkayit *Skayit;
//---------------------------------------------------------------------------
#endif
