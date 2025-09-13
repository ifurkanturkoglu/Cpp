#include <iostream>
using namespace std;

int* fonsksiyon() {
	int* p = new int;
	*p = 37;
	//p = NULL;
	return p; // p'nin adresini geri d�nd�r�r. yani bellekteki rezerve edilen alan�n adresini geri d�nd�r�r.
}


struct Ogrenci {
	string Isim;
	int yas;
};
int main() {

	//int *p = new int; // bunu yapt���m�zda bellekte rezerevasyon yapm�� olur.
	//                  //yani bellekteki bir i�eri�i rezerv eder ve onun adresini pointer�n i�eri�ine yazar
	//*p = 5; // pnin tuttu�u adresteki rezerve edilen i�eri�e 5 de�eri yaz�l�r

	//delete p; // bellekteki rezerve edilen alan� sileriz. bu i�lemi yapmazsak memory leak olur.
	//	      // p bellekten silinmez sadece i�erikteki adresteki de�erleri temizler.
	//p = NULL; // p art�k hi�bir adresi tutmuyor. yani p art�k bo� bir pointer oldu. p nin i�eri�i null oldu.
	//		  // kullan�lmayan pointerlara NULL atamas� yap�lmas� zorunludur.
	////*p = 6; // bu i�lem art�k ge�ersizdir. ��nk� p art�k NULL yani bo� bir pointer. bellekteki hi�bir adrese i�aret etmiyor. NULL olan adrese de�er atanmaz.
	//
	////yeni bir de�er atamak i�in tekrardan bir de�er tahsis etmemiz gereklidir.
	//p = new int(8);

	//if(p != NULL)
	//	cout << *p; 

	//delete p; // tekrar bellekteki rezerve edilen alan� sileriz. e�er silmezsek program kapanana kadar o de�er orada tutulur bo� yere memoryde yer kaplar.
	//


	//int* c; 
	////NULL Pointer Decleration
	//c = NULL; // E�er ki bir pointer decleration yapt���m�zda hemen de�er atamas� yapm�caksak NULL yapmal�y�z ki ula��lmaya �al���ld���nda hata vermesin.

	//if (c != NULL)
	//	*c = 5;
	//else {
	//	c = new int(5);
	//}

	//int* ptr;
	//ptr = fonsksiyon(); // fonsksiyonun geri d�nd�rd��� adresi ptr'ye at�yoruz.

	//

	//if (ptr != NULL) { // ptr'nin NULL olup olmad���n� kontrol ediyoruz.
	//	cout << *ptr << endl; // ptr'nin i�aret etti�i adresteki de�eri ekrana yazd�r�yoruz.
	//	delete ptr; // ptr'nin i�aret etti�i adresteki rezerve edilen alan� siliyoruz.
	//}


	int n;
	cout << "Lutfen ka� adet tam sayi i�erece�ini giriniz: ";
	cin >> n;
	//bir dizinin boyutunu runtime s�ras�nda belirleyemeyiz. int arr[n];
	
	int *p = new int[n]; // dinamik olarak n adet tam say� i�in bellek rezerve ediyoruz.
	//kullan�c� n say� girdi�inde girilen say� kadar bellekte yer ay�rm�� olup ilk eleman�n adresi pointera aktar�l�r. Runtime s�ras�nda ger�ekle�ir.
	for (int i = 0; i < n; i++) {
		cin >> p[i];//arraylar gibi direkt olarak i�eri�e eri�ir.
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i]; // p'nin i�aret etti�i adresteki de�erleri topluyoruz.
	}


	cout << "Toplam: " << sum << endl;

	delete[] p; // dinamik olarak rezerve edilen alan� sileriz. [] i�areti ile dizinin tamam�n� sileriz.
	
	
	/*NOT!!!
	* 
	* Yani, siz int *p = new int[n]; dedi�inizde, arka planda asl�nda �una benzer bir �ey olur:

		-Sistem, n adet int i�in yeterli alan� hesaplar (�rne�in, n * sizeof(int) bayt).

		-Bu alan�n ba��na, dizinin boyutu olan n'yi (veya bazen toplam ayr�lan bayt say�s�n�) i�eren k���k bir ek bilgi ekler.

		-Ard�ndan, sistem size bu ek bilgiden hemen sonraki as�l veri alan�n�n adresini p olarak verir.

	+------------------------------------ +
		| BOYUT B�LG�S�(n) | int[0] | int[1] | ... | int[n - 1] |
		+------------------------------------ +
		^ ^
		|                   |
		|                   -- - p'nin i�aret etti�i adres (verinin ba�lang�c�)
		-- - Ger�ekte ayr�lan blo�un ba�lang�c�(boyut bilgisini i�erir)

		hangi adrese kadar gidece�inin boyut bilgisi de dizi i�in ayr�lan bellekte tutulur.

		delete[] p; komutunu verdi�inizde:

			-C++ �al��ma zaman�, p'nin i�aret etti�i adrese bakar.

			-Bu adresten geriye do�ru giderek (veya ba�ka bir dahili mekanizma kullanarak), daha �nce new[] taraf�ndan depolanm�� olan dizinin boyut bilgisini (n) bulur ve okur.

			-Bu boyut bilgisini kullanarak, dizinin ba�lang�c�ndan itibaren t�m elemanlar�n kaplad��� toplam bellek alan�n� hesaplar ve bu blo�un tamam�n� serbest b�rak�r.

			-Bu gizli mekanizma sayesinde, sizin sadece ilk eleman�n adresini bilmeniz yeterli olur. Sistem, new[] ile ay�rd��� belle�i delete[] ile serbest b�rak�rken kendi i�indeki "boyut bilgisini" kullanarak i�ini halleder.
	* 
	*/

	//Ogrenci ogr1 = { "Ali", 20 };
	//Ogrenci ogr2 = ogr1; // ogr2, ogr1'in bir kopyas�d�r. Yani ayr� bir bellek alan� kullan�r.(Deep Copy)


	Ogrenci* ogr1 = new Ogrenci;
	Ogrenci* ogr2 = new Ogrenci;//Ramden bellek tahsis ediliyor.
							    //|
	ogr1->Isim = "Ali";			//|
	ogr1->yas = 20;				//|
								//|
								//|
	ogr2 = ogr1; // ogr2, ogr1'in adresini tutar. Yani ayn� bellek alan�n� payla��rlar.(Shallow Copy)
						        //bu k�s�mda ise ogr2 i�in tahsil edilen belle�i i�aretleyen bir pointer kalmad��� i�in bellek s�z�nt�s� olmu�tur.



	return EXIT_SUCCESS;
	//EX�T_FAILURE

}