#include "losowa.h"


void losowa::losuj()
{
    std::string a,b,c,d,e,f,g,h,i,j;
    std::fstream pliczek;
    pliczek.open("losowe.txt");
    if (pliczek.is_open())
    {
        std::getline(pliczek,a);
        std::getline(pliczek,b);
        std::getline(pliczek,c);
        std::getline(pliczek,d);
        std::getline(pliczek,e);
        std::getline(pliczek,f);
        std::getline(pliczek,g);
        std::getline(pliczek,h);
        std::getline(pliczek,i);
        std::getline(pliczek,j);
    }else std::cout<<"BLAD OTWARCIA PLIKU"<<std::endl;
    pliczek.close();
    int losowanko= std::rand()%10;
    if (losowanko==0) std::cout<<a<<std::endl;
    if (losowanko==1) std::cout<<b<<std::endl;
    if (losowanko==2) std::cout<<c<<std::endl;
    if (losowanko==3) std::cout<<d<<std::endl;
    if (losowanko==4) std::cout<<e<<std::endl;
    if (losowanko==5) std::cout<<f<<std::endl;
    if (losowanko==6) std::cout<<g<<std::endl;
    if (losowanko==7) std::cout<<h<<std::endl;
    if (losowanko==8) std::cout<<i<<std::endl;
    if (losowanko==9) std::cout<<j<<std::endl;
}

void losowa::rzucKoscmi()
{
    int rzut1=std::rand()%6+1;
    int rzut2=std::rand()%6+1;
    std::cout<<"Masz dwa rzuty, im wiecej oczek tym wiecej szczescia!"<<std::endl;
    std::cout<<"Uwaga, pierwszy rzut!"<<std::endl<<"Twoj wynik to: "<< rzut1<<std::endl;
    std::cout<<"Uwaga, drugi rzut!"<<std::endl<<"Twoj wynik to: "<< rzut2<<std::endl;
    if ((rzut1+rzut2)>10) std::cout<<"Masz dzis wielkie szczescie, wykorzystaj to!"<<std::endl;
    if ((rzut1+rzut2)>7 && (rzut1+rzut2)<10) std::cout<<"Nawet masz dzisiaj farta, sproboj cos z tym zrobic."<<std::endl;
    if ((rzut1+rzut2)>4 && (rzut1+rzut2)<7) std::cout<<"Masz dzisiaj lekkiego pecha, lepiej na siebie uwazaj."<<std::endl;
    if ((rzut1+rzut2)<4) std::cout<<"Masz dzisiaj ogromnego pecha, lepiej nie wychodz z domu!"<<std::endl;
}
