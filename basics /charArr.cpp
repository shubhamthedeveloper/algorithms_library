#include <iostream>
using namespace std;

void print(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i];
		i++;
	}
}

int length(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

bool isPal(char str[]) {
	int l = length(str);
	int first = 0;
	int lastIndex = l - 1;
	while (first < lastIndex) {
		if (str[first] != str[lastIndex]) {
			return false;
		}
		first++;
		lastIndex--;
	}
	return true;
}



int main() {
	char carr[100];
	//cin >> carr;
	cin.getline(carr, 100);	
	print(carr);
	cout << endl;
	cout << length(carr) << endl;
	cout << isPal(carr) << endl;
	//cout << carr;
}

