#include <iostream>
using namespace std;

int* f() {
	int* p = new int;
	cout << p << endl;
	*p = 12;
	return p;
}

int main() {

	int * p = new int;
	*p = 10;
	delete p;
	//p = 0;
	cout << p << endl;
	cout << *p << endl;
	int * d = f();
	cout << d << endl;
	delete d;
	cout << *p << endl;
}
