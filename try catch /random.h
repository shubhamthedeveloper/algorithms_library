#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
class random1 {
	int r;
	int n;
	static bool done;
	public:
	random1() {
		if (!done) {
			srand(time(NULL));
			done = true;
		}
		n = 0;
	}

	void add(int num) {
		n++;
		int ran = rand();
		ran = ran % n;
		if (ran == 0) {
			r = num;
		}
	}

	int getRandom() {
		if (n == 0) {
			throw "No number";
		}
		return r;
	}

};
bool random1::done = false;
