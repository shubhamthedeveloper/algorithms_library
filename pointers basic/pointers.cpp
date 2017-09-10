#include <iostream>
using namespace std;

int main() {

	int i1;
	cout << i1 << endl;

	int* p1 = NULL;
	cout << p1 << endl;
	//cout << *p1 << endl;

	int i = 10;
	int * p = &i;
	int** p2 = &p;

	*p = 100;
	cout << i << endl;
	cout << *p << endl;
	cout << **p2 << endl;


	cout << p << endl;
	cout << *p2 << endl;

	char r = *p;

	cout << i << endl;
	cout << *p << endl;
	cout << p << endl;
	cout << &p << endl;

	cout << sizeof(i) << endl;
	cout << sizeof(p) << endl;
}

