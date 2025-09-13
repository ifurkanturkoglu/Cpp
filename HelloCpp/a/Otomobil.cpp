#include <iostream>

using namespace std;

class Otomobil{
    private:
        string marka;

    public:
        Otomobil(string _marka,int _yil){
            marka = _marka;
            yil = _yil;
        }
        int yil;
        friend void BilgileriGoster(Otomobil oto)
}