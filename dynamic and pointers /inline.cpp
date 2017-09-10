#include <iostream>
using namespace std;

inline int min(int a, int b) {
	return (a > b)? b : a;
}

int main() {
	int a = 10;
	int b = 12;

	int c = min(a, b);


	int d = min(b, c);

}

