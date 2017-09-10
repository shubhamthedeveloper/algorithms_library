#include <iostream>
using namespace std;

int maxSumPath(int a[], int b[], int n1, int n2) {
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int j = 0;
	while (i < n1 && j < n2) {
		if (a[i] < b[j]) {
			sum1 = sum1 + a[i];
			i++;
		} else if (a[i] > b[j]) {
			sum2 = sum2 + b[j];
			j++;
		} else {
			if (sum1 > sum2) {
				sum = sum + sum1;
			} else {
				sum = sum + sum2;
			}
			sum = sum + a[i];
			i++;
			j++;
			sum1 = 0;
			sum2 = 0;
		}
	}
	while (i < n1) {
		sum1 = sum1 + a[i];
		i++;
	}
	
	while (j < n2) {
		sum2 = sum2 + b[j];
		j++;
	}
	if (sum1 > sum2) {
		sum = sum + sum1;
	} else {
		sum = sum + sum2;
	}

	return sum;
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
	 cout << maxSumPath(a, b,n, n2);
}

