#include <iostream>

using namespace std;



int main3() {

	//int count = 0;

	//[] => [&] t�m d�� de�i�kenleri referans olarak yakalar
	//auto artt�r = [&]() {++count;};

	//[=] => count kopyalanacak ve d��ardak� count de�i�keni etkilenmez. mutable ekledi�imizde ise count de�i�keninin bir kopyas�n� olu�turur ve onun �zerinde i�lemler yapar.
	/*auto artt�r = [=]()mutable{
		++count;
		cout << "Lambda icindeki count: " << count << endl;
		};*/


	//Lambday� birka� kez �a��ral�m

	/*artt�r();
	artt�r();
	artt�r();

	cout << "Asil count:" << count << endl;*/


	//auto toplam = [](int a, int b) {return a + b;};

	//int x = 5;
	//int y = 3;
	//int sonuc = toplam(x, y); // lambday� �a��rma


	//d�n�� tipini -> int ile atamas�n� yap�yoruz.
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