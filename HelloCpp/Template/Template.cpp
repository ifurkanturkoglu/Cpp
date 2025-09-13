#include <iostream>


using namespace std;


/*
	C++ Template 

	Template, C++ da farklý veri tipleriyle çalýþabilen fonksiyonlar veya sýnýflar yazmamýzý saðlar.
	Yani ayný kodu tekrar yazmadan, hem int, hem double, hem string gibi farklý tipler için kullanabiliriz.

*/




template <typename T> // T, herhangi bir veri tipi olabilir
T toplama(T a, T b) {
	return a + b;
}


template <typename T>
class Kare {
private:
	T kenar;

public:
	Kare(T k) {
		kenar = k;
	}

	T alan() {
		return kenar * kenar;
	}
	void goster() {
		cout << "Kenar: " << kenar << ", Alan: " << alan() << endl;
	}
};





int main()
{
    /*cout << toplama(string("hello"),string("word")) << endl;*/

	Kare<int> k1(5);
	k1.goster();

	Kare<double> k2(4.5);
	k2.goster();
}

