#include <iostream>
using namespace std;

int fibHelper(int n, int* output) {
	if (n == 0 || n == 1) {
		return 1;
	}
	if (output[n] > 0) {
		return output[n];
	}
	int ans = fibHelper(n - 1, output) + fibHelper(n - 2, output);
	output[n] = ans;
	return ans;
}

int fib2(int n) {
	int* output = new int[n + 1];
	for (int i = 0; i <= n; i++) {
		output[i]= 0;
	}
	int ans = fibHelper(n, output);
	delete [] output;
	return ans;
}

int fib(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	cout << fib(10) << endl;
	cout << fib2(50) << endl;
	cout << fib(50) << endl;
}

