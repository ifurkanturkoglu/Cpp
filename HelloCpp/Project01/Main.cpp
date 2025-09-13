#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	/*
	string name;  //declaration
	name = "Furkan"; //initialization

	int bornYear = 2000;
	float sayisalOrtalama = 3.14f;
	double pi = 3.14159265358979323846;
	bool isStudent = true;
	char examGrade = 'A'; //int olarak sayý yazarsak ASCII	tablosundaki karakter deðerini yazar.
	int quizNote1 = 42;
	int quizNote2 = 32;
	float quizAverage = (float)(quizNote1 + quizNote2) / 2;


	cout << "Merhaba sayin "<< name  << " dogum yilin " << bornYear << endl<< "not ortalamasi: " << sayisalOrtalama;

	cout << "Hello C++" << name << endl << "Welcome to the world of programming!";
	*/

	double deger = 123.14561565;
	cout << deger << endl;

	cout << setprecision(2)<< deger << endl; //2 dediðimiz deðer 2digit kullanýr. 1.2e+02 2 digit gösterir.
	cout << setprecision(3) << deger << endl; //3 dediðimiz deðer 3digit kullanýr. 123 digit gösterir.
	cout << setprecision(4) << deger << endl; //4 dediðimiz deðer 4digit kullanýr. 123.1 digit gösterir.
	//setprecision(N) manipülatörü toplam anlamlý rakam (significant digits) sayýsýný ayarlar.

	//noktadan sonraki digit sayýsýnýn gösterimini ayarlamak için fixed ile setprecision birlikte kullanýlýr.

	cout << fixed << setprecision(3) << deger << endl; 

	return 0;

}