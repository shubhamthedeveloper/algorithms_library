#include <iostream>
using namespace std;

void sum(int a[], int b[], int n1, int n2, int c[]) {
	int outputSize = max(n1, n2) + 1;
	int i = n1 - 1;
	int j = n2 - 1;
	int k = outputSize - 1;
	int carry = 0;
	while (i >= 0 || j >= 0) {
		int num = carry;
		if (i >= 0) {
			num  = num + a[i];
			i--;
		}
		if (j >= 0) {
			num = num + b[j];
			j--;
		}
		c[k] = num % 10;
		carry = num/10;
		k--;
	}
	c[k] = carry;
	/*
	while (i >= 0 && j >= 0) {
		int num = a[i] + b[j] + carry;
		c[k] = num % 10;
		carry = num/10;
		i--;
		j--;
		k--;
	}
	while (i >= 0) {
		int num = a[i] + carry;
		c[k] = num % 10;
		carry = num/10;
		i--;
		k--;
	}
	c[k] = carry;
*/
}

int main() {
	int a[100];
	int b[100];
	int n;
	cin >> n;
	int i = 0;
	while (i < n) {
		cin >> a[i];
		i++;
	}
	int n2;
	cin >> n2;
	i = 0;
	while (i < n2) {
		cin >> b[i];
		i++;
	}
	int c[100];
	sum(a, b,n, n2, c);
}

