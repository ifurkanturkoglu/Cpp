/*

-Vector'ler verileri bellekte ard���k bir �ekilde tutar. Yani bellekte belli bir yeri tahsis olarak ay�r�r ve ard���k olarak verileri tutar.

-List'ler verileri rastgele yerlerde tutarak veriler aras�nda ili�ki kurarak(link-list) gibi bir sistemle tutar. 

-Vector indeksli bir �ekilde elemana eri�mede listeye g�re daha h�zl�d�r daha kullan��l�d�r. 

*/





#include <iostream>
#include <vector>


using namespace std;




int main6() {

	//vector<int> vNumbers;

	//vNumbers.push_back(10);
	//vNumbers.push_back(20);
	//vNumbers.push_back(30);


	//cout << "Vektor boyutu: " << vNumbers.size() << endl;
	//
	//for (int i = 0; i < vNumbers.size(); i++) {//size metodu size_t tipinde d�n�� yapar. baz� idelerde int i = 0 uyar� verir ��nk� size_t unsigned inttir. yani int olmamas�n� ister bu y�zden size_t olarak de�i�tirilebilir. 'size_t i = 0'.
	//	
	//	cout << "Eleman " << i << ": " << vNumbers[i] << endl;
	//	//cout << "Eleman " << i << ": " << vNumbers.at(i) << endl; di�er kullan�m bu da dizideki elemana eri�im sa�lar
	//}

	//vNumbers[1] = 52;
	//cout << endl << vNumbers[1] << endl;


	//2.�rnek

	//vector<string> vCars = { "Opel","Audi","BMW" };
	//vCars.push_back("Seat");
	//
	//for (const string& car : vCars) {//farkl� for kullan�m�
	//	cout << car << "  ";
	//} 







	vector<int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);

	for (size_t i = 0; i < vNumbers.size(); i++) {
		cout << "Eleman " << i << ": " << vNumbers.at(i) << endl;
	}


#pragma region VectorSilme


	//En sondaki eleman� silme;

	//vNumbers.pop_back();


	//Belirli bir eleman� silme;

	//vNumbers.erase(vNumbers.begin() + 1);


	//Vekt�r�n i�eri�ini temizleme;

	//vNumbers.clear();//T�m elemanlar� sil. Bellekteki tahsis edilen boyut durur. sadece i�indeki verileri bo�alt�r.

	//cout << "Vekt�r boyutu: " << vNumbers.size();

	//Bir vekt�r� ba�lang�� de�erleriyle doldurma
	vector<int> myVector(5, 52); // 5 tane 52 de�eri ata.





#pragma endregion

	//vector<int>::iterator it = vNumbers.begin();
	//it++;
	//vNumbers.insert(it, 15); // ikinci pozisyona 15 ekle

	//for (int& num : vNumbers) {// & ampersand i�areti ile birtane num olu�turulup vNumberstaki adres de�erlerine eri�ir. daha h�zl�d�r.
	//	cout << num << " ";
	//	num = num + 1;
	//}
	//cout << endl;


	for (const int& num : vNumbers) {//vekt�r i�eri�i de�i�tirilmek istenilmiyorsa const kullan�l�r.
		cout << num << " ";
	}







	return 0;
} 