#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish"); //T�rk�e karakter deste�i i�in kullan�l�r.

	/*string isim;
	int en, boy;
	cout << "Lutfen isminizi giriniz: ";
	cin >> isim;
	cout << "Merhaba " << isim << " Geometrik Hesaplama Program�na Ho�geldin" << endl;
	cout << "Lutfen dikdortgenin enini giriniz: ";
	cin >> en;
	cout << "Lutfen dikdortgenin boyunu giriniz: ";
	cin >> boy;
	cout << "Dikd�rtgenin alan�: " << en * boy << endl;*/
	
	//int sonuc,x,y;
	//cout << "L�tfen ussu  al�nacak say�y� giriniz: ";
	//cin >> x;
	//cout << "L�tfen ussu  giriniz: ";
	//cin >> y;
	//
	//sonuc = pow(x, y); //2 �ss� 3
	//cout << "sonuc: " << sonuc << endl;

	//int sonuc;
	///*sonuc = floor(2.7);*/
	////sonuc = ceil(2.7); //2.7 say�s�n� yukar�ya yuvarlar. 3 olarak g�sterir.
	//sonuc = round(2.4); //2.4 say�s�n� en yak�n tam say�ya yuvarlar. 2 olarak g�sterir.
	//cout << "sonuc: " << sonuc << endl; //2.7 say�s�n� a�a��ya yuvarlar. 2 olarak g�sterir.



	//int sayi1, sayi2, sayi3;
	//double sonuc;
	///*cout << "Ilk sinav notunu giriniz: " << endl;
	//cin >> sayi1;
	//cout << "Ikinci sinav notunu giriniz: " << endl;
	//cin >> sayi2;
	//cout << "Ucuncu sinav notunu giriniz: " << endl;
	//cin >> sayi3;*/

	//cout << "Lutfen 3 adet sinav notunuzu giriniz: ";
	//cin >> sayi1 >> sayi2 >> sayi3; //Kullan�c�dan 3 adet s�nav notunu tek sat�rda al�r.
	//sonuc = (double)(sayi1 + sayi2 + sayi3) / 3.0;

	//cout << "S�nav notlarinizin ortalamasi: " << fixed << setprecision(2) << sonuc << endl;
	//cout << "S�nav notlarinizin ortalamasi: " << setprecision(2) << round(sonuc) << endl; //setprecision ile virg�lden sonra 2 basamak g�sterir.

	int sifre = 1234;
	int kullan�c�Input;
	cout << "Lutfen sifrenizi giriniz: ";
	cin >> kullan�c�Input;

	 
	if (kullan�c�Input = sifre) { //tek = kullan�ld��� vakit direkt olarak true de�eri al�r.
		cout << "Sifre dogru" << endl;
	}
	else {
		cout << "Sifre yanlis" << endl;
	}


	return 0;
}