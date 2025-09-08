#include <Ogrenci.h>
#include <iostream>

using namespace std;


class Hesaplayici{
    public:
        void ortalamaHesapla(Ogrenci ogrenci){
            int ortalama = (ogrenci.not1 + ogrenci.not2)/2;
            cout << ogrenci.ad << " isimli öğrencinin not ortalaması: " << ortalama << endl;
        };
}