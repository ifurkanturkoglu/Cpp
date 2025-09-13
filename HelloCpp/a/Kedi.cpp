#include <Kedi.h>

//Genel olarak initialize edilecek dosyaları ilgili sınıfın cpp dosyasının üst kısmında yapılır.
int Kedi::kediSayisi = 0;



//Constructer
Kedi::Kedi(string ad):Hayvan(ad){
     kediSayisi++;
}
//Destructor
Kedi::~Kedi(){
    kediSayisi--;
}

Kedi::FareYakala(){
    cout << Hayvan::GetIsim() << " fareyi yakalıyor." << endl; 
}


int Kedi::KediBoyutHesapla(int x){
    return x**2;
}