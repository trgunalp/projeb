//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit2.cpp", Birey);
USEFORM("Unit3.cpp", Hakkedis);
USEFORM("Unit4.cpp", Cizim);
USEFORM("Unit5.cpp", Betonarme);
USEFORM("Unit6.cpp", Karayolu);
USEFORM("Unit7.cpp", Hidroloji);
USEFORM("Unit8.cpp", Office);
USEFORM("Unit9.cpp", Xlime);
USEFORM("Unit10.cpp", Form10);
USEFORM("Unit11.cpp", Form11);
USEFORM("Unit12.cpp", Elips);
USEFORM("Unit13.cpp", Kare);
USEFORM("Unit14.cpp", Pasta);
USEFORM("Unit15.cpp", Cizgi);
USEFORM("Unit16.cpp", NewBMPForm);
USEFORM("Unit17.cpp", Personel);
USEFORM("Unit18.cpp", Pkayit);
USEFORM("Unit19.cpp", Kaynak);
USEFORM("Unit20.cpp", Kkayit);
USEFORM("Unit21.cpp", Satis);
USEFORM("Unit22.cpp", Skayit);
USEFORM("Unit23.cpp", Loading);
USEFORM("Unit24.cpp", Metrajoku);
USEFORM("Unit25.cpp", Wizard);
USEFORM("Unit27.cpp", Karayar);
USEFORM("Unit28.cpp", Hidayar);
USEFORM("Unit29.cpp", Betonoku);
USEFORM("Unit30.cpp", iletisim);
USEFORM("Unit31.cpp", Calender);
USEFORM("Unit32.cpp", Bilgi);
USEFORM("Unit33.cpp", Product);
USEFORM("Unit34.cpp", TGinfo);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "GÜNALP Projeb";
                 Application->CreateForm(__classid(TLoading), &Loading);
                 Application->CreateForm(__classid(TNewBMPForm), &NewBMPForm);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
