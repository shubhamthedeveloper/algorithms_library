#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 2;
	while (i < n) {
		if (n % i == 0) {
			cout << "Not Prime" << endl;
			return 0;
		}
		i = i + 1;
	}
	cout << "Prime" << endl;
	/*
	bool flag = false;
	while (i < n) {
		if (n % i == 0) {
			flag = true;
		}
		i = i + 1;
	}
	if (flag) {
		cout << "Not prime" << endl;
	} else {
		cout << "Prime" << endl;
	}
	*/
}

