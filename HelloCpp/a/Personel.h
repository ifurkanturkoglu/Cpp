#include <iostream>

using namespace std;

class Personel {

private:
	int personelNo;
	string isim;
	string kadro;

public:
	Personel(string ad, string k,int pNo);

	void print() const;

	int getPersonelNo();
	string getIsim();
	string getKadro();

};
