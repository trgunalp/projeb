//---------------------------------------------------------------------------

#ifndef Unit20H
#define Unit20H
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
class TKkayit : public TForm
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
        TEdit *Edit1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TEdit *Edit2;
        TLabel *Label4;
        TEdit *Edit3;
        TLabel *Label5;
        TEdit *Edit4;
        TLabel *Label6;
        TEdit *Edit5;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TEdit *Edit6;
        TLabel *Label10;
        TMemo *Memo3;
        TEdit *Edit7;
        TLabel *Label11;
        TEdit *Edit8;
        TLabel *Label12;
        TEdit *Edit9;
        TLabel *Label13;
        TEdit *Edit10;
        TLabel *Label14;
        TLabel *Label15;
        TMemo *Memo4;
        TEdit *Edit11;
        TLabel *Label16;
        TEdit *Edit12;
        TLabel *Label17;
        TEdit *Edit13;
        TMemo *Memo1;
        TMemo *Memo2;
        TOpenPictureDialog *OpenPictureDialog1;
        TPrintDialog *PrintDialog1;
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall ToolButton2Click(TObject *Sender);
        void __fastcall ToolButton4Click(TObject *Sender);
        void __fastcall ToolButton6Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ToolButton7Click(TObject *Sender);
        void __fastcall ToolButton8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TKkayit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TKkayit *Kkayit;
//---------------------------------------------------------------------------
#endif
