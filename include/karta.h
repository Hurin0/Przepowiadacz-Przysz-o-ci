#pragma once
#include "Duze.h"
#include "Male.h"
class karta
{
    public:
        void wczytajDuze();
        void wyswietlDuze();
        void wczytajMale();
        void wyswietlMale();
        void losujDuza();
        void losujMala();
        void losujMilosc();
        void losujFinanse();
    protected:

    private:
        std::vector <Duze> talia1;
        std::vector <male> talia2;
};

