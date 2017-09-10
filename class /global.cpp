#include <iostream>
using namespace std;
int j = 10;

void f(int& i) {
	i++;
	j++;
	cout << i << endl;
}

int main() {
	int i = 10;
	j++;
	cout << i << endl;
	f(i);
}

