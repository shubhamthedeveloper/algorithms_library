#include <iostream>
using namespace std;

int subs(char input[], int si, char output[][100]) {
	if (input[si] == '\0') {
		output[0][0] = '\0';
		return 1;
	}
	int smallOutputSize = subs(input, si + 1, output);
	for (int i = 0; i < smallOutputSize; i++) {
		int outRow = i + smallOutputSize;
		output[outRow][0] = input[si];
		int j = 0;
		for (; output[i][j] != '\0'; j++) {
			output[outRow][j + 1] = output[i][j];
		}
		output[outRow][j + 1] = '\0';
	}
	return smallOutputSize * 2;
}

int main() {
	char input[] = "abcd";
	char output[1000][100];
	int size = subs(input, 0, output);
	for (int i = 0; i < size; i++) {
		cout << output[i] << endl;
	}
}

