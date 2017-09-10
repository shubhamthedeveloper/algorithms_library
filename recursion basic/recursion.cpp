#include <iostream>
using namespace std;

int fact(int n) {
	if (n == 0) {
		return 1;
	}
	int smallAnswer = fact(n - 1);
	int ans = n * smallAnswer;
	return ans;
}

bool isSorted2(int a[], int n, int startIndex) {
	if (startIndex == n - 1 || startIndex == n) {
		return true;
	}
	if (a[startIndex] > a[startIndex + 1]) {
		return false;
	}
	bool smallAns = isSorted2(a, n, startIndex + 1);
	return smallAns;
}

void insertStar(char str[], int startIndex) {
	if (str[startIndex] == '\0' || str[startIndex + 1] == '\0') {
		return;
	}
	if (str[startIndex] == str[startIndex + 1]) {
		int len = strlen(str);
		for (int i = len; i > startIndex; i--) {
			str[i + 1] = str[i];
		}
		str[startIndex + 1] = '*';
		insertStar(str, startIndex + 2);
	} else {
		insertStar(str, startIndex + 1);
	}
}

bool isSorted(int a[], int n) {
	if (n == 0 || n == 1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}

	int b[100];
	for (int i = 1; i < n; i++) {
		b[i - 1] = a[i];
	}

	bool isSmallerSorted = isSorted(b, n - 1);
	if (isSmallerSorted) {
		return true;
	} else {
		return false;
	}
}

int fib(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	int smallAns1 = fib(n - 1);
	int smallAns2 = fib(n - 2);
	int ans = smallAns1 + smallAns2;
	return ans;
}

int multiply(int a, int b) {
	if (b == 0) {
		return 0;
	}

	int smallAns = multiply(a , b - 1);
	int ans = smallAns + a;
	return ans;
}

int main() {
	int n;
	cin >> n;
	cout << fact(n);
	char str[100];
	cin >> str;
	insertStar(str, 0);
	cout << str << endl;
}

