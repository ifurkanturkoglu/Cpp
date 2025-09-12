#include <iostream>

using namespace std;



int main3() {

	//int count = 0;

	//[] => [&] tüm dýþ deðiþkenleri referans olarak yakalar
	//auto arttýr = [&]() {++count;};

	//[=] => count kopyalanacak ve dýþardaký count deðiþkeni etkilenmez. mutable eklediðimizde ise count deðiþkeninin bir kopyasýný oluþturur ve onun üzerinde iþlemler yapar.
	/*auto arttýr = [=]()mutable{
		++count;
		cout << "Lambda icindeki count: " << count << endl;
		};*/


	//Lambdayý birkaç kez çaðýralým

	/*arttýr();
	arttýr();
	arttýr();

	cout << "Asil count:" << count << endl;*/


	//auto toplam = [](int a, int b) {return a + b;};

	//int x = 5;
	//int y = 3;
	//int sonuc = toplam(x, y); // lambdayý çaðýrma


	//dönüþ tipini -> int ile atamasýný yapýyoruz.
	auto karisikLambda = [](bool kosul)-> int {

		if (kosul) {
			return 42;
		}
		else {
			return 1.4;
		}
	
	};


	cout << karisikLambda(false);


	return 0;
}