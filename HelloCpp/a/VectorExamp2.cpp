#include <iostream>
#include <vector>
#include "Personel.h"


using namespace std;



void PersonelAdd(vector<Personel>& vP,Personel& p) {
	vP.push_back(p);
	cout << "Personel eklemesi basarili.";
}

void PersonelList(vector<Personel>& vP) {
	for (Personel& p : vP) {
		p.print();
	}
}

void PersonelFind(vector<Personel>& vP, int personelNo) {
	for (Personel p : vP) {
		if (p.getPersonelNo() == personelNo) {
			p.print();
			break;
		}
	}
}


void PersonelDelete(vector<Personel>& vP, int personelNo) {
	for (size_t i = 0; i < vP.size(); i++) {
		if (vP[i].getPersonelNo() == personelNo) {
			vP.erase(vP.begin()+i);
			cout << "Silme islemi baþarýlý..";
			break;
		}
	}
}


int main() {

	vector<Personel> vPersonel;
	int input;
	


	do
	{
		cout << "---- Personel Yönetim Sistemi ----" << "\n1. Personel Ekle" << "\n2. Personel Listele" << "\n3. Personel Ara" << "\n4. Personel Sil" << "\n5. Cikis" << "\nSeciminizi yapin: ";

		cin >> input;

		switch (input)
		{
		case 1: {
			string ad;
			string kadro;
			int personelNo;

			cout << "Personel adini girin: ";
			cin >> ad;
			cout << "Personel kadro girin: ";
			cin >> kadro;
			cout << "Personel numarasini girin: ";
			cin >> personelNo;


			Personel newPersonel(ad,kadro,personelNo);
			PersonelAdd(vPersonel, newPersonel);
			break;
		}
		case 2: {
			if (vPersonel.size() > 0) {
				PersonelList(vPersonel);
			}
			else {
				cout << "Listede eleman yok lütfen eleman ekledikten sonra tekrar deneyin..";
			}
			break;
		}
		case 3: {
			if (vPersonel.size() > 0) {
				int perNo;
				cout << "Aramak istediðiniz personelin personel numarasýný giriniz: ";
				cin >> perNo;
				PersonelFind(vPersonel, perNo);
			}
			else {
				cout << "Listede eleman yok lütfen eleman ekledikten sonra tekrar deneyin..";
			}
			break;
		}
		case 4: {
			if (vPersonel.size() > 0) {
				int perNo;
				cout << "Silmek istediðiniz personelin personel numarasýný giriniz: ";
				cin >> perNo;
				PersonelDelete(vPersonel, perNo);
			}
			else {
				cout << "Listede eleman yok lütfen eleman ekledikten sonra tekrar deneyin..";
			}
			break;
		}
		case 5: {
			cout << "Programdan çýkýþ yapýldý.";
			break;
		}
		default:
			break;
		}



	} while (input != 5);

	

	return 0;

}