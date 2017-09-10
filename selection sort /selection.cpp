#include <iostream>
using namespace std;

void selection(int a[], int size) {
	int i = 0;
	while (i < size) {
		int min = a[i];
		int j = i;
		int minIndex = i;
		while (j < size) {
			if (a[j] < min) {
				min = a[j];
				minIndex = j;
			}
			j++;
		}
		a[minIndex] = a[i];
		a[i] = min;
		i++;
	}
}

int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	selection(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}

