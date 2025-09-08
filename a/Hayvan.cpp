#include "Hayvan.h"


Hayvan::Hayvan(string ad){
    Hayvan::isim = ad;
}

void Hayvan::Besle(){
    cout << Hayvan::isim << "beslendi"<< endl;
}

void Hayvan::Uyu(){
    cout << Hayvan::isim << "uyudu" << endl;
}

void Hayvan::SetIsim(string ad){
    Hayvan::isim = ad;
}

string Hayvan::GetIsim(){
    return Hayvan::isim;
}