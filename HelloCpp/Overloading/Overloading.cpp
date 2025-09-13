#include <iostream>

using namespace std;


class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) {
        real = r;
		imag = i;
    }
    //+ operatörü aþýrý yükleme
    // c1 + c2 = c1.topla(c2)
    Complex operator+(const Complex& other) {
		return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) {
		return Complex(real - other.real, imag - other.imag);
    }

    void display() {
		cout << real << " + " << imag << "i" << endl;
    }
};



class Kare {
    private:
        double kenar;
    public:
	    Kare(double k = 1) {
		    kenar = k;
	    }

        Kare operator+(const Kare& other) {
			return Kare(kenar + other.kenar);
        }
        friend ostream& operator<<(ostream& os, const Kare& k) {
			return os << "Kenar uzunlugu: " << k.kenar << ", " << "Alan: " << (k.kenar*k.kenar);
            
        }
};






int main()
{
    Complex c1(1, 2);
	Complex c2(3.3, 4.4);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
	c3.display();
	c4.display();


	Kare k1(4);
	Kare k2(5);
	Kare k3 = k1 + k2;
	cout << k3 << endl;
	return 0;
}







