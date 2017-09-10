#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<char*, int> map;
	char a[] = "abc";
	char b[] = "def";
	char c[] = "ghi";
	map[b] = 134;
	map[a] = 10;
	map[c] = 43;

	char d[] = "jkl";
	cout << map.size() << endl;
	if (map.count(d) == 0) {
		cout << "0" << endl;
	} else {
		cout << "Something else" << endl;
	}
	cout << map.size() << endl;

	unordered_map<char*, int>::iterator sr = map.find(a);
	if (sr != map.end()) {
		cout << sr->second << endl;
	}

	unordered_map<char*, int>::iterator it1 = map.begin();
	while (it1 != map.end()) {
		cout << it1->first << endl;
		cout << it1->second << endl;
		it1++;
	}


	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	vector<int>::iterator it = v.begin();
	cout << *it << endl;
	it++;
	cout << *it << endl;
	it = v.begin();
	while (it != v.end()) {
		cout << *it << endl;
		it++;
	}
}

