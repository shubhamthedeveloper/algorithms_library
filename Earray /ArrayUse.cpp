#include <iostream>
#include "EArray.cpp"
using namespace std;

int main() {

	EArray<Student> s;

	EArray<double> b;

	EArray<int> a;
	for (int i = 0; i < 100; i++) {
		a.add(10 + i);
	}
	
	for (int i = 0; i < a.size(); i++) {
		cout << a.get(i) << endl;
	}

	while (!a.isEmpty()) {
		cout << a.removeLast() << endl;
	}

}

