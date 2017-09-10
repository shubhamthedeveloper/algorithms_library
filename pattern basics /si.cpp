#include <iostream>
using namespace std;

int main() {
	unsigned int i = 10;
	i = -1;
	cout << i << endl;


	// this is also an integer but it takes 8 bytes
	int64_t k;
	
	float f = 10.23;
	double d = 1022.33;

	i = 122;

	char a = 'a';
	bool done = true;
	done = false;

	int p;
	int r;
	int t;
	
	cout << "Enter p, r & t" << "\n";
	cin >> p;
	cin >> r;
	cin >> t;


	int si = (p * r * t)/100;
	cout << si << "\n";
}
