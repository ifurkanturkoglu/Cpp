#include <iostream>
#include <Hayvan.h>
#include <Kedi.h>
#include <Otomobil.cpp>
#include <Ogrenci.h>

using namespace std;


void BilgileriGoster(Otomobil oto){
    cout << oto.yil << " " << oto.marka;
}








int main(){

    #pragma region Inheritance

    // Hayvan h("Karabas;");

    // h.Beslen();
    // h.Uyu();

    // Kedi t("Tekir");
    // t.Beslen();
    // t.FareYakala();
    // t.Uyu();


    // Kedi *kp = new Kedi("Garfield");

    // cout << Kedi::kediSayisi << " kedi var" << endl;

    // delete kp;

    //   cout << Kedi::kediSayisi << " kedi var" << endl;
    #pragma endregion


    #pragma region Polymorphism

    Hayvan* phayvan;
    Kedi tekir;

    phayvan = &tekir;

    phayvan->SesCikar();


    #pragma endregion


    #pragma region FriendMethod

    Otomobil otomobil("Opel",2012);
    BilgileriGoster(otomobil);
    #pragma endregion


    #pragma region FriendClass

    Ogrenci ogrenci1("Ali",70,80);
    Hesaplayici hesaplayici;
    hesaplayici.ortalamaHesapla(ogrenci1);


    #pragma endregion




    return 0;
}