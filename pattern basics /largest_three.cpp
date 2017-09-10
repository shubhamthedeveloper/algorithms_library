#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	cout << "Enter numbers" << "\n";
	cin >> a >> b >> c;

	int i = 10;
	if (i > 0) {
		cout << 0 << endl;
	} else if (i > 5) {
		cout << 5 << endl;
	} 


	if (i > 0) {
		cout << 0 << endl;
	} else if (i > 5) {
		cout << 5 << endl;
	} else {
		cout << 10 << endl;
	}

	if (a >= b && a >= c) {
		cout << a << endl;
	} else if (b >= a && b >= c) {
		cout << b << endl;
	} else {
		cout << c << endl;
	}


	if (a >= b && a >= c) {
		cout << a << endl;
	} else {
		if (b >= c && b >= a) {
			cout << b << endl;
		} else {
			cout << c << endl;
		}
	}

}
