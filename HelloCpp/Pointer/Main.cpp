#include <iostream>

using namespace std;

void degerHesapla(int* p) {
	*p = 36;
}

int main() {
	//int x = 8;
	//int y = 9;;


	//int* ptr; // Pointer içinde adres tutan yapıdır.
	//ptr = &x // &:ampersand;
	//*ptr = 99;

	//cout << "ptr değeri: " << *ptr << endl;
	//cout << "x değeri: " << x << endl;

	//ptr = &y;
	//*ptr = 100;

	//cout << "ptr değeri: " << *ptr << endl;
	//cout << "y değeri: " << y << endl;
	//&: address of : 'nın adresi  &x = x'in adresi.

	/*int a = 5;
	int *ptr = &a;
	cout << "a'nın adresi: " << &a << endl;*/

	
	//int a = 5;

	//int *ptr;
	//ptr = &a;
	//degerHesapla(ptr);
	//cout << "a'nın değeri: " << a << endl; // 34


	//vxwork integrity: real time OS C/C++



	int arr[] = { 8,12,20 }; // ram bloklarında ard arda tutulur. mesela 1001 adresinde 8 olduğunda 1002 adresinde 12 olur.
						     //array lerin ramdeki içeriği ilk elemanın adresidir.
	
	int* p;

	p = arr;

	cout << *p << endl; // arr dizisinin başlangıç adresini gösterir.
	cout << *(p + 1) << endl; // arr dizisinin 2. elemanını gösterir.
	
	cout << p << endl; // arr dizisinin başlangıç adresini gösterir.
	cout << p + 1 << endl; // arr dizisinin 2. elemanının adresini gösterir.
	cout << p + 2 << endl; // arr dizisinin 3. elemanının adresini gösterir.


	*(p + 2) = 22;

	cout << *(p + 2) << endl; // arr dizisinin 3. elemanının yeni değerini gösterir.
	//p+2 dediğimizde pnin tipine bakar ve boyutu ne ise onu 2 ile çarparak adresteki yerine gider.(p nin türü int ise 4*2 = 8 byte sonraki adresi belirtir.)
}
	
