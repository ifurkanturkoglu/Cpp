#pragma once
#include <Hayvan.h>


class Kedi : public Hayvan{

public:
    ~Kedi();
    void FareYakala();
    static int GetKediSayisi(){//static metodların içeriğini header dosyasında tanımlayabiliriz.
        return kediSayisi;
    };
    void SesCikar(){
        cout << "Miyav miyav" << endl;
    };

    static in KediBoyutHesapla(int x);


private:    
    static int kediSayisi;
    //const static int sayı bu hiçbir zaman değişmeyek değere verilir.
}