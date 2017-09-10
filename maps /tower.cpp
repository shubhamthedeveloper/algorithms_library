#include <iostream>
#include <stack>
using namespace std;

class StackEntry {
	public:
		StackEntry(int n, char a, char b, char c) {
			this->n = n;
			this->a = a;
			this->b = b;
			this->c = c;
			this->isSingle = false;
		}

		StackEntry(int n, char a, char c) {
			this->isSingle = true;
			this->n = n;
			this->a = a;
			this->c = c;
		}

	bool isSingle;
	int n;
	char a;
	char b;
	char c;
};

void tower(int n, char a, char b, char c) {
	stack<StackEntry> s;
	StackEntry s1(n, a, b, c);
	s.push(s1);
	int i = 0;
	while (!s.empty()) {
		StackEntry front = s.top();
		s.pop();
		if (front.isSingle) {
			cout << "Move " << front.n << "th disc from " << front.a << " to " << front.c << endl;
			i++;
		} else {
			if (front.n == 1) {
				cout << "Move 1st disc from " << front.a << " to " << front.c << endl;
				i++;
			} else {
				StackEntry s2(front.n - 1, front.a, front.c, front.b);
				StackEntry s3(front.n, front.a, front.c);
				StackEntry s4(front.n - 1, front.b, front.a, front.c);
				s.push(s4);
				s.push(s3);
				s.push(s2);
			}
		}
	}
	cout << i << endl;
}

int main() {
	tower(5, 'a', 'b', 'c');
}

