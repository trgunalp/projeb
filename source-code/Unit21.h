//---------------------------------------------------------------------------

#ifndef Unit21H
#define Unit21H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
//---------------------------------------------------------------------------
class TSatis : public TForm
{
__published:	// IDE-managed Components
        TCoolBar *CoolBar1;
        TToolBar *ToolBar1;
        TImageList *ImageList1;
        TToolButton *ToolButton1;
        TToolButton *ToolButton2;
        TEdit *Edit1;
        TLabel *Label1;
        TEdit *Edit2;
        TLabel *Label2;
        TEdit *Edit3;
        TLabel *Label3;
        TEdit *Edit4;
        TLabel *Label4;
        TMemo *Memo1;
        TLabel *Label5;
        TEdit *Edit5;
        TLabel *Label6;
        TEdit *Edit6;
        TLabel *Label7;
        TEdit *Edit7;
        TLabel *Label8;
        TEdit *Edit8;
        TLabel *Label9;
        TEdit *Edit9;
        TLabel *Label10;
        TLabel *Label11;
        TEdit *Edit10;
        TLabel *Label12;
        TEdit *Edit11;
        TLabel *Label13;
        TEdit *Edit12;
        TLabel *Label14;
        TLabel *Label15;
        TMemo *Memo2;
        TLabel *Label16;
        TEdit *Edit13;
        TMemo *Memo3;
        TLabel *Label17;
        TLabel *Label18;
        TEdit *Edit14;
        TEdit *Edit15;
        TLabel *Label19;
        TEdit *Edit16;
        TLabel *Label20;
        TEdit *Edit17;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ToolButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSatis(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSatis *Satis;
//---------------------------------------------------------------------------
#endif
