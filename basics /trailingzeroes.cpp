#include <iostream>
using namespace std;

int trailing(int n) {
	int i = 1;
	int count = 0;
	while (i <= n) {
		int j = i;
		while (j % 5 == 0) {
			count++;
			j = j/5;
		}
		i++;
	}
}

int main() {

}

