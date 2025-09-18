/*
 -Mapler de bulunan keyler sýralýdýr. Ön önemli özelliklerinden biridir olayýdýr.
 -Vector ve list'de veriler sýralý tutulmaz.
 -Binary search tree data structer yapýsý vardýr.
 -Hýzlý eriþim vardýr.

 -Arama iþlemi hýzlýdýr.
 -Map vector'e göre daha fazla bellek kullanýr. Pointer olarak tutar.
 -Genel avantajý arama ve key deðerlerine eriþimdir.
 -Listeye göre ekleme ve silme iþlemleri daha yavaþtýr.
*/





#include <iostream>
#include <map>


using namespace std;



int main() {
	
	map<int, float,greater<int>> mOgrenciNotlari;//greater kullanýrsak keyler büyükten küçüðe sýralanýr.
	
	//Ekleme
	mOgrenciNotlari[101] = 85.5;
	mOgrenciNotlari[102] = 90.3;
	mOgrenciNotlari[100] = 78.8;

	 
	//insert kullanarak ekleme
	mOgrenciNotlari.insert({ 104,94.4 });
	 

	//Listeleme
	cout << "\n Ogrenci numaralari ve not ortalamalari\n";
	//C++11 (2011 yýlýnda) ile gelen bir özelliktir ve tür çýkarýmý
	//(type inference) yaparak deðiþkenin türünü otomatik olarak belirler
	for (const auto& ogrenci : mOgrenciNotlari) {
		cout << "Ogrenci No: " << ogrenci.first << ", Not ortalamasi: " << ogrenci.second << endl;
	}



	//Search
	int arananOgrenciNo = 102;
	if (mOgrenciNotlari.find(arananOgrenciNo) != mOgrenciNotlari.end()) {//
		cout << "\n" << arananOgrenciNo << "numarali ogrencinin not ortalamasi: " << mOgrenciNotlari[arananOgrenciNo] << endl;
	}
	else {
		cout << "\n" << arananOgrenciNo  << " numarali ogrenci map icinde mevcut degildir!\n " << endl;
	}


	//Silme

	mOgrenciNotlari.erase(102);
	cout << "102 nolu ogrenci silindi..\n";
	for (const auto& ogrenci : mOgrenciNotlari) {
		cout << "Ogrenci No: " << ogrenci.first << ", Not ortalamasi: " << ogrenci.second << endl;
	}

	//Ayný key ile yeni kayýt yapmak istersek ne olur
	mOgrenciNotlari[101] = 58.2;
	cout << "102 nolu ogrenci silindi..\n";
	for (const auto& ogrenci : mOgrenciNotlari) {
		cout << "Ogrenci No: " << ogrenci.first << ", Not ortalamasi: " << ogrenci.second << endl;
	}






	return 0;
}