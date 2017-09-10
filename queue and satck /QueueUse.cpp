#include <iostream>
#include "QueueUsingArray.h"
using namespace std;

int main() {
	QueueUsingArray<int> q;
	for (int i = 10; i < 25; i++) {
		q.enqueue(i);
	}

	while (!q.isEmpty()) {
		cout << q.front() << endl;
		cout << q.dequeue() << endl;
	}
}

