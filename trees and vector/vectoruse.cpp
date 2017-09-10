#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a;
	a.push_back(10);
	int element = a.at(0);
	element = a[0];

	cout << a[3] << endl;
	cout << a.at(3) << endl;

}

