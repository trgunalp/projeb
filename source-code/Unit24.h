//---------------------------------------------------------------------------

#ifndef Unit24H
#define Unit24H
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
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TMetrajoku : public TForm
{
__published:	// IDE-managed Components
        TImageList *ImageList1;
        TCoolBar *CoolBar1;
        TToolBar *ToolBar1;
        TToolButton *ToolButton1;
        TToolButton *ToolButton2;
        TToolButton *ToolButton3;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TToolButton *ToolButton6;
        TToolButton *ToolButton7;
        TToolButton *ToolButton8;
        TToolButton *ToolButton9;
        TEdit *Edit1;
        TImage *Image1;
        TLabel *Label1;
        TEdit *Edit2;
        TLabel *Label2;
        TEdit *Edit3;
        TLabel *Label3;
        TEdit *Edit4;
        TLabel *Label4;
        TEdit *Edit5;
        TLabel *Label5;
        TEdit *Edit6;
        TLabel *Label6;
        TOpenPictureDialog *OpenPictureDialog1;
        TPrintDialog *PrintDialog1;
        TStringGrid *StringGrid1;
        TLabel *Label7;
        TEdit *Edit7;
        TEdit *Edit8;
        TLabel *Label8;
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall ToolButton2Click(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ToolButton4Click(TObject *Sender);
        void __fastcall ToolButton6Click(TObject *Sender);
        void __fastcall ToolButton7Click(TObject *Sender);
        void __fastcall ToolButton8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMetrajoku(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMetrajoku *Metrajoku;
//---------------------------------------------------------------------------
#endif
