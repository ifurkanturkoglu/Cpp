#include <iostream>
using namespace std;

int* fonsksiyon() {
	int* p = new int;
	*p = 37;
	//p = NULL;
	return p; // p'nin adresini geri döndürür. yani bellekteki rezerve edilen alanýn adresini geri döndürür.
}


struct Ogrenci {
	string Isim;
	int yas;
};
int main() {

	//int *p = new int; // bunu yaptýðýmýzda bellekte rezerevasyon yapmýþ olur.
	//                  //yani bellekteki bir içeriði rezerv eder ve onun adresini pointerýn içeriðine yazar
	//*p = 5; // pnin tuttuðu adresteki rezerve edilen içeriðe 5 deðeri yazýlýr

	//delete p; // bellekteki rezerve edilen alaný sileriz. bu iþlemi yapmazsak memory leak olur.
	//	      // p bellekten silinmez sadece içerikteki adresteki deðerleri temizler.
	//p = NULL; // p artýk hiçbir adresi tutmuyor. yani p artýk boþ bir pointer oldu. p nin içeriði null oldu.
	//		  // kullanýlmayan pointerlara NULL atamasý yapýlmasý zorunludur.
	////*p = 6; // bu iþlem artýk geçersizdir. çünkü p artýk NULL yani boþ bir pointer. bellekteki hiçbir adrese iþaret etmiyor. NULL olan adrese deðer atanmaz.
	//
	////yeni bir deðer atamak için tekrardan bir deðer tahsis etmemiz gereklidir.
	//p = new int(8);

	//if(p != NULL)
	//	cout << *p; 

	//delete p; // tekrar bellekteki rezerve edilen alaný sileriz. eðer silmezsek program kapanana kadar o deðer orada tutulur boþ yere memoryde yer kaplar.
	//


	//int* c; 
	////NULL Pointer Decleration
	//c = NULL; // Eðer ki bir pointer decleration yaptýðýmýzda hemen deðer atamasý yapmýcaksak NULL yapmalýyýz ki ulaþýlmaya çalýþýldýðýnda hata vermesin.

	//if (c != NULL)
	//	*c = 5;
	//else {
	//	c = new int(5);
	//}

	//int* ptr;
	//ptr = fonsksiyon(); // fonsksiyonun geri döndürdüðü adresi ptr'ye atýyoruz.

	//

	//if (ptr != NULL) { // ptr'nin NULL olup olmadýðýný kontrol ediyoruz.
	//	cout << *ptr << endl; // ptr'nin iþaret ettiði adresteki deðeri ekrana yazdýrýyoruz.
	//	delete ptr; // ptr'nin iþaret ettiði adresteki rezerve edilen alaný siliyoruz.
	//}


	int n;
	cout << "Lutfen kaç adet tam sayi içereceðini giriniz: ";
	cin >> n;
	//bir dizinin boyutunu runtime sýrasýnda belirleyemeyiz. int arr[n];
	
	int *p = new int[n]; // dinamik olarak n adet tam sayý için bellek rezerve ediyoruz.
	//kullanýcý n sayý girdiðinde girilen sayý kadar bellekte yer ayýrmýþ olup ilk elemanýn adresi pointera aktarýlýr. Runtime sýrasýnda gerçekleþir.
	for (int i = 0; i < n; i++) {
		cin >> p[i];//arraylar gibi direkt olarak içeriðe eriþir.
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i]; // p'nin iþaret ettiði adresteki deðerleri topluyoruz.
	}


	cout << "Toplam: " << sum << endl;

	delete[] p; // dinamik olarak rezerve edilen alaný sileriz. [] iþareti ile dizinin tamamýný sileriz.
	
	
	/*NOT!!!
	* 
	* Yani, siz int *p = new int[n]; dediðinizde, arka planda aslýnda þuna benzer bir þey olur:

		-Sistem, n adet int için yeterli alaný hesaplar (örneðin, n * sizeof(int) bayt).

		-Bu alanýn baþýna, dizinin boyutu olan n'yi (veya bazen toplam ayrýlan bayt sayýsýný) içeren küçük bir ek bilgi ekler.

		-Ardýndan, sistem size bu ek bilgiden hemen sonraki asýl veri alanýnýn adresini p olarak verir.

	+------------------------------------ +
		| BOYUT BÝLGÝSÝ(n) | int[0] | int[1] | ... | int[n - 1] |
		+------------------------------------ +
		^ ^
		|                   |
		|                   -- - p'nin iþaret ettiði adres (verinin baþlangýcý)
		-- - Gerçekte ayrýlan bloðun baþlangýcý(boyut bilgisini içerir)

		hangi adrese kadar gideceðinin boyut bilgisi de dizi için ayrýlan bellekte tutulur.

		delete[] p; komutunu verdiðinizde:

			-C++ çalýþma zamaný, p'nin iþaret ettiði adrese bakar.

			-Bu adresten geriye doðru giderek (veya baþka bir dahili mekanizma kullanarak), daha önce new[] tarafýndan depolanmýþ olan dizinin boyut bilgisini (n) bulur ve okur.

			-Bu boyut bilgisini kullanarak, dizinin baþlangýcýndan itibaren tüm elemanlarýn kapladýðý toplam bellek alanýný hesaplar ve bu bloðun tamamýný serbest býrakýr.

			-Bu gizli mekanizma sayesinde, sizin sadece ilk elemanýn adresini bilmeniz yeterli olur. Sistem, new[] ile ayýrdýðý belleði delete[] ile serbest býrakýrken kendi içindeki "boyut bilgisini" kullanarak iþini halleder.
	* 
	*/

	//Ogrenci ogr1 = { "Ali", 20 };
	//Ogrenci ogr2 = ogr1; // ogr2, ogr1'in bir kopyasýdýr. Yani ayrý bir bellek alaný kullanýr.(Deep Copy)


	Ogrenci* ogr1 = new Ogrenci;
	Ogrenci* ogr2 = new Ogrenci;//Ramden bellek tahsis ediliyor.
							    //|
	ogr1->Isim = "Ali";			//|
	ogr1->yas = 20;				//|
								//|
								//|
	ogr2 = ogr1; // ogr2, ogr1'in adresini tutar. Yani ayný bellek alanýný paylaþýrlar.(Shallow Copy)
						        //bu kýsýmda ise ogr2 için tahsil edilen belleði iþaretleyen bir pointer kalmadýðý için bellek sýzýntýsý olmuþtur.



	return EXIT_SUCCESS;
	//EXÝT_FAILURE

}