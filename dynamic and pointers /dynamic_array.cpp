#include <iostream>
using namespace std;

int sum(int** array2D, int m, int n) {

}

int main() {

	int** array2D = new int*[10];

	for (int i = 0; i < 10; i++) {
		array2D[i] = new int[8];
		for (int j = 0; j < 8; j++) {
			cin >> array2D[i][j];
		}
	}

	cout << array2D[0] << endl;
	delete [] array2D[0];
	array2D[0] = new int[8];

	int x;
	cin >> x;

	int * p = new int[x];
	for (int i = 0; i < x; i++) {
		cin >> p[i];
	}

	delete [] p;
}

