#include "male.h"

male::male()
{

}

male::male(std::string nazwa1, std::string numer1, std::string znaczenie1)
{
    setNazwa(nazwa1);
    setNumer(numer1);
    setZnaczenie(znaczenie1);
}

void male::setNazwa(const std::string& nazwa_)
{
    this->nazwa=nazwa_;
}

void male::setNumer(const std::string& numer_)
{
    this->numer=numer_;
}

void male::setZnaczenie(const std::string& znaczenie_)
{
    this->znaczenie=znaczenie_;
}

std::string male::getNazwa() const
{
    return nazwa;
}

std::string male::getNumer() const
{
    return numer;
}

std::string male::getZnaczenie() const
{
    return znaczenie;
}

std::ostream& operator<< (std::ostream& wyjscie, const male& s)
{
    return wyjscie<< "Twoja Mala karta Arkanu to: " << s.numer <<" " << s.nazwa<< "\n Jej znaczenie to:   "<<s.znaczenie<<std::endl;
}
