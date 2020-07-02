#include "karta.h"


void karta::wczytajDuze()
{
    std::string D1, D3, D4, D5, D6, D7, przerwa, wtf;
    int D2;
    std::ifstream plik2;
    plik2.open("DuzeArkana.txt");
    if (plik2.is_open())
    {
        while (!plik2.eof())
        {
            std::getline(plik2, D1);
            plik2>>D2;
            std::getline(plik2, wtf);
            std::getline(plik2, D3);
            std::getline (plik2, D4);
            std::getline(plik2, D5);
            std::getline(plik2, D6);
            std::getline(plik2, D7);
            std::getline (plik2, przerwa);
            talia1.push_back(Duze(D1, D2, D3, D4, D5, D6, D7));
        }
    } else std::cout<<"BLAD OTWARCIA PLIKU"<<std::endl;
    plik2.close();
}

void karta::wyswietlDuze()
{
    for (int i=0; i<talia1.size(); i++)
    {
        std::cout<<talia1[i]<<std::endl;
    }
}

void karta::wczytajMale()
{
    std::string M1, M2, M3, stop;
    std::ifstream maleArk;
    maleArk.open("maleArkana.txt");
    if (maleArk.is_open())
    {
        while (!maleArk.eof())
        {
            std::getline(maleArk, M1);
            std::getline(maleArk, M2);
            std::getline(maleArk, M3);
            std::getline(maleArk, stop);
            talia2.push_back(male(M1, M2, M3));
        }
    } else std::cout<<"BLAD OTWARCIA PLIKU"<<std::endl;
    maleArk.close();
}

void karta::wyswietlMale()
{
    for (int i=0; i<talia2.size(); i++)
    {
        std::cout<<talia2[i]<<std::endl;
    }
}

void karta::losujDuza()
{
    srand (time (NULL));
    int liczba =( std::rand ()% 22);
    std::cout<<talia1[liczba]<<std::endl;
}

void karta::losujMala()
{
    int los = (std::rand()%56);
    std::cout<<talia2[los]<<std::endl;
}

void karta::losujMilosc()
{
    int losowa = ( std::rand()% 22 );
    std::cout<<talia1[losowa].getMilosc()<<std::endl;
}

void karta::losujFinanse()
{
    int losowa2 = ( std::rand()% 22 );
    std::cout<<talia1[losowa2].getFinanse()<<std::endl;
}
