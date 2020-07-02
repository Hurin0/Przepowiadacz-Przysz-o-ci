#pragma once
#include "libs.h"
class dane
{
   protected:
       std::string imie;
       std::string nazwisko;
       char plec;
       int dzien;
       int miesiac;
       int rok;
   public:
        dane();
        dane(std::string imie2,std::string nazwisko2,char plec2,int dzien2,int miesiac2,int rok2 );
        void setImie(const std::string& imie_);
        void setNazwisko(const std::string& nazwisko_);
        void setDzien(const int dzien_);
        void setMiesiac(const int miesiac_);
        void setRok(const int rok_);
        void setPlec(const char plec_);
        std::string getImie();
        std::string getNazwisko();
        int getDzien();
        int getMiesiac();
        int getRok();
        char getPlec();
        friend std::ostream& operator<< (std::ostream& wyjscie, const dane& foo);
};
