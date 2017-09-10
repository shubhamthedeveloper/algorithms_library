#include <iostream>
using namespace std;

void print(int i) {
	int j = 1;
	while (j <= i) {
		cout << j;
		j++;
	}
}

void increment(int i) {
	i = i + 1;
}

int main() {
	int i = 10;
	increment(i);
	cout << i << endl;
}

