#include <iostream>
using namespace std;

void print_array(int a[], int size) {
	int i = 0;
	//int size = sizeof(a)/sizeof(int);
	//cout << "size is " << size << endl;
	cout << sizeof(a) << endl;
	while (i < size) {
		cout << a[i] << endl;
		i++;
	}
}

void copy(int a[], int size, int output[]) {

}

void reverse(int a[], int size) {
	
}

void increment(int a[]) {
	a[2] = a[2] + 1;
}

int main() {
	int b[10];
	b[2] = 0;
	increment(b);
	cout << b[2] << endl;

	int i;
	cout << i << endl;
	cout << sizeof(i) << endl;

	int a[100];
	cout << a << endl;
	cout << sizeof(a) << endl;
	cout << sizeof(a)/sizeof(int) << endl;
	int n;
	cin >> n;
	i = 0;
	while (i < n) {
		cin >> a[i];
		i++;
	}

	print_array(a, n);




}

