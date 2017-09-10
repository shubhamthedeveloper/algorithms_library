#include <iostream>
using namespace std;

int numWays(int v, int* d, int size, int** out) {
	if (v == 0) {
		return 1;
	}

	if (v < 0) {
		return 0;
	}

	if (size == 0) {
		return 0;
	}
	if (out[v][size] > -1) {
		return out[v][size];
	}

	out[v][size] =  numWays(v - d[0], d, size) + numWays(v, d + 1, size - 1);
	return out[v][size];
}

int main() {

}

