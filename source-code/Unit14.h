//---------------------------------------------------------------------------

#ifndef Unit14H
#define Unit14H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TPasta : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TEdit *Edit1;
        TLabel *Label3;
        TEdit *Edit2;
        TLabel *Label4;
        TEdit *Edit3;
        TLabel *Label5;
        TEdit *Edit4;
        TLabel *Label6;
        TEdit *Edit5;
        TLabel *Label7;
        TEdit *Edit6;
        TLabel *Label8;
        TLabel *Label9;
        TEdit *Edit7;
        TLabel *Label10;
        TEdit *Edit8;
        TButton *Button1;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPasta(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPasta *Pasta;
//---------------------------------------------------------------------------
#endif
