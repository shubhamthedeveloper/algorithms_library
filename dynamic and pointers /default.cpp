#include <iostream>
using namespace std;

int sum(int * a, int size = 10, int startIndex = 0) {
	if (startIndex == size) {
		return 0;
	}
	return a[startIndex] + sum(a, size, startIndex + 1);
}

//int sum(int* a, int size) {
//	return sum(a, size, 0);
//}


int main() {
	int a[] = {1,2,3,4,4};
	cout << sum(a, 4, 2);
}

