#include <iostream>
#define PI 3.14

using namespace std;

void temp(int const * x) {
	cout << PI << endl;
	double d = PI * 2 * 2;
	int a = 10;	
	int i1 = VAR(x);
	cout << i1 << endl;

	int i = 243;
	x = &i;
	(*x)++;
}

int fact(int const & n) {
	return 232;
}

int main() {
	int i3 = 10;
	cout << fact(i3) << endl;
	temp(&i3);
	
	int * const p = &i3;
	(*p)++;
	int i4 = 123;
	p = &i4;

	int const * p2;
	p2 = &i4;
	(*p2)++;

	int const * const p5 = &i4;

	i4 = 1234;
	cout << i4 << endl;
	cout << *p2 << endl;


	const int i1 = 10;
	// invalid int& j1 = i1;
	
	//j1++;
	i1++;

	int i = 10;
	int const & j = i;

	i++;
	// invalid j++;

}

