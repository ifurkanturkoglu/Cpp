#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {

	fstream file;

	file.open("C:\\Users\\furka\\OneDrive\\Masa�st�\\c++.txt", ios::in | ios::binary); // Dosyay� binary modda a��yoruz. ios::out yazma modu, ios::binary ise binary modda a�mak i�in kullan�l�r. Text dosyalar� d���nda binary kullanmak mant�kl�d�r.


	if (!file.is_open()) {
		cout << "Dosya acilamadi!" << endl;
	}
	else {
		string str;
		
		while (getline(file, str)) {
			cout << "Dosyadan okunan satir: " << str << endl;
		
		}; 
		//string str = "C++!";
		//file << str << endl; // Dosyaya yazma i�lemi yap�yoruz.
		file.close(); // Dosyay� kapat�yoruz.
	}
	


	return 0;
}