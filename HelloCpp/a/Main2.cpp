#include <iostream>

using namespace std;

struct Person {
	//�ye de�i�kenler (varsay�lan olarak public)

	string name;
	int age;

	//Parametreli constructor

	Person(const string& n, int ag) {
		name = n;
		age = ag;
	}
	
	//�ye fonks.

	void printInfo() {
		cout << "Ad: " << name << " Ya�: " << age << endl;
	}
};

struct BankAccount {

private:
	double balance;//D��ar�dan do�rudan eri�ilmesin.

public: 
	//Constructor
	BankAccount(double initialBalance) {
		balance = initialBalance;
		cout << "Hesap olu�turuldu.\n";
	}

	//Destructor
	~BankAccount() {
		cout << "Hesap kapatildi." << endl;
	}

	//Getter
	double getBalance() {
		return balance;
	}

	//Setter benzeri para ekleme metodu
	void deposit(double amount) {
		balance += amount;
	}

	//Para �ekme
	void withdraw(double amount) {
		balance -= amount;
	}



};

//C++11 kullanan idelerde auto fonk. kullan�m�
auto topla(int x, int y) -> int {
	return (x + y);
}


//C++14 kullanan idelerde auto fonk. kullan�m�
auto cikar(int x, int y) {
	return (x - y);
}

int main2() {
	
	#pragma region PersonStruct
		/*Person p("Ali", 25);
		p.printInfo();

		p.age = 35;
		p.printInfo();
	*/
	#pragma endregion

	#pragma region BankAccount

		/*BankAccount myAccount(1000);

		cout << "G�ncel bakiye: " << myAccount.getBalance() << endl;


		myAccount.deposit(500);

		cout << "Para yat�rd�ktan sonraki g�ncel bakiye: " << myAccount.getBalance() << endl;

		myAccount.withdraw(200);

		cout << "Para �ektikten sonraki g�ncel bakiye: " << myAccount.getBalance() << endl;*/



		//BankAccount* pAccount = new BankAccount(1000);

		//cout << "G�ncel bakiye:" << pAccount->getBalance() << endl;

		//pAccount->deposit(500.0);

		//cout << "Para yat�r�ld�ktan sonraki g�ncel bakiye:" << pAccount->getBalance() << endl;

		//pAccount->withdraw(300);

		//cout << "Para �ekildikten sonraki g�ncel bakiye:" << pAccount->getBalance() << endl;
		//
		// delete pAccount;//Destructor otomatik olarak �a��r�l�r.
		//
	#pragma endregion


	auto sayi = 10;  // sayi de�i�keni int olarak belirlenir.
	auto metin = "Hello C++";
	auto ondalik = 3.14;
	cout << sayi << endl;

	cout << metin<< endl;
	cout << ondalik;

	cout << "Toplam: " << topla(3, 2) << endl;
	cout << "��karma: " << cikar(3, 2) << endl;

	auto sonuc = cikar(20, 30);

	cout << typeid(decltype(sonuc)).name();


	//struct: �yeler do�rudan eri�ilebilir.(default de�er)

	return 0;

}