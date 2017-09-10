#include <iostream>
#include <climits>
using namespace std;

int main() {
	int b = INT_MAX;
	cout << b << endl;
	// should be half of b
	int d = b >> 1;
	cout << d << endl;

	// should become negative as sign bit becomes negative
	int c  = b << 1;
	cout << c << endl;


	int cr = c >> 1;
	cout << cr << endl;

	int a = 4 << 1;
	cout << a << endl;

}

