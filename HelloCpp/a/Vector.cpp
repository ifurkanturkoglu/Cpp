/*

-Vector'ler verileri bellekte ardışık bir şekilde tutar. Yani bellekte belli bir yeri tahsis olarak ayırır ve ardışık olarak verileri tutar.

-List'ler verileri rastgele yerlerde tutarak veriler arasında ilişki kurarak(link-list) gibi bir sistemle tutar. 

-Vector indeksli bir şekilde elemana erişmede listeye göre daha hızlıdır daha kullanışlıdır. 

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
	//for (int i = 0; i < vNumbers.size(); i++) {//size metodu size_t tipinde dönüş yapar. bazı idelerde int i = 0 uyarı verir çünkü size_t unsigned inttir. yani int olmamasını ister bu yüzden size_t olarak değiştirilebilir. 'size_t i = 0'.
	//	
	//	cout << "Eleman " << i << ": " << vNumbers[i] << endl;
	//	//cout << "Eleman " << i << ": " << vNumbers.at(i) << endl; diğer kullanım bu da dizideki elemana erişim sağlar
	//}

	//vNumbers[1] = 52;
	//cout << endl << vNumbers[1] << endl;


	//2.örnek

	//vector<string> vCars = { "Opel","Audi","BMW" };
	//vCars.push_back("Seat");
	//
	//for (const string& car : vCars) {//farklı for kullanımı
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


	//En sondaki elemanı silme;

	//vNumbers.pop_back();


	//Belirli bir elemanı silme;

	//vNumbers.erase(vNumbers.begin() + 1);


	//Vektörün içeriğini temizleme;

	//vNumbers.clear();//Tüm elemanları sil. Bellekteki tahsis edilen boyut durur. sadece içindeki verileri boşaltır.

	//cout << "Vektör boyutu: " << vNumbers.size();

	//Bir vektörü başlangıç değerleriyle doldurma
	vector<int> myVector(5, 52); // 5 tane 52 değeri ata.





#pragma endregion

	//vector<int>::iterator it = vNumbers.begin();
	//it++;
	//vNumbers.insert(it, 15); // ikinci pozisyona 15 ekle

	//for (int& num : vNumbers) {// & ampersand işareti ile birtane num oluşturulup vNumberstaki adres değerlerine erişir. daha hızlıdır.
	//	cout << num << " ";
	//	num = num + 1;
	//}
	//cout << endl;


	for (const int& num : vNumbers) {//vektör içeriği değiştirilmek istenilmiyorsa const kullanılır.
		cout << num << " ";
	}







	return 0;
} 