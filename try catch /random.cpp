#include <iostream>
#include "random.h"
#include <map>
using namespace std;

int main() {
	map<int, int> output;
	for (int i = 0; i < 1000000; i++) {
		random1 r;
		for (int j = 1; j <= 4; j++) {
			r.add(j);
		}
		output[r.getRandom()]++;
	}
	for (int j = 1; j <= 4; j++) {
		cout << j << " : " << output[j] << endl;
	}
}

