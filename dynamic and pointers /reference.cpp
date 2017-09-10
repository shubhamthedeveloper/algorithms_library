#include <iostream>
using namespace std;

void increment(int & i) {
	i++;
}

int& blah() {
	int i = 10;
	return i;
}

int* pointer(int a[], int size) {
	int i = 10;
	return &i;
}

int main() {
	int & k = blah();

	int x = 12;
	increment(x);
	cout << x << endl;

	int i = 10;
	int & j = i;
	int p = 11;
	j = p;

	cout << i << j << endl;
	cout << &i  << endl;
	cout << &j << endl;
	i++;
	cout << j << endl;
}

