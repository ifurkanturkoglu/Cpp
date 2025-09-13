#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish"); //Türkçe karakter desteði için kullanýlýr.

	/*string isim;
	int en, boy;
	cout << "Lutfen isminizi giriniz: ";
	cin >> isim;
	cout << "Merhaba " << isim << " Geometrik Hesaplama Programýna Hoþgeldin" << endl;
	cout << "Lutfen dikdortgenin enini giriniz: ";
	cin >> en;
	cout << "Lutfen dikdortgenin boyunu giriniz: ";
	cin >> boy;
	cout << "Dikdörtgenin alaný: " << en * boy << endl;*/
	
	//int sonuc,x,y;
	//cout << "Lütfen ussu  alýnacak sayýyý giriniz: ";
	//cin >> x;
	//cout << "Lütfen ussu  giriniz: ";
	//cin >> y;
	//
	//sonuc = pow(x, y); //2 üssü 3
	//cout << "sonuc: " << sonuc << endl;

	//int sonuc;
	///*sonuc = floor(2.7);*/
	////sonuc = ceil(2.7); //2.7 sayýsýný yukarýya yuvarlar. 3 olarak gösterir.
	//sonuc = round(2.4); //2.4 sayýsýný en yakýn tam sayýya yuvarlar. 2 olarak gösterir.
	//cout << "sonuc: " << sonuc << endl; //2.7 sayýsýný aþaðýya yuvarlar. 2 olarak gösterir.



	//int sayi1, sayi2, sayi3;
	//double sonuc;
	///*cout << "Ilk sinav notunu giriniz: " << endl;
	//cin >> sayi1;
	//cout << "Ikinci sinav notunu giriniz: " << endl;
	//cin >> sayi2;
	//cout << "Ucuncu sinav notunu giriniz: " << endl;
	//cin >> sayi3;*/

	//cout << "Lutfen 3 adet sinav notunuzu giriniz: ";
	//cin >> sayi1 >> sayi2 >> sayi3; //Kullanýcýdan 3 adet sýnav notunu tek satýrda alýr.
	//sonuc = (double)(sayi1 + sayi2 + sayi3) / 3.0;

	//cout << "Sýnav notlarinizin ortalamasi: " << fixed << setprecision(2) << sonuc << endl;
	//cout << "Sýnav notlarinizin ortalamasi: " << setprecision(2) << round(sonuc) << endl; //setprecision ile virgülden sonra 2 basamak gösterir.

	int sifre = 1234;
	int kullanýcýInput;
	cout << "Lutfen sifrenizi giriniz: ";
	cin >> kullanýcýInput;

	 
	if (kullanýcýInput = sifre) { //tek = kullanýldýðý vakit direkt olarak true deðeri alýr.
		cout << "Sifre dogru" << endl;
	}
	else {
		cout << "Sifre yanlis" << endl;
	}


	return 0;
}