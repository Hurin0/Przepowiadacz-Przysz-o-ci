#include "dane.h"

dane::dane()
{
    imie="brak";
    nazwisko="brak";
    dzien=99;
    miesiac=99;
    rok=99;
    plec='b';
}
dane::dane(std::string imie2,std::string nazwisko2,char plec2,int dzien2,int miesiac2,int rok2 )
{
    setImie(imie2);
    setNazwisko(nazwisko2);
    setPlec(plec2);
    setDzien(dzien2);
    setMiesiac(miesiac2);
    setRok(rok2);
}
void dane::setImie(const std::string& imie_)
{
    this->imie=imie_;
}
void dane::setNazwisko(const std::string& nazwisko_)
{
    this->nazwisko=nazwisko_;
}
void dane::setDzien(const int dzien_)
{
    this->dzien=dzien_;
}
void dane::setMiesiac(const int miesiac_)
{
    this->miesiac=miesiac_;
}
void dane::setRok(const int rok_)
{
    this->rok=rok_;
}
void dane::setPlec(const char plec_)
{
    this->plec=plec_;
}
std::string dane::getImie()
{
    return imie;
}
std::string dane::getNazwisko()
{
    return nazwisko;
}
int dane::getDzien()
{
    return dzien;
}
int dane::getMiesiac()
{
    return miesiac;
}
int dane::getRok()
{
    return rok;
}
char dane::getPlec()
{
    return plec;
}

std::ostream& operator<< (std::ostream& wyjscie, const dane& foo)
{
    return wyjscie << foo.imie<< " "<< foo.nazwisko<< " "<< foo.plec<< " " <<foo.dzien<<" " <<foo.miesiac<<" "<<foo.rok<<std::endl;
}
