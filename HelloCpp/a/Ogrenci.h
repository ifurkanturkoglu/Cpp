#include <iostream>

using namespace std;

class Ogrenci{
     private:
        int not1;
        int not2;
        string ad;
    public:
        Ogrenci(string ad, int not1, int not2);
        friend class Hesaplayici;
}