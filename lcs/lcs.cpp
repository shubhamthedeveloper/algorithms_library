#include <iostream>
using namespace std;

int lcs2Helper(char* s1, char* s2, int** output, int m, int n) {
	if (s1[0] == '\0' || s2[0] == '\0') {
		return 0;
	}

	if (output[m][n] >= 0) {
		return output[m][n];
	}

	int ans = 0;
	if (s1[0] == s2[0]) {
		ans =  lcs2Helper(s1 + 1, s2 + 1, output, m - 1, n - 1) + 1;
	} else {
		int option1 = lcs2Helper(s1 + 1, s2, output, m - 1, n);
		int option2 = lcs2Helper(s1, s2 + 1, output, m , n - 1);
		ans =  max(option1, option2);
	}
	output[m][n] = ans;
	return ans;
}

int lcsIter(char* s1, char* s2) {
	int m = strlen(s1);
	int n = strlen(s2);
	int** output = new int*[m + 1];
	for (int i = 0; i <= m; i++) {
		output[i] = new int[n + 1];
		for (int j = 0; j <= n; j++) {
			output[i][j] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (s1[m - i] == s2[n - j]) {
				output[i][j] = output[i - 1][j - 1]  + 1;
			} else {
				output[i][j] = max(output[i - 1][j], output[i][j - 1]);
			}
		}
	}
	return output[m][n];
	// TODO delete
}

int lcs2(char* s1, char* s2) {
	int m = strlen(s1);
	int n = strlen(s2);
	int** output = new int*[m + 1];
	for (int i = 0; i <= m; i++) {
		output[i] = new int[n + 1];
		for (int j = 0; j <= n; j++) {
			output[i][j] = -1;
		}
	}
	int ans = lcs2Helper(s1, s2, output, m, n);
	// delete output
	return ans;
}

int lcs(char* s1, char* s2) {
	if (s1[0] == '\0' || s2[0] == '\0') {
		return 0;
	}

	if (s1[0] == s2[0]) {
		return lcs(s1 + 1, s2 + 1) + 1;
	} else {
		int option1 = lcs(s1 + 1, s2);
		int option2 = lcs(s1, s2 + 1);
		return max(option1, option2);
	}
}

int main() {
	char a[] = "abcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdef";
	char b[] = "123445123445123445123445123445123445123445123445123445123445";
	cout << lcs2(a, b) << endl;
	cout << lcs(a, b) << endl;
}

