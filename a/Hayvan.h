#pragma once
#include <iostream>

using namespace std;

class Hayvan
{
    //protected yaparsak alt sınıflar kullanabilir.
    protected:
        string isim;
    public:
        void Uyu();
        void Besle();
        virtual void SesCikar(){
            cout << "Hayvan Ses Çıkar metodu çağırıldı" << endl;
        };

        

        string GetIsim();
        void SetIsim(string ad);
        Hayvan(string ad);
};


