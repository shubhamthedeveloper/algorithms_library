#include <iostream>
using namespace std;

int main() {
	int f = 0;
	//wrong int c = (5/9)*(f - 32);
	//right int c = (5 * (f - 32))/9;
	while (f <= 300) {
		int c = (5.0/9)*(f - 32);
		cout << f << "\t" << c << endl;
		f = f + 20;
	}
}

