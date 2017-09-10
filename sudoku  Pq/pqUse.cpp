#include <iostream>
#include "pq.h"
using namespace std;

vector<int> findKMax(vector<int> input, int k ) {
	if (k >= input.size()) {
		return input;
	}

	pq heap;
	for (int i = 0; i < k; i++) {
		heap.insert(input[i]);
	}

	for (int i = k; i < input.size(); i++) {
		if (input[i] > heap.min()) {
			heap.removeMin();
			heap.insert(input[i]);
		}
	}

	vector<int> output;
	while (!heap.isEmpty()) {
		output.push_back(heap.removeMin());
	}
	return output;
}

int main() {

	int n;
	cin >> n;
	vector<int> input;
	for (int i = 0; i < n; i++) {
		int next;
		cin >> next;
		input.push_back(next);
	}

	int k;
	cin >> k;
	vector<int> ans = findKMax(input, k);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
	return 0;
	pq abc;
	for (int i = 10; i > 0; i--) {
		abc.insert(i);
	}

	while (!abc.isEmpty()) {
		cout << abc.removeMin() << endl;
	}

}

