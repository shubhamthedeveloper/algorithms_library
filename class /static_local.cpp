#include <iostream>
using namespace std;

int fact(int n) {
	if (n == 0) {
		return 1;
	}
	static int ans = 1;
	ans = ans * n;
	fact(n - 1);
	return ans;
}

int main() {
	cout << fact(5) << endl;
	cout << fact(4) << endl;
}

