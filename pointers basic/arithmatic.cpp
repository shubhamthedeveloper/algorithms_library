#include <iostream>
using namespace std;

int main() {

	char c = 'd';
	char * pc = &c;
	cout << pc << endl;
	pc = pc + 1;
	cout << pc << endl;

	int i = 10;
	int * p = &i;
	i = i + 1;
	*p = *p + 1;
	cout << i << endl;
	cout << p << endl;
	p = p + 1;
	cout << p << endl;
}

