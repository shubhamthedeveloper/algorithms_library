#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	cin >> a >> b >> c >> d >> e;
	int minimum = a;
	if (b < minimum) {
		minimum = b;
	}

	if (c < minimum) {
		minimum = c;
	}

	if (d < minimum) {
		minimum = d;
	}

	if (e < minimum) {
		minimum = e;
	}
	cout << minimum << endl;
}

