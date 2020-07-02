#pragma once
#include "dane.h"
class horoskop
{
    private:
        std::vector<dane> uzytkownik;
    public:
        horoskop();
        void nowyUzytkownik();
        void Baran();
        void Byk();
        void Bliznieta();
        void Rak();
        void Lew();
        void Panna();
        void Waga();
        void Skorpion();
        void Strzelec();
        void Koziorozec();
        void Wodnik();
        void Ryby();
        void wyswietlWrozby();
        void wrozba();
        void admin();
};
