//---------------------------------------------------------------------------

#ifndef Unit32H
#define Unit32H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TBilgi : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TProgressBar *ProgressBar1;
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TBilgi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBilgi *Bilgi;
//---------------------------------------------------------------------------
#endif
