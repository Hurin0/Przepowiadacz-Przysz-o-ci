#pragma once
#include "libs.h"

class male
{
   protected:
       std::string nazwa;
       std::string numer;
       std::string znaczenie;
   public:
        male();
        male(std::string nazwa1, std::string numer1, std::string znaczenie1);
        void setNazwa(const std::string& nazwa_);
        void setNumer(const std::string& numer_);
        void setZnaczenie (const std::string& znaczenie_);
        std::string getNazwa() const;
        std::string getNumer() const;
        std::string getZnaczenie() const;
        friend std::ostream& operator<< (std::ostream& wyjscie, const male& s);
};
