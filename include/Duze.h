#pragma once
#include "libs.h"
#include "Male.h"
class Duze: public male
{
    public:
        Duze();
        Duze(std::string nazwa1, int numer1, std::string znak1, std::string atrybuty1, std::string znaczenie1, std::string milosc1, std::string finanse1);
        void setNumer(const int numer_);
        void setZnakAstr(const std::string znak_);
        int getNumer() const;
        std::string getZnakAstr() const;
        std::string getAtrybuty() const;
        void setAtrybuty (const std::string& atrybuty_);
        std::string getMilosc() const;
        void setMilosc(const std::string& milosc_);
        std::string getFinanse() const;
        void setFinanse(const std::string& finanse_);
        friend std::ostream& operator<< (std::ostream& wyjscie, const Duze& j);
     protected:
        int numerArkanu;
        std::string znakAstrologiczny;
        std::string atrybuty;
        std::string milosc;
        std::string finanse;
};


