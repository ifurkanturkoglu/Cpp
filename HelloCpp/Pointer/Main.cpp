#include <iostream>

using namespace std;

void degerHesapla(int* p) {
	*p = 36;
}

int main() {
	//int x = 8;
	//int y = 9;;


	//int* ptr; // Pointer i�inde adres tutan yap�d�r.
	//ptr = &x // &:ampersand;
	//*ptr = 99;

	//cout << "ptr de�eri: " << *ptr << endl;
	//cout << "x de�eri: " << x << endl;

	//ptr = &y;
	//*ptr = 100;

	//cout << "ptr de�eri: " << *ptr << endl;
	//cout << "y de�eri: " << y << endl;
	//&: address of : 'n�n adresi  &x = x'in adresi.

	/*int a = 5;
	int *ptr = &a;
	cout << "a'n�n adresi: " << &a << endl;*/

	
	//int a = 5;

	//int *ptr;
	//ptr = &a;
	//degerHesapla(ptr);
	//cout << "a'n�n de�eri: " << a << endl; // 34


	//vxwork integrity: real time OS C/C++



	int arr[] = { 8,12,20 }; // ram bloklar�nda ard arda tutulur. mesela 1001 adresinde 8 oldu�unda 1002 adresinde 12 olur.
						     //array lerin ramdeki i�eri�i ilk eleman�n adresidir.
	
	int* p;

	p = arr;

	cout << *p << endl; // arr dizisinin ba�lang�� adresini g�sterir.
	cout << *(p + 1) << endl; // arr dizisinin 2. eleman�n� g�sterir.
	
	cout << p << endl; // arr dizisinin ba�lang�� adresini g�sterir.
	cout << p + 1 << endl; // arr dizisinin 2. eleman�n�n adresini g�sterir.
	cout << p + 2 << endl; // arr dizisinin 3. eleman�n�n adresini g�sterir.


	*(p + 2) = 22;

	cout << *(p + 2) << endl; // arr dizisinin 3. eleman�n�n yeni de�erini g�sterir.
	//p+2 dedi�imizde pnin tipine bakar ve boyutu ne ise onu 2 ile �arparak adresteki yerine gider.(p nin t�r� int ise 4*2 = 8 byte sonraki adresi belirtir.)
}
	
