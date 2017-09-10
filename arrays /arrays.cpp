#include <iostream>
#include <climits>
using namespace std;

int main() {
	int a[100];

	int n;
	cout << "How many numbers do you want in your array?" << endl;
	cin >> n;
	//int a[n];
	int i = 0;
	while (i < n) {
		cin >> a[i];
		i++;
	}
	
	i = 0;
	while (i < n) {
		cout << i << ":" << a[i] << endl;
		i++;
	}

	// largest
	int largest = INT_MIN;
	i = 0;
	while (i < n) {
		if (a[i] > largest) {
			largest = a[i];
		}
		i++;
	}
	cout << largest << endl;




}

