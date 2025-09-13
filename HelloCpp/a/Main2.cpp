#include <iostream>

using namespace std;

struct Person {
	//üye deðiþkenler (varsayýlan olarak public)

	string name;
	int age;

	//Parametreli constructor

	Person(const string& n, int ag) {
		name = n;
		age = ag;
	}
	
	//Üye fonks.

	void printInfo() {
		cout << "Ad: " << name << " Yaþ: " << age << endl;
	}
};

struct BankAccount {

private:
	double balance;//Dýþarýdan doðrudan eriþilmesin.

public: 
	//Constructor
	BankAccount(double initialBalance) {
		balance = initialBalance;
		cout << "Hesap oluþturuldu.\n";
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

	//Para çekme
	void withdraw(double amount) {
		balance -= amount;
	}



};

//C++11 kullanan idelerde auto fonk. kullanýmý
auto topla(int x, int y) -> int {
	return (x + y);
}


//C++14 kullanan idelerde auto fonk. kullanýmý
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

		cout << "Güncel bakiye: " << myAccount.getBalance() << endl;


		myAccount.deposit(500);

		cout << "Para yatýrdýktan sonraki güncel bakiye: " << myAccount.getBalance() << endl;

		myAccount.withdraw(200);

		cout << "Para çektikten sonraki güncel bakiye: " << myAccount.getBalance() << endl;*/



		//BankAccount* pAccount = new BankAccount(1000);

		//cout << "Güncel bakiye:" << pAccount->getBalance() << endl;

		//pAccount->deposit(500.0);

		//cout << "Para yatýrýldýktan sonraki güncel bakiye:" << pAccount->getBalance() << endl;

		//pAccount->withdraw(300);

		//cout << "Para çekildikten sonraki güncel bakiye:" << pAccount->getBalance() << endl;
		//
		// delete pAccount;//Destructor otomatik olarak çaðýrýlýr.
		//
	#pragma endregion


	auto sayi = 10;  // sayi deðiþkeni int olarak belirlenir.
	auto metin = "Hello C++";
	auto ondalik = 3.14;
	cout << sayi << endl;

	cout << metin<< endl;
	cout << ondalik;

	cout << "Toplam: " << topla(3, 2) << endl;
	cout << "Çýkarma: " << cikar(3, 2) << endl;

	auto sonuc = cikar(20, 30);

	cout << typeid(decltype(sonuc)).name();


	//struct: Üyeler doðrudan eriþilebilir.(default deðer)

	return 0;

}