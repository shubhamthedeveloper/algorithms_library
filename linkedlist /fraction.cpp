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

	static Fraction addDifferentTwo(Fraction const & f1,
			Fraction const & f2) {
		Fraction f;
		f.num = f1.num * f2.den + f1.den * f2.num;
		f.den = f1.den * f2.den;
		return f;
	}

	Fraction addDifferentOne(Fraction const & f2) const {
		int num = this->num * f2.den + this->den * f2.num;
		int den = this->den * f2.den;
		Fraction f(num, den);
		return f;
	}

	void add(Fraction const & f2) {
		num = this->num * f2.den + this->den * f2.num;
		den = this->den * f2.den;
		simplify();
	}

	void multiply(Fraction const & f2) {
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

	int getNum() const {
		return num;
	}

	void setNum(int num) {
		this->num = num;
		simplify();
	}
	
	int getDen() const {
		return den;
	}

	void setDen(int den) {
		if (den == 0) {
			return;
		}
		this->den = den;
		simplify();
	}

	void operator+= (Fraction const & f2) {
		this->num = this->num*f2.den + this->den * f2.num;
		this->den = this->den * f2.den;
		this->simplify();
	}

	Fraction operator+ (Fraction f2) const {
		Fraction f3;
		f3.setNum(this->num*f2.den + this->den * f2.num);
		f3.setDen(this->den * f2.den);
		return f3;
	}

	// post
	fraction operator++ (int) {
		Fraction f(*this);
		num = num + den;
		simplify();
		return f;
	}

	// pre
	fraction& operator++ () {
		num = num + den;
		simplify();
		return *this;
	}

	void print() const {
		if (den == 1) {
			cout << num << endl;
		} else {
			cout << num << "/" << den << endl;
		}
	}


};

int main() {
	Fraction f1(3,4);

	const int i = 10;
	const Fraction cf3(4, 5);

	cf3.setNum(1);
	int k = cf3.getNum();

	Fraction f;
	f.setNum(10);
	f.setDen(12);
	f.print();
	f1.print();
	f += f1;
	f.print();
	f1.print();

	Fraction f9 = f + f1;
	f9.print();
	return 0;

	f.multiply(f1);
	Fraction f3 = f.addDifferentOne(f1);

	Fraction f4 = Fraction::addDifferentTwo(f, f1);
	Fraction f5 = Fraction::addDifferentTwo(f, f1);
	Fraction f6 = Fraction::addDifferentTwo(f, f1);
}





