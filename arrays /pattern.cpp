#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int inc = (n + 1)/2;
	int i = 1;
	while (i <= inc) {
		int current = 1 + 2*n*(i - 1);
		int j = 1;
		while (j <= n) {
			cout << current << " ";
			current++;
			j++;
		}
		cout << endl;
		i++;
	}
	i = n / 2;
	while (i >= 1) {
		int current = 1 + 2*n*(i - 1) + n;
		int j = 1;
		while (j <= n) {
			cout << current << " ";
			current++;
			j++;
		}
		cout << endl;
		i--;
	}
}

