#include <iostream>
using namespace std;

int towerOfHanoi(int n, char S, char H, char D) {
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		cout << "Move 1st disk from " << S << " to " << D << endl;
		return 1;
	}
	int output = towerOfHanoi(n - 1, S, D, H);
	cout << "Move " << n << "th disc from ";
	cout << S << " to " << D << endl;
	output++;
	output = output + towerOfHanoi(n - 1, H, S, D);
	return output;
}

int main() {
	cout << towerOfHanoi(10, 'A', 'B', 'C') << endl;	
}
