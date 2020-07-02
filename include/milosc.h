#include "dane.h"

class milosc
{

    protected:
        std::string imieMil;
        int dzienM;
        int miesiacM;
        int rokM;
     public:
        milosc();
        virtual ~milosc();
        void setImieM(const std::string& imie_m);
        void setDzienM(const int dzien_m);
        void setMiesiacM(const int miesiac_m);
        void setRokM(const int rok_m);
        std::string getImieM();
        int getDzienM();
        int getMiesiacM();
        int getRokM();
};
