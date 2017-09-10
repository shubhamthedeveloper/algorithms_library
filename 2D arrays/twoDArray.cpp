#include <iostream>
using namespace std;

void print(int a[][100], int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int a[100][100];
	cout << "Enter num rows and columns" << endl;
	int m;
	int n;
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	print(a, m, n);
}

