//---------------------------------------------------------------------------

#ifndef Unit18H
#define Unit18H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TPkayit : public TForm
{
__published:	// IDE-managed Components
        TImageList *ImageList1;
        TCoolBar *CoolBar1;
        TToolBar *ToolBar1;
        TToolButton *ToolButton1;
        TEdit *Edit1;
        TLabel *Label1;
        TEdit *Edit2;
        TEdit *Edit3;
        TLabel *Label2;
        TLabel *Label3;
        TEdit *Edit4;
        TLabel *Label4;
        TEdit *Edit5;
        TLabel *Label5;
        TEdit *Edit6;
        TEdit *Edit7;
        TLabel *Label6;
        TLabel *Label7;
        TEdit *Edit8;
        TLabel *Label8;
        TEdit *Edit9;
        TLabel *Label9;
        TEdit *Edit10;
        TLabel *Label10;
        TEdit *Edit11;
        TLabel *Label11;
        TEdit *Edit12;
        TLabel *Label12;
        TMemo *Memo1;
        TLabel *Label13;
        TEdit *Edit13;
        TPrintDialog *PrintDialog1;
        TImage *Image1;
        TToolButton *ToolButton2;
        TToolButton *ToolButton3;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TToolButton *ToolButton6;
        TToolButton *ToolButton7;
        TToolButton *ToolButton8;
        TToolButton *ToolButton9;
        TOpenPictureDialog *OpenPictureDialog1;
        TLabel *Label14;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall ToolButton4Click(TObject *Sender);
        void __fastcall ToolButton6Click(TObject *Sender);
        void __fastcall ToolButton7Click(TObject *Sender);
        void __fastcall ToolButton8Click(TObject *Sender);
        void __fastcall ToolButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPkayit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPkayit *Pkayit;
//---------------------------------------------------------------------------
#endif
