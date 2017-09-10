#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int currentNumber = 2;
	while (currentNumber <= n) {
		int d = 2;
		while (d < currentNumber) {
			if (currentNumber % d == 0) {
				break;
			}
			d++;
		}
		if (d == currentNumber) {
			cout << currentNumber << endl;
		}
		currentNumber++;
	}




	int i = 0;
	while (i < 10) {
		if (i == 1) {
			i++;
			continue;
		}
		if (i == 3) {
			break;
		}
		cout << i << endl;
		i++;
	}
	cout << i << endl;
}

