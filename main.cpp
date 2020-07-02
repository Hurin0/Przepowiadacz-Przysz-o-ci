#include "dane.h"
#include "horoskop.h"
#include "Duze.h"
#include "karta.h"
#include "Male.h"
#include "losowa.h"
dane d;
horoskop h;
Duze big;
karta k;
male m;
losowa l;
int main()
{

    std::cout<<"WITAJ. ZARAZ POZNASZ SWOJA PRZYSZLOSC"<<std::endl;
    std::cout<<"NAJPIERW POWIEDZ MI COS O SOBIE"<<std::endl;
    h.nowyUzytkownik();
    do
   {
       std::cout<<"MENU: "<<std::endl;
      std::cout<<"1. Chce poznac swoj horoskop: "<<std::endl;
      std::cout<<"2. Wylosuj mi jakas wrozbe! "<<std::endl;
      std::cout<<"3. Chce wiedziec co bedzie z moim zyciem milosnym: "<<std::endl;
      std::cout<<"4. Czy bede bogaty? : "<<std::endl;
      std::cout<<"5. Rozloz mi tarota: "<<std::endl;
      std::cout<<"6. Chce sprobowac swojego szczescia w rzucie koscmi: "<<std::endl;
      std::cout<<"7. Admin: "<<std::endl;
      std::cout<<"0. Wyjdz z programu: "<<std::endl;

     int x;
    std::cin>>x;
    std::cin.get();
        switch(x)
        {
            case 1:
                {
                    h.wyswietlWrozby();
                    break;
                }
            case 2:
                {
                    l.losuj();
                    break;
                }
            case 3:
                {
                    k.wczytajDuze();
                    k.wczytajMale();
                    k.losujMilosc();
                    break;
                }
            case 4:
                {
                    k.wczytajDuze();
                    k.wczytajMale();
                    k.losujFinanse();
                    break;
                }
            case 5:
                {
                    k.wczytajDuze();
                    k.wczytajMale();
                    std::cout<<"Pierwsza karta- Arkana Wielkie:"<<std::endl;
                    k.losujDuza();
                    std::cout<<"Druga karta- Arkana Mniejsze:"<<std::endl;
                    k.losujMala();
                     std::cout<<"Trzecia karta- Arkana Mniejsze:"<<std::endl;
                    k.losujMala();
                     std::cout<<"Czwarta karta- Arkana Mniejsze:"<<std::endl;
                    k.losujMala();
                    break;
                }
            case 6:
                {
                    l.rzucKoscmi();
                    break;
                }
            case 7:
                {
                    h.admin();
                    break;
                }
            case 0:
                {
                    return 0;
                }
            default:
			std::cout << "Nie ma takiej opcji" << std::endl;

        }
    }
    while (true);
    return 0;
}

