#include <iostream>
using namespace std;

class Fraction {
	int num;
	int den;


	void simplify() {
		int gcd = 1;
		int minBoth = min(num, den);
		for (int i = 2; i <= minBoth; i++) {
			if (num % i == 0 && den % i == 0) {
				gcd = i;
			}
		}
		num = num/gcd;
		den = den/gcd;
	}

	public:
	Fraction() {
		num = 0;
		den = 1;
	}

	Fraction(int n, int d) {
		if (d == 0) {
			num = 0;
			den = 1;
		} else {
			num = n;
			den = d;
			simplify();
		}
	}

	void add(Fraction f2) {
		this->num = this->num * f2.den + this->den * f2.num;
		this->den = this->den * f2.den;
		simplify();
	}

	void multiply(Fraction f2) {
		this->num = this->num * f2.num;
		this->den = this->den * f2.den;
		simplify();
		/*
		cout << num << endl;
		cout << den << endl;
		cout << f2.num << endl;
		cout << f2.den << endl;
		*/
	}

	int getNum() {
		return num;
	}

	void setNum(int num) {
		this->num = num;
		simplify();
	}
	
	int getDen() {
		return den;
	}

	void setDen(int den) {
		if (den == 0) {
			return;
		}
		this->den = den;
		simplify();
	}
	
	void print() {
		if (den == 1) {
			cout << num << endl;
		} else {
			cout << num << "/" << den << endl;
		}
	}


};

int main() {
	Fraction f1(3,4);
	f1.print();

	Fraction f;
	f.print();
	cout << &f << endl;
	f.setNum(10);
	f.setDen(12);
	f.print();
	
	f.multiply(f1);

}

