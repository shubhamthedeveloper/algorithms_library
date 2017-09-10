#include <iostream>
using namespace std;

int main() {
	int temp = 97;
	int* pt = &temp;
	char * ptc = (char *)pt;

	cout << pt << endl;
	cout << *pt << endl;
	cout << *(ptc + 0) << endl;
	cout << *(ptc + 1) << endl;
	cout << *(ptc + 2) << endl;
	cout << *(ptc + 3) << endl;

	int a[] = {1,2};
	cout << a << endl;
	int* pi = a;

	char s[] = "abcd";
	cout << s << endl;

	char * pc2 = s;
	cout << pc2 << endl;

	int i = 10;
	int * p = &i;

	float * pd = (float *)p;
	cout << p << endl;
	cout << pd << endl;

	p = p + 1;
	pd = pd + 1;

	cout << *p << endl;
	cout << *pd << endl;
}

