#include "Duze.h"

Duze::Duze()
{

}

Duze::Duze(std::string nazwa1, int numer1, std::string znak1, std::string atrybuty1, std::string znaczenie1, std::string milosc1, std::string finanse1)
{
    setNazwa(nazwa1);
    setNumer(numer1);
    setZnakAstr(znak1);
    setAtrybuty(atrybuty1);
    setZnaczenie(znaczenie1);
    setMilosc(milosc1);
    setFinanse(finanse1);
}

void Duze::setNumer(const int numer_)
{
    this->numerArkanu=numer_;
}


void Duze::setZnakAstr(const std::string znak_)
{
    this->znakAstrologiczny=znak_;
}

void Duze::setAtrybuty (const std::string& atrybuty_)
{
    this->atrybuty=atrybuty_;
}

int Duze::getNumer() const
{
    return numerArkanu;
}

std::string Duze::getZnakAstr() const
{
    return znakAstrologiczny;
}

std::string Duze::getAtrybuty() const
{
    return atrybuty;
}

void Duze::setMilosc(const std::string& milosc_)
{
    this->milosc=milosc_;
}

std::string Duze::getMilosc() const
{
    return milosc;
}

void Duze::setFinanse(const std::string& finanse_)
{
    this->finanse=finanse_;
}

std::string Duze::getFinanse() const
{
    return finanse;
}

std::ostream& operator<< (std::ostream& wyjscie, const Duze& j)
{
    return wyjscie<< "\n Twoja Wielka karta Arkana to:" << j.nazwa << " , numer: "<< j.numerArkanu << "\n Znak astrologiczny: "
    << j.znakAstrologiczny<<"\n Atrybuty Twojej karty: "<< j.atrybuty<<"\n Znaczenie Twojej karty: "<< j.znaczenie <<std::endl;
}

