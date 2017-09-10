#include <iostream>
#include "StackUsingArray.h"
using namespace std;

bool isBalanced(char* input) {
	StackUsingArray s;
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] == '(' ||
				input[i] == '[' ||
				input[i] == '{') {
			s.push(input[i]);
		} else if (input[i] == ')') {
			if (s.isEmpty() || s.pop() != '(') {
				return false;
			}
		} else if (input[i] == ']') {
			if (s.isEmpty() || s.pop() != '[') {
				return false;
			}
		} else if (input[i] == '}') {
			if (s.isEmpty() || s.pop() != '{') {
				return false;
			}
		}
	}
	return s.isEmpty();
}

int main() {
	//StackUsingArray s;
	StackUsingArray * sp = new StackUsingArray();
	sp->push(11);
	sp->push(123);
	sp->push(121);

	while (!sp->isEmpty()) {
		cout << sp->top() << endl;
	  cout << sp->pop() << endl;
	}

	delete sp;
}

