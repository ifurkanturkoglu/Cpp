#include "Personel.h"


Personel::Personel(string ad, string k, int pNo) :  isim(ad), kadro(k), personelNo(pNo) {}


int Personel::getPersonelNo() {
	return personelNo;
}

string Personel::getIsim() {
	return isim;
}

string Personel::getKadro() {
	return kadro;
}

void Personel::print() const{
	cout << "Personel adi: " << isim << "\nPersonel kadrosu: " << kadro << "\n Personel No: " << personelNo << endl;
}



