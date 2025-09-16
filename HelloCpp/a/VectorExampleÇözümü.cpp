#include <iostream>
#include <vector>
#include <string>

//VÝDEO ÇÖZÜMÜ
using namespace std;


class Personel {

	private:
		int personelNo;
		string isim;
		string kadro;

	public:
		Personel(int no, string adSoyad, string pozisyon) {
			personelNo = no;
			isim = adSoyad;
			kadro = pozisyon;
		};

		int getPersonelNo() const {
			return personelNo;
		}

		string getIsim() const {
			return isim;
		}
		string getKadro() const {
			return kadro;
		}

		void print() const {
			cout << "Personel No:" << personelNo << " | Isim: " << isim << " | Kadro: " << kadro << endl;
		}
};


void personelEkle(vector<Personel>& vPersoneller) {
	int no;
	string isim, kadro;

	cout << "Personel No: ";
	cin >> no;// enter'a bastýðýmýzda \n olarak alýr. yani cin ile veri aldýktan sonra getline ile input alýnýcaksa araya cin.ignore kullanýlmalý
	cin.ignore();//Yeni satiri yani \n temizler.

	cout << "Isim (Ad Soyad): ";
	getline(cin, isim);

	cout << "Kadro: ";
	getline(cin, kadro);

	//vPersoneller.push_back(Personel(no,isim,kadro));
	vPersoneller.emplace_back(no, isim, kadro); //emplace_back metodu personeli direkt vektörün içinde oluþturduðundan daha performanslýdýr. Diðer türlü oluþturulduðunda kopyalama veya taþýma olur ve maliyet artar. Bellek açýsýndan tasarruf saðlar ve daha hýzlýdýr. Objelerden oluþan vektörler için geçerlidir.
	cout << "Personel baþariyla eklendi.\n";
}

void personelListele(const vector<Personel>& vPersoneller){
	if (vPersoneller.empty()) {
		cout << "Personel listesi bos!";
		return;
	}
	cout << "\n----- Personel Listesi -----\n";
	for (const auto& personel : vPersoneller) {
		personel.print();
	}

}


void personelAra(const vector<Personel>& vPersoneller) {
	int no;
	cout << "Aramak istediginiz personel numarasini giriniz: ";
	cin >> no;
	for (const auto& personel : vPersoneller) { // range-based for loop
		if (personel.getPersonelNo() == no) {
			cout << "\n Aradiginiz personel sistemde mevcut, bilgileri:\n";
			personel.print();
			return;
		}
	}
	cout << "Personel bulunamadý!\n";
}

void personelSil(vector<Personel>& vPersoneller) {
	int no;
	cout << "Silmek istediginiz personel numarasini giriniz: ";
	cin >> no;
	for (auto it = vPersoneller.begin(); it != vPersoneller.end(); it++) {
		if (it->getPersonelNo() == no) {
			vPersoneller.erase(it);
			cout << "Personel basariyla silindi...\n";
			return;
		}
	}
	cout << "Personel bulunamadi!\n";
}



int main() {

	vector<Personel> vPersoneller;

	int secim;

	do
	{
		cout << "\n---- Personel Yonetim Sistemi ----\n";
		cout << "1. Personel Ekle\n";
		cout << "2. Personel Listele\n";
		cout << "3. Personel Ara\n";
		cout << "4. Personel Sil\n";
		cout << "5. Cikis\n";
		cout << "Seciminizi lutfen yapin: ";
		cin >> secim;

		switch (secim) {
			case 1: {
				personelEkle(vPersoneller);
				break;
			}
			case 2: {
				personelListele(vPersoneller);
				break;
			}
			case 3: {
				personelAra(vPersoneller);
				break;
			}
			case 4: {
				personelSil(vPersoneller);
				break;
			}
			case 5: {
				cout << "Programdan cikiliyor...\n";
			}
			default:
				cout << "Gecersiz secim, lutfen 1-5 arasi secim yapin!";
		}



	} while (secim != 5);


	return 0;
}