#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int64_t, int64_t>* numBBT(int64_t n,
		unordered_map<int64_t, int64_t>** output) {
	if (output[n] != NULL) {
		return output[n];
	}
	unordered_map<int64_t, int64_t>* map = new unordered_map<int64_t, int64_t>();
	if (n == 0) {
		(*map)[0] = 1;
		output[n] = map;
		return map;
	}

	if (n == 1) {
		(*map)[1] = 1;
		output[n] = map;
		return map;
	}
	for (int64_t i = 0; i < n; i++) {
		unordered_map<int64_t, int64_t>*  leftmap = numBBT(i, output);
		unordered_map<int64_t, int64_t>*  rightmap = numBBT(n - i - 1, output);
		unordered_map<int64_t, int64_t>::iterator it = 
			leftmap->begin();
		while (it != leftmap->end()) {
			(*map)[it->first + 1] += it->second * (*rightmap)[it->first];
			(*map)[it->first + 2] += it->second * (*rightmap)[it->first + 1];
			(*map)[it->first + 1] += it->second * (*rightmap)[it->first - 1];
			it++;
		}
	}
	output[n] = map;
	return map;
}

int64_t numBBT1(int64_t n) {
	unordered_map<int64_t, int64_t>** output = 
		new unordered_map<int64_t, int64_t>*[n + 1];
	for (int i = 0; i <= n; i++) {
		output[i] = NULL;
	}
	unordered_map<int64_t, int64_t>* map = numBBT(n, output);
	unordered_map<int64_t, int64_t>::iterator it = map->begin();
	int64_t an = 0;
	while (it != map->end()) {
		if (it->second == 0) {
			it++;
			continue;
		}
		cout << it->first << " " << it->second << endl;
		an += it->second;
		it++;
	}
	return an;
}	

int main() {
	int n;
	cin >> n;
	cout << numBBT1(n) << endl;
}

