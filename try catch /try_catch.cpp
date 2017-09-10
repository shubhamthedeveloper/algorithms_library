#include <iostream>
using namespace std;

int fact(int n) {
	if (n < -10) {
		throw 10;
	}
	if (n < 0) {
		throw "Bad number Exception";
	}
	if (n == 0) {
		return 1;
	}
	return n * fact(n - 1);
}

int main() {

	char* path;
	cin >> path;

	try {
		char* output = openFile(path);
	} catch (FileNotFoundException e) {

	} catch (FilePermissionNotAvailable e) {

	}

	int n;
	bool done = false;
	while (!done) {
		cin >> n;
		try {
			cout << fact(n) << endl;
			done = true;
		} catch(int i) {
			cout << i << endl;
		} catch(char const * exception) {
			cout << exception << endl;
		}
	}
	cout << 1 << endl;
}




