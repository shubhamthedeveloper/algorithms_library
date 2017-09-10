#include <iostream>
using namespace std;

int main() {
	int i = 10;

	++(++i);

	(i++)++;

	int j = 12;
	int k = 124;

	(j = k)++;
	cout << i << endl;
	cout << j << endl;
	cout << k << endl;
}

