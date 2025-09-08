#include <iostream>


using namespace std;

class Kadro{
    private:
        string KadroTip;
        double MaasKatsayisi;
    public:
        Kadro(string tip="Standart", double katsayi = 1.0) :  {//default const da bu şekilde tanımlama ile oluşur. Yani varsayılan değerleri atamasını yapmamız lazım.
            // KadroTip = tip;
            // MaasKatsayisi = katsayi;
        }
        void yazdir(){
            cout << "Kadro Tipi: " << KadroTip << " Maaş katsayisi: " << MaasKatsayisi << endl;
        }
}