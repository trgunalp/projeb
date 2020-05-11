//---------------------------------------------------------------------------

#ifndef Unit17H
#define Unit17H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TPersonel : public TForm
{
__published:	// IDE-managed Components
        TCoolBar *CoolBar1;
        TToolBar *ToolBar1;
        TImageList *ImageList1;
        TToolButton *ToolButton1;
        TToolButton *ToolButton2;
        TEdit *Edit1;
        TEdit *Edit2;
        TLabel *Label1;
        TLabel *Label2;
        TEdit *Edit3;
        TLabel *Label3;
        TEdit *Edit4;
        TLabel *Label4;
        TEdit *Edit5;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *Edit6;
        TEdit *Edit7;
        TLabel *Label7;
        TEdit *Edit8;
        TLabel *Label8;
        TEdit *Edit9;
        TLabel *Label9;
        TEdit *Edit10;
        TLabel *Label10;
        TEdit *Edit11;
        TLabel *Label11;
        TMemo *Memo1;
        TLabel *Label12;
        TEdit *Edit12;
        TLabel *Label13;
        TPrintDialog *PrintDialog1;
        TEdit *Edit13;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ToolButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPersonel(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPersonel *Personel;
//---------------------------------------------------------------------------
#endif
