#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	int val = 1;
	while (i <= n) {
		int col = 1;
		while (col <= i) {
			cout << val;
			val = val + 1;
			col = col + 1;
		}
		cout << endl;
		i = i + 1;
	}
}

