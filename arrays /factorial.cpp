#include <iostream>
using namespace std;

int factorial(int n) {
	int output = 1;
	int i = 1;
	while (i <= n) {
		output = output * i;
		i++;
	}
	return output;	
}

bool isUpperCase(char a) {
	if (a >= 'A' && a <= 'Z') {
		return true;
	}
	return false;
}

int ncr(int n, int r) {
	int output1 = factorial(n);
	int output2 = factorial(r);
	int output3 = factorial(n - r);
	int output = output1/(output2*output3);
	return output;
}

int main() {
	int n;
	int r;
	cin >> n;
	cin >> r;
	int output = ncr(n, r);
	cout << output << endl;
}

