//---------------------------------------------------------------------------

#ifndef Unit16H
#define Unit16H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TNewBMPForm : public TForm
{
__published:	// IDE-managed Components
        TEdit *WidthEdit;
        TEdit *HeightEdit;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TButton *Button1;
        TButton *Button2;
        TLabel *Label4;
        TLabel *Label5;
private:	// User declarations
public:		// User declarations
        __fastcall TNewBMPForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNewBMPForm *NewBMPForm;
//---------------------------------------------------------------------------
#endif
