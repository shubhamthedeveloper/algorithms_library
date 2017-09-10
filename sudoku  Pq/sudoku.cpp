#include <iostream>
using namespace std;

vector<int> getOptions(int board[][9], int x, int y) {
	bool options[10];
	for (int i = 1; i < 10; i++) {
		options[i] = true;
	}

	for (int j = 0; j < 9; j++) {
		options[board[x][j]] = false;
	}
	
	for (int j = 0; j < 9; j++) {
		options[board[j][y]] = false;
	}

	int bx = x/3;
	int by = y/3;

	int bStartX = bx * 3;
	int bStartY = by * 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			options[board[bStartX + i][bStartY + j]] = false;
		}
	}
	vector<int> output;
	for (int i = 1; i <= 9; i++) {
		if (options[i]) {
			output.push_back(i);
		}
	}
	return output;
}

bool sudokuSolver(int board[][9]){
	int emptyCellX = -1;
	int emptyCellY = -1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (board[i][j] == 0) {
				emptyCellX = i;
				emptyCellY = j;
				break;
			}
		}
		if (emptyCellX != -1) {
			break;
		}
	}

	if (emptyCellX == -1) {
		return true;
	}

	vector<int> options = getOptions(board, emptyCellX, emptyCellY);
	for (int i = 0; i < options.size(); i++) {
		board[emptyCellX][emptyCellY] = options[i];
		bool solved = sudokuSolver(board);
		if (solved) {
			return true;
		}
		board[emptyCellX][emptyCellY] = 0;
	}
	return false;
}

int main() {

}

