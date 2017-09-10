#include <iostream>
using namespace std;

void printAllPossibleCodesHelper(char input[], char output[], int size) {
	if (input[0] == '\0') {
		cout << output << endl;
		return;
	}
	output[size] = 'a' + input[0] - '1';
	output[size + 1] = '\0';
	printAllPossibleCodesHelper(input + 1, output, size + 1);

	if (input[1] == '\0') {
		return;
	}

	int numberFromFirstTwo = 
		(input[0] - '0') * 10 + (input[1] - '0'); 
	if (numberFromFirstTwo <= 26) {
		output[size] = 'a' + numberFromFirstTwo - 1;
		output[size + 1] = '\0';
		printAllPossibleCodesHelper(input + 2, output, size + 1);
	}
}

void printAllPossibleCodes(char input[]) {
	char outputsofar[100];
	outputsofar[0] = '\0';
	printAllPossibleCodesHelper(input, outputsofar, 0);
}

int main() {
	printAllPossibleCodes("1123");
}

