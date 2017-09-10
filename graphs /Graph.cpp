#include <iostream>
using namespace std;

vector<int>* hasPathBFS(int sv, int ev, int num, bool** edges) {
	queue<int> pending;
	bool* visited = new bool[num + 1];
	int* parent = new int[num + 1];
	for (int i =1 ; i <= num; i++) {
		visited[i] = false;
		parent[i] = 0;
	}

	pending.push(sv);
	parent[sv] = 0;

	while (!pending.empty()) {
		int first = pending.front();
		pending.pop();
		if (first == ev) {
			vector<int>* output = new vector<int>();
			int current = ev;
			output->push_back(ev);
			while (current != sv) {
				current = parent[current];
				output->push_back(current);
			}
			return output;
		}
		visited[first] = true;
		for (int i = 1; i <= num; i++) {
			if (edges[first][i]) {
				if (!visited[i]) {
					parent[i] = first;
					pending.push(i);
				}
			}
		}
	}
	return NULL;
}

bool hasPath(int sv, int ev, int num, bool** edges, bool* visited) {
	if (edges[sv][ev]) {
		return true;
	}

	visited[sv] = true;

	for (int i = 1; i <= num; i++) {
		if (edges[sv][i]) {
			if (!visited[i]) {
				if (hasPath(i, ev, num, edges, visited)) {
					return true;
				}
			}
		}
	}
	return false;
}


int main() {
	int n;
	int m;
	cin >> n;
	cin >> m;


	bool** edges = new bool*[n + 1];
	for (int i = 1; i <= n; i++) {
		edges[i] = new bool[n + 1];
		for (int j = 1; j <= n; j++) {
			edges[i][j] = false;
		}
	}

	for (int i = 0; i < m; i++) {
		int first;
		int second;
		cin >> first >> second;
		edges[first][second] = true;
		edges[second][first] = true;
	}

	bool* visited = new bool[n + 1];
	for (int i = 1; i <= n; i++) {
		visited[i] = false;
	}

	int start, end;
	cin >> start >> end;
	cout << hasPath(start, end, n, edges, visited) << endl;
	

}

