#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {

	fstream file;

	file.open("C:\\Users\\furka\\OneDrive\\Masaüstü\\c++.txt", ios::in | ios::binary); // Dosyayý binary modda açýyoruz. ios::out yazma modu, ios::binary ise binary modda açmak için kullanýlýr. Text dosyalarý dýþýnda binary kullanmak mantýklýdýr.


	if (!file.is_open()) {
		cout << "Dosya acilamadi!" << endl;
	}
	else {
		string str;
		
		while (getline(file, str)) {
			cout << "Dosyadan okunan satir: " << str << endl;
		
		}; 
		//string str = "C++!";
		//file << str << endl; // Dosyaya yazma iþlemi yapýyoruz.
		file.close(); // Dosyayý kapatýyoruz.
	}
	


	return 0;
}