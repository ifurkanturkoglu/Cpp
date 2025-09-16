#include <iostream>
#include <vector>
//#include <string>//asl�nda iostream i�inde tan�ml� vs2022 de 
using namespace std;



class Otomobil {

private:
	string marka;
	string model;
	int yil;
public:
	Otomobil(string m,string mod, int y) : marka(m),model(mod),yil(){} //constructor olu�turma y�ntemi de�erler b�yle atanabilir.

	void bilgiYazdir() const{
		cout << "Marka: " << marka << ", Model: " << model << ", Yil: " << yil << endl;
	}

};




int main8() {
	//Otomobil nesnelerini tutacak bir vekt�r olu�turuyoruz.

	vector<Otomobil> vGaraj;

	cout << "Garaja otomobiller ekleniyor...";

	vGaraj.push_back(Otomobil("Toyota", "Corolla", 2020));
	vGaraj.push_back(Otomobil("BMW0", "X5", 2018));
	vGaraj.push_back(Otomobil("Mercedes", "C200", 2023));


	cout << "\nGarajdaki Otomobiller:\n";
	cout << "------------------------\n";

	for (const Otomobil& oto : vGaraj) {//burda const kullanacaksak �a��rd���m�z metod da const olmak zorunda ide metodun i�inde otonun de�i�ip de�i�medi�ini bilemez o y�zden keyworde bakar.
		oto.bilgiYazdir();
	}

	//Garajdaki bir otomobili silme i�lemi

	cout << "\n bir otomobil garajdan siliniyor..\n";

	vGaraj.erase(vGaraj.begin() + 1);

	for (const Otomobil& oto : vGaraj) {//burda const kullanacaksak �a��rd���m�z metod da const olmak zorunda ide metodun i�inde otonun de�i�ip de�i�medi�ini bilemez o y�zden keyworde bakar.
		oto.bilgiYazdir();
	}



	return 0;
}