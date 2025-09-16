#include <iostream>
#include <vector>
//#include <string>//aslýnda iostream içinde tanýmlý vs2022 de 
using namespace std;



class Otomobil {

private:
	string marka;
	string model;
	int yil;
public:
	Otomobil(string m,string mod, int y) : marka(m),model(mod),yil(){} //constructor oluþturma yöntemi deðerler böyle atanabilir.

	void bilgiYazdir() const{
		cout << "Marka: " << marka << ", Model: " << model << ", Yil: " << yil << endl;
	}

};




int main8() {
	//Otomobil nesnelerini tutacak bir vektör oluþturuyoruz.

	vector<Otomobil> vGaraj;

	cout << "Garaja otomobiller ekleniyor...";

	vGaraj.push_back(Otomobil("Toyota", "Corolla", 2020));
	vGaraj.push_back(Otomobil("BMW0", "X5", 2018));
	vGaraj.push_back(Otomobil("Mercedes", "C200", 2023));


	cout << "\nGarajdaki Otomobiller:\n";
	cout << "------------------------\n";

	for (const Otomobil& oto : vGaraj) {//burda const kullanacaksak çaðýrdýðýmýz metod da const olmak zorunda ide metodun içinde otonun deðiþip deðiþmediðini bilemez o yüzden keyworde bakar.
		oto.bilgiYazdir();
	}

	//Garajdaki bir otomobili silme iþlemi

	cout << "\n bir otomobil garajdan siliniyor..\n";

	vGaraj.erase(vGaraj.begin() + 1);

	for (const Otomobil& oto : vGaraj) {//burda const kullanacaksak çaðýrdýðýmýz metod da const olmak zorunda ide metodun içinde otonun deðiþip deðiþmediðini bilemez o yüzden keyworde bakar.
		oto.bilgiYazdir();
	}



	return 0;
}