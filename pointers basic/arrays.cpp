#include <iostream>
using namespace std;

int binSearch(int a[], int element, int size) {
	if (size <= 0) {
		return -1;
	}

	int mid = size/2;
	if (a[mid] == element) {
		return mid;
	} else if (a[mid] > element) {
		return binSearch(a, element, mid)
	} else {
		return mid + 1 
			+ binSearch(a + mid + 1, element, size - mid - 1);
	}
}

bool isSorted(int a[], int size) {
	if (size == 0 || size == 1) {
		return true;
	}
	if (a[0] > a[1]) {
		return false;
	}
	return isSorted(a + 1, size - 1);
}

int main() {
	int a[10] = {1,2};
	cout << *a << endl;
	cout << sizeof(a) << endl;
	cout << isSorted(a, 10);
}

