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
	char examGrade = 'A'; //int olarak say� yazarsak ASCII	tablosundaki karakter de�erini yazar.
	int quizNote1 = 42;
	int quizNote2 = 32;
	float quizAverage = (float)(quizNote1 + quizNote2) / 2;


	cout << "Merhaba sayin "<< name  << " dogum yilin " << bornYear << endl<< "not ortalamasi: " << sayisalOrtalama;

	cout << "Hello C++" << name << endl << "Welcome to the world of programming!";
	*/

	double deger = 123.14561565;
	cout << deger << endl;

	cout << setprecision(2)<< deger << endl; //2 dedi�imiz de�er 2digit kullan�r. 1.2e+02 2 digit g�sterir.
	cout << setprecision(3) << deger << endl; //3 dedi�imiz de�er 3digit kullan�r. 123 digit g�sterir.
	cout << setprecision(4) << deger << endl; //4 dedi�imiz de�er 4digit kullan�r. 123.1 digit g�sterir.
	//setprecision(N) manip�lat�r� toplam anlaml� rakam (significant digits) say�s�n� ayarlar.

	//noktadan sonraki digit say�s�n�n g�sterimini ayarlamak i�in fixed ile setprecision birlikte kullan�l�r.

	cout << fixed << setprecision(3) << deger << endl; 

	return 0;

}