#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char c;
	c = cin.get();
	while (c != '$') {
		if (c == '\n') {
			cout << "Got Enter";
		} else {
			cout << c;
		}
		c = cin.get();
	}
}

