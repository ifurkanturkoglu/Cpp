/*
 -Mapler de bulunan keyler s�ral�d�r. �n �nemli �zelliklerinden biridir olay�d�r.
 -Vector ve list'de veriler s�ral� tutulmaz.
 -Binary search tree data structer yap�s� vard�r.
 -H�zl� eri�im vard�r.

 -Arama i�lemi h�zl�d�r.
 -Map vector'e g�re daha fazla bellek kullan�r. Pointer olarak tutar.
 -Genel avantaj� arama ve key de�erlerine eri�imdir.
 -Listeye g�re ekleme ve silme i�lemleri daha yava�t�r.
*/





#include <iostream>
#include <map>


using namespace std;



int main() {
	
	map<int, float,greater<int>> mOgrenciNotlari;//greater kullan�rsak keyler b�y�kten k����e s�ralan�r.
	
	//Ekleme
	mOgrenciNotlari[101] = 85.5;
	mOgrenciNotlari[102] = 90.3;
	mOgrenciNotlari[100] = 78.8;

	 
	//insert kullanarak ekleme
	mOgrenciNotlari.insert({ 104,94.4 });
	 

	//Listeleme
	cout << "\n Ogrenci numaralari ve not ortalamalari\n";
	//C++11 (2011 y�l�nda) ile gelen bir �zelliktir ve t�r ��kar�m�
	//(type inference) yaparak de�i�kenin t�r�n� otomatik olarak belirler
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

	//Ayn� key ile yeni kay�t yapmak istersek ne olur
	mOgrenciNotlari[101] = 58.2;
	cout << "102 nolu ogrenci silindi..\n";
	for (const auto& ogrenci : mOgrenciNotlari) {
		cout << "Ogrenci No: " << ogrenci.first << ", Not ortalamasi: " << ogrenci.second << endl;
	}






	return 0;
}