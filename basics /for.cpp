#include <iostream>
using namespace std;

int main() {

	for (int j = 0, n = 10; j < n, n < 30; j = j + 2, n++) {
		if (j == 3) {
			continue;
		}
		cout << j << endl;
	}
	
	int i = 0;
	int n = 10;
	while (i < n) {

		i++;
	}


}

