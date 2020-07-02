#include "horoskop.h"


std::string znakZodiaku[]={"Baran", "Byk", "Bliznieta", "Rak", "Lew", "Panna", "Waga", "Skorpion", "Strzelec", "Koziorozec", "Wodnik", "Ryby"};
int wiek;
char sex;
int znak;
int miesiac4;
int dzien4;
int rok4;
horoskop::horoskop()
{
    std::string imie1;
       std::string nazwisko1;
       char plec1;
       std::string wtf;
       int dzien1;
       int miesiac1;
       int rok1;
       std::string help;
       std::ifstream plik;
       plik.open("users.txt", std::ios::in | std::ios::out);

       if (plik.is_open())
       {
           std::cout<<"Witaj"<<std::endl;
           while (!plik.eof())
           {

                std::getline(plik, imie1);
                std::getline(plik, nazwisko1);
                plik>>plec1;
                plik>>dzien1;
                plik>>miesiac1;
                plik>>rok1;
                std::getline(plik, wtf);
                std::getline(plik,help);
                uzytkownik.push_back(dane(imie1, nazwisko1, plec1, dzien1, miesiac1, rok1));
           }
       }
        else
        {
            std::cout<<"blad otwarcia pliku"<<std::endl;
        }
       plik.close();
}

void horoskop::nowyUzytkownik()
{
    std::string imie3;
    std::string nazwisko3;
    char plec3;
    int dzien3;
    int miesiac3;
    int rok3;
    std::string help;
    std::ofstream plik;
    plik.open("users.txt",std::ios::in | std::ios::out | std::ios_base::app);

    std::cout<<"PODAJ SWOJE IMIE"<<std::endl;
    std::getline(std::cin, imie3);
    if (find_if(imie3.begin(), imie3.end(), isdigit) != imie3.end())
    {
        do
        {
            std::cout << "Wprowadz wylacznie litery! \n IMIE:";
            std::getline(std::cin, imie3);
        } while (find_if(imie3.begin(), imie3.end(), isdigit) != imie3.end());
    }
    std::cout<<"PODAJ SWOJE NAZWISKO"<<std::endl;
    std::getline(std::cin, nazwisko3);
    if (find_if(nazwisko3.begin(), nazwisko3.end(), isdigit) != nazwisko3.end())
    {
        do
        {
            std::cout << "Wprowadz wylacznie litery! \n NAZWISKO:";
            std::getline(std::cin, nazwisko3);
        } while (find_if(nazwisko3.begin(), nazwisko3.end(), isdigit) != nazwisko3.end());
    }
    std::cout<<"PODAJ PLEC: MEZCZYZNA (m) LUB KOBIETA (k)"<<std::endl;
    std::cin.get(plec3);
    if ((plec3==109) or (plec3==77) or (plec3==107) or (plec3==75)) std::cout<<" ";
    else    do
        {
            std::cout<<"Wybierz plec poprawnie! \nPLEC:";
            std::cin.get(plec3);

        } while ((plec3==109) or (plec3==77) or (plec3==107) or (plec3==75));
    std::cin.get();
    std::cout<<"PODAJ SWOJA DATE URODZENIA- DZIEN:"<<std::endl;
    std::cin>>dzien3;
    std::cin.get();
    if (dzien3<0 || dzien3>31)
    {
        do
        {
            std::cout<<"Wprowadz poprawny dzien! \nDZIEN:";
            std::cin>>dzien3;
        } while (dzien3<0 || dzien3>31);
    }
    std::cout<<"PODAJ SWOJA DATE URODZENIA- MIESIAC:"<<std::endl;
    std::cin>>miesiac3;
    std::cin.get();
    if (miesiac3<0 || miesiac3>12)
    {
        do
        {
            std::cout<<"Wprowadz poprawny miesiac! \nMIESIAC:";
            std::cin>>miesiac3;
        } while (miesiac3<0 || miesiac3>12);
    }
    std::cout<<"PODAJ SWOJA DATE URODZENIA- ROK:"<<std::endl;
    std::cin>>rok3;
    std::cin.get();
    if (rok3<1920 || rok3>2018)
    {
        do
        {
            std::cout<<"Wprowadz poprawny rok! \nROK:";
            std::cin>>rok3;
        } while (rok3<1920 || rok3>2018);
    }
     plik<<std::endl<<imie3<<std::endl;
    plik<<nazwisko3<<std::endl;
    plik<<plec3<<std::endl;
    plik<<dzien3<<std::endl;
    plik<<miesiac3<<std::endl;
    plik<<rok3<<std::endl;
    help="--------------";
    plik<<help;
    uzytkownik.push_back(dane(imie3, nazwisko3, plec3, dzien3, miesiac3, rok3));
    plik.close();
    wiek=2019-rok3;
    sex=plec3;

   rok4=rok3;
   miesiac4=miesiac3;
   dzien4=dzien3;
}

void horoskop::admin()
{
    std::string haslo;
    std::string prawidlowe="admin";
    std::cout<<"Podaj haslo by przejsc dalej: "<<std::endl;
    std::cin>>haslo;
    if (haslo==prawidlowe)
    {
        for (int i=0; i<uzytkownik.size(); ++i)
        {
            std::cout<<uzytkownik[i]<<std::endl;
        }
    } else std::cout<<"BLEDNE HASLO"<<std::endl;
}
void horoskop::Baran()
{
    std::string wrozby0[]= {"Jowisz usunie z twojej drogi wszelkie przeszkody. Wreszcie znajdziesz wiecej czasu dla siebie.",
    "Saturn sprawi, ze zaczniecie sie z partnerem lepiej rozumiec. Singielki nie beda narzekac na brak zainteresowania, ale dopiero wspolny wyjazd pokaze, kto tak naprawde jest wazny.",
    "Pierwsza polowa roku sprzyja odpoczynkowi i uporzadkowaniu rodzinnych spraw. W kwietniu i maju Wenus w koniunkcji do twojego znaku pomoze ci spelnic najskrytsze marzenia.",
    "Nie poswiecaj wszystkiego dla pracy. O pieniedze i tak nie musisz sie martwic, wiec po prostu rob swoje i dbaj o dobre kontakty, bo pojawi sie mozliwosc wspolpracy z wazna osoba.",
    "Kontroluj ciœnienie. Pomysl o wyjezdzie do SPA lub sanatorium. Nawet krótki odpoczynek bêdzie mia³ zbawienny wplyw na twoje nerwy.",
    "WAZNE DATY: 20.04 – 14.05, 27.06 – 20.08",
    "Twoi najblizsi sa zródlem Twojego najwiekszego natchnienia i wsparcia.",
    "Zimna pogoda sprawi, ze staniesz sie udomowiony i spokojny.",
    "Chetnie odsuniesz od siebie ryzykowne sprawy, nabierzesz dystansu do towarzyskich sporow i zawodowych wyzwan.",
    "Uwolnij sie od trudnych obowiazków i zrob cos dla siebie. Hobby i dobra ksiazka dadza ci duzo nowych inspiracji."};
    if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby0[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby0[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby0[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby0[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby0[7]<<std::endl;
        std::cout<<wrozby0[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby0[2]<<std::endl;
        std::cout<<wrozby0[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby0[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby0[5]<<std::endl;
    }
}

void horoskop::Byk()
{
    std::string wrozby1[]= {"Uran w koniunkcji do twojego znaku pomoze pozbyc sie ograniczen, a wszelkie zmiany tylko wyjda ci na dobre.",
    "Jezli jestes w zwiazku, zadbaj o wspolny czas nie tylko od swieta, ale i na co dzien. Singielki maja szanse na prawdziwe uczucie.",
    "Zamiast skupiac sie na nieistotnych drobiazgach, czesciej doceniaj swoich bliskich. Wyznacz im nowe cele, np. odswiezenie mieszkania. ",
    " Uran otworzy nowy rozdzial w twojej karierze. Nauczysz sie stawiac na swoim, a niezalesnosc tylko wyjdzie ci na dobre.",
    "Pora pomyslec o swojej kondycji i spróbowac nowych dziedzin sportu. Tylko w marcu postepuj ostroznie, bo Mars radzi unikac ryzyka i bardziej dbac o zdrowie.",
    "WAZNE DATY: 15.05 – 8.05, 14.09 – 7.10",
    "Przestan sie ociagac i sumiennie przyloz sie do swoich obowiazkow.",
    "Latwo uporasz sie z problemami, ale przemysl swoje dotychczasowe postepowanie",
    "Nowe znajomosci okaza sie udane, badz dobrej mysli. Ze spokojem wysluchasz zwierzen i ploteczek. ",
    " Mozesz teraz wiecej cwiczyc, a takze zaczynac zdrowa diete. Nic nie bedzie ci dolegac ale w chlodniejsze dni nos szalik. Chwila nieuwagi i bedziesz mial chrype."};
    if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby1[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby1[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby1[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby1[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby1[7]<<std::endl;
        std::cout<<wrozby1[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby1[2]<<std::endl;
        std::cout<<wrozby1[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby1[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby1[5]<<std::endl;
    }
}

void horoskop::Bliznieta()
{
    std::string wrozby2[]= {"Jowisz przyniesie ci nowe, ekscytujace hobby, wiec korzystaj z zycia, zamiast zastanawiac sie czy wypada robia podobne rzeczy.",
    "Poczujesz, ze masz serdecznie dosc nadmiaru domowych zajec, ale dopiero wiosna wszystko ulozy sie po twojej mysli.",
    " Znow poczujesz sie kochana. Singielki moga poznac kogos, na kogo od dawna czekaly. W sprawach sercowych sluchaj intuicji, a nie plotek.",
    "Dojdzie do skutku inwestycja, o jakiej skrycie marzysz, ale w maju badz ostrozna, bo wspolpraca  z kims nierozsadnym moze kosztowac cie sporo nerwow.",
    "Nie groza ci powaane klopoty, ale mimo wszystko warto zadbac o watrobe i unikac tlustych potraw. Kondycje skory i wlosow poprawisz naturalnymi sokami.",
    "WAZNE DATY: 1.03 – 25.03, 9.06 – 2.07",
    "Bliznieta w sobote beda sie usmiechac.",
    "Bedziesz pochloniêty myslami o pieniedzach i zakupach. Nie skap sobie jednak pieniedzy na male przyjemnosci.",
    "Kolacja z przyjaciolmi lub wizyta w kinie poprawia ci humor.",
    "Planety radza nie ufac byle komu i zacheca cie do odkrywania zagadek i sekretow. Dzieki intuicji unikniesz duzego problemu."};
    if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby2[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby2[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby2[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby2[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby2[7]<<std::endl;
        std::cout<<wrozby2[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby2[2]<<std::endl;
        std::cout<<wrozby2[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby2[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby2[5]<<std::endl;
    }
}

void horoskop::Rak()
{
    std::string wrozby3[]={"Uran w sekstylu sprawi, ze pozbedziesz sie ze swojego otoczenia osob, ktorym nie warto ufac i otworzysz na nowe znajomosci.",
    " Nie pozwol, aby inni wtracali sie w twoj zwiazek, a wszystko dobrze sie skonczy. Wakacje wykorzystaj na wspolny urlop.",
    "Ostrozne z natury singielki dopiero w grudniu odwaza sie wyznac, co naprawde czuja.",
    " Dotad poswiecalas sie dla innych, ale w tym roku nauczysz sie dbac o siebie. Rob tak, aby tobie bylo wygodnie, a od lipca w relacjach z bliskimi zapanuje upragniony spokoj. ",
    "Dzialaj, zamiast doszukiwac sie spiskow, a pod koniec roku Jowisz sprawi, ze zostaniesz wybrana do pelnienia waznej funkcji albo otrzymasz intratna propozycje finansowa.",
    "Saturn w opozycji do twojego znaku pokazuje przemeczenie i infekcje. Wzmocni cie dobrze zbliansowana dieta. Nie oszczedzaj na zdrowiu!",
    "WAZNE DATY: 15.05 – 8.06, 3.07 – 27.07",
    "Skup siee na romantyzmie, pamietaj, ze starania zawsze przynosza wynik.",
    "Rob swoje i tak, jak lubisz i spedzaj czas na zabawie, a nie dyskusjach na temat rodzinnych zasad i nudnych powinnosci.",
    "Nie upieraj sie jednak za bardzo przy swoich pomyslach i nie krytykuj bliskich, jeœli ktos jest zagubiony i w trudnej sytuacji."};
     if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby3[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby3[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby3[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby3[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby3[7]<<std::endl;
        std::cout<<wrozby3[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby3[2]<<std::endl;
        std::cout<<wrozby3[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby3[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby3[5]<<std::endl;
    }
}

void horoskop::Lew()
{
    std::string wrozby4[]={"Nie zabraknie okazji do zabawy i swietowania. Jowisz w trygonie obudzi w tobie skrywane dotad uczucia i niespotykana namietnosc.",
    "Znajdz czas dla partnera, a z przyjemnoscia odkryjesz, jak wspolne pasje i codzienne sprawy potrafia zblizyc do siebie ludzi.",
    "Singielki czeka goracy, wakacyjny romans.",
    "Na poczatku roku ktos sprobuje nie dotrzymac danych ci obietnic. Jednak zamiast rezygnowac ze swoich planow, poszukaj nowych sprzymierzencow, a wszystko sie uda.",
    "Jowisz sprzyja udanym zakupom, a takze zmianie samochodu czy mieszkania. ",
    "Ktos na wysokim stanowisku stanie sie wobec ciebie bardzo zyczliwy, a jego nastawienie tylko przyspieszy twoja kariere. Zas Uran w kwadraturze osmieli cir do zdobywania wiedzy."
    "Odwiedz dentyste i upewnij sie, ze stosujesz wlasciwa profilaktyke. Jezli pragniesz schudnac, pora zadbac o regularne cwiczenia.",
    "WAZNE DATY: 28.07 – 20.08, 1.11 – 25.11",
    "Skup sie na alternatywach, a jesli trzeba - daj sobie czas.",
    "Z dystansu uda Ci sie rozwiazac problem, ktory czesto do Ciebie powraca."};
     if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby4[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby4[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby4[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby4[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby4[7]<<std::endl;
        std::cout<<wrozby4[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby4[2]<<std::endl;
        std::cout<<wrozby4[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby4[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby4[5]<<std::endl;
    }
}

void horoskop::Panna()
{
    std::string wrozby5[]={"Nadchodza zmiany. Uwierz w swoj potencjal, mysl o przyszlosci, nie ogladaj sie na to, co bylo.",
    " Wiek jest twoim atutem, a nie przeszkoda!",
    "To, ze mo¿esz liczyc na partnera, przestanie ci wystarczac. Zatesknisz za porywami milosci."
    "Na ozywienie bedziesz musiala poczekac do jesieni. Singielki powinny zaczac znajomosc na stopie kolezenskiej, a nie czekac na uderzenie pioruna. ",
    "W styczniu i w maju zdenerwuje cie czyjas nieszczerosc",
    "Nie daj sobie wmowic, ze wszystko jest w porzadku. Sprzety domowe beda sie  psuc.",
    "Aby utrzymac dotychczasowa pozycje, bedziesz musiala sie doksztalcic.",
    "Wlasciwa diagnoza to podstawa. Zrob wszystko, by trafic pod skrzydla dobrego specjalisty.",
    "Uwierz w siebie, jestes dobra! Sierpien i wrzesien beda pracowite, pojawia sie nowe mozliwosci.",
    "WAZNE DATY: 21.08 – 13.09, 8.10 – 31.10"};
     if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby5[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby5[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby5[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby5[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby5[7]<<std::endl;
        std::cout<<wrozby5[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby5[2]<<std::endl;
        std::cout<<wrozby5[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby5[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby5[5]<<std::endl;
    }
}

void horoskop::Waga()
{
    std::string wrozby6[]={"Czekaja cie wielkie porzadki w zyciu prywatnym i zawodowym.",
    "Nie obawiaj sie, bo Jowisz w sekstylu doda ci energii i odwagi.",
    "Wybredne w tym roku singielki dopiero we wrzesniu za sprawa Wenus znajda tego jedynego, wlasciwego partnera.",
    "Nie trac czasu na znajomosc z kims, kto nie jest ciebie wart.",
    "Saturn pomoze ci ustalic granice, a Jowisz sprawi, ze po burzy wzejdzie slonce. ",
    "W wakacje poczujesz, ze otwieraja sie przed toba nowe mozliwosci, a dzieci i wnuki beda cie wspierac w dzialaniach",
    " Saturn radzi: ostroznie w sprawach finansowych.",
    "W pracy trzymaj nerwy na wodzy i ucz sie na cudzych bledach, a dobrze na tym wyjdziesz.",
    "Jestes w dobrej kondycji, ale myslac o przyszlosci warto zrobic badania, bo na jesieni mozesz poczuc sie wyczerpana.",
    "WAZNE DATY: 15.05 – 8.06, 14.09 – 7.10",
    "Postaraj sie zdobyc cos, co bedzie dla Ciebie radosne."};
    if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby6[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby6[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby6[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby6[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby6[7]<<std::endl;
        std::cout<<wrozby6[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby6[2]<<std::endl;
        std::cout<<wrozby6[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby6[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby6[5]<<std::endl;
    }
}

void horoskop::Skorpion()
{
    std::string wrozby7[]={"Poczujesz sie jak gwiazda, bo wszyscy beda chcieli miec cie po swojej stronie, a trudne sprawy rozstrzygna sie na twoja korzysc.",
    "Zrozumiesz, ze tylko razem jestescie w stanie pokonac klopoty.",
    "Staniesz sie bardziej wyrozumiala dla partnera.",
    "Singielki beda bawic sie i flirtowac, dopoki na jesieni nie zapragna stworzyc trwalego zwiazku.",
    "Bliscy beda cie wspierac w nowych dokonaniach o wiele mocniej, niz w poprzednich latach.",
    "Zapowiada sie bardzo dobry rok.",
    "Szef cie doceni.",
    "Odzyskasz sily witalne, ale Uran radzi zmienic przyzwyczajenia i umieszcza w grafiku chocby codzienny spacer.",
    "WAZNE DATY: 1.01 – 6.01, 8.10 – 31.10",
    "Nie mozesz wiecznie odkladac swoich problemow na pozniej."};
    if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby7[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby7[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby7[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby7[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby7[7]<<std::endl;
        std::cout<<wrozby7[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby7[2]<<std::endl;
        std::cout<<wrozby7[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby7[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby7[5]<<std::endl;
    }
}

void horoskop::Strzelec()
{
    std::string wrozby8[]={"Ten rok sprzyja duchowym poszukiwaniom i rozwijaniu talentow.",
    "Przygotuj sie na mala rewolucje, bo twoje zycie nabierze tempa.",
    " Problemy, jakie mieliscie w poprzednich latach, teraz odejda w zapomnienie, a partner zacznie cie doceniac.",
    "Single rusza na lowy bez odwracania sie za siebie.",
    "Pociagac cie beda wyjazdy, sztuka i sport, a to nie wszystkim sie spodoba.",
    "Nie zadreczaj sie wyrzutami sumienia, bo dzieki temu twoja rodzina w koncu stanie sie bardziej samodzielna.",
    "Jowisz w twoim znaku pomoze dostrzec nowe szanse.",
    "Uporasz sie z zaleglosciami w urzedach.",
    "Jesli szukasz wspolnikow, to na poczatku roku pojawia sie wlasciwe osoby.",
    "WAZNE DATY: 7.01 – 2.02, 1.11 – 19.12"};
        if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby8[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby8[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby8[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby8[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby8[7]<<std::endl;
        std::cout<<wrozby8[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby8[2]<<std::endl;
        std::cout<<wrozby8[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby8[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby8[5]<<std::endl;
    }
}

void horoskop::Koziorozec()
{
    std::string wrozby9[]={"Dobra organizacja to podstawa.",
    "Nie zostawiaj spraw na ostatnia chwile, unikaj zaleglosci, a twoje starania zostana docenione.",
    "Singielki w grudniu dostrzega kogos, dla kogo warto zmienic przyzwyczajenia.",
    "Pluton w koniunkcji twojego znaku pomoze ci walczyc o swoje miejsce w zwiazku. ",
    "W czerwcu unikaj dwuznacznych sytuacji, bo Mars moze popsuc wasz zwiazek.",
    "Saturn sprawi, ze wezmiesz na siebie powazne zadania.",
    "Bêdziesz rzadzic i decydowac o rodzinnych inwestycjach. ",
    "Ktos, kto zawsze cie wspierac, doda ci odwagi i zacheci do dalszego rozwoju.",
    "Uwazaj na kregoslup i kolana, nie przeciazaj sie w pracy czy podczas cwiczen.",
    "WA¯NE DATY: 3.02 – 28.02, 26.11 – 19.12"};
           if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby9[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby9[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby9[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby9[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby9[7]<<std::endl;
        std::cout<<wrozby9[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby9[2]<<std::endl;
        std::cout<<wrozby9[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby9[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby9[5]<<std::endl;
    }
}

void horoskop::Wodnik()
{
    std::string wrozby10[]={"Jowisz w sekstylu zapewni ci powodzenie, nawet jesli nie szukasz szalonych przygod.",
        "Ktos atrakcyjny zacznie cie podrywac, a partner bedzie musial bronic swojej pozycji.",
        "Uran przyniesie zmiany, na jakie od dawna czekalas",
        "Pora na mala rewolucje, zwlaszcza jezli chodzi o twoj wolny czas.",
        "Zamiast za wszystkich odpowiadac, zajmij sie soba.",
        "Bedziesz mial ochote zmienic swoje zawodowe zycie i uciec od rutyny.",
        "Uran zacheci cie do aktywnego trybu zycia.",
        "Zapisz sie na fitness lub joge, a uwolnisz sie od stresow.",
        "WAZNE DATY: 1.03 – 25.03, 20.12 – 31.12",
        "Za Toba tydzien pelen refleksji, ktore mozesz przekuc w swoja sile."};
              if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby10[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby10[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby10[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby10[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby10[7]<<std::endl;
        std::cout<<wrozby10[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby10[2]<<std::endl;
        std::cout<<wrozby10[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby10[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby10[5]<<std::endl;
    }
}

void horoskop::Ryby()
{
    std::string wrozby11[]={"Neptun w twoim znaku sprawi, ze codziennie bedziesz robic cos dobrego dla siebie",
    "Przestaniesz tracic czas na nudne, wrecz wyczerpujace znajomosci.",
    "Staniesz sie bardziej uduchowiona i romantyczna, co pozytywnie wplynie na wasz zwiazek. ",
    "Czescciej rob sobie wolne od obowiazkow.",
    "Troch4 odmiany i luzu poprawi ci humor, a tym samym i nastroj panujacy w twojej rodzinie.",
    "Pamietaj, zwlaszcza we wrzesniu, aby nie wracac do starych spraw i nie psuc dobrych relacji.",
    "Za sprawa Jowisza w kwadraturze bedziesz z powodzeniem zarzadzac wspolnymi pieniedzmi czy to w domu, czy w pracy. ",
    "Chwytaj okazje i negocjuj do upadlego, bo to dobry czas na spelnianie marzen.",
    "Wysypiaj sie i czesciej rob sobie wolne.",
    "WAZNE DATY: 26.03 – 19.04, 14.09 – 7.10"};
           if (wiek>20 && wiek<40)
    {
        std::cout<<wrozby11[3]<<std::endl;
    }
    if (wiek>40 && wiek<60)
    {
        std::cout<<wrozby11[1]<<std::endl;
    }
    if (wiek>60 && wiek<80)
    {
        std::cout<<wrozby11[9]<<std::endl;
    }
    if (wiek>0 && wiek<20)
    {
        std::cout<<wrozby11[0]<<std::endl;
    }
    if (sex=='m' || sex=='M')
    {
        std::cout<<wrozby11[7]<<std::endl;
        std::cout<<wrozby11[4]<<std::endl;
    }
    if (sex=='k' || sex=='K' )
    {
        std::cout<<wrozby11[2]<<std::endl;
        std::cout<<wrozby11[8]<<std::endl;
    }
    if (wiek%2==0)
    {
        std::cout<<wrozby11[6]<<std::endl;
    }
    if (wiek%2==1)
    {
        std::cout<<wrozby11[5]<<std::endl;
    }
}

void horoskop::wyswietlWrozby()
{
     if ((miesiac4==3 && dzien4>=21) || (miesiac4==4 && dzien4<=19)) znak=0;
     if ((miesiac4==4 && dzien4>=20) || (miesiac4==5 && dzien4<=22)) znak=1;
     if ((miesiac4==5 && dzien4>=23) || (miesiac4==6 && dzien4<=21)) znak=2;
     if ((miesiac4==6 && dzien4>=22) || (miesiac4==7 && dzien4<=22)) znak=3;
     if ((miesiac4==7 && dzien4>=23) || (miesiac4==8 && dzien4<=23)) znak=4;
     if ((miesiac4==8 && dzien4>=24) || (miesiac4==9 && dzien4<=22)) znak=5;
     if ((miesiac4==9 && dzien4>=23) || (miesiac4==10 && dzien4<=22)) znak=6;
     if ((miesiac4==10 && dzien4>=23) || (miesiac4==11 && dzien4<=21)) znak=7;
     if ((miesiac4==11  && dzien4>=22) || (miesiac4==12 && dzien4<=21)) znak=8;
     if ((miesiac4==12 && dzien4>=22) || (miesiac4==1 && dzien4<=19)) znak=9;
     if ((miesiac4==1 && dzien4>=20) || (miesiac4==2 && dzien4<=18)) znak=10;
     if ((miesiac4==5 && dzien4>=19) || (miesiac4==6 && dzien4<=20)) znak=11;
    std::cout<<"TWOJ ZNAK ZODIAKU TO "<<znakZodiaku[znak]<<std::endl;
    if  (znak==0)
    {
        Baran();
    }
     if  (znak==1)
    {
       Byk();
    }
    if  (znak==2)
    {
        Bliznieta();
    }
     if  (znak==3)
    {
        Rak();
    }
     if  (znak==4)
    {
        Lew();
    }
     if  (znak==5)
    {
        Panna();
    }
    if  (znak==6)
    {
         Waga();
    }
   if  (znak==7)
    {
        Skorpion();
    }
     if  (znak==8)
    {
         Strzelec();
    }
    if  (znak==9)
    {
        Koziorozec();
    }
    if  (znak==10)
    {
        Wodnik();
    }
    if (znak==11)
    {
         Ryby();
    }
}

