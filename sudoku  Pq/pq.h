#include <vector>
using namespace std;
class pq {

	vector<int> data;

	public:
	pq() {
		data.push_back(-1);
	}

	int size() {
		return data.size() - 1;
	}

	bool isEmpty() {
		return size() == 0;
	}

	int min() {
		if (size() == 0) {
			return -1;
		}
		return data.at(1);
	}

	int removeMin() {
		if (size() == 0) {
			return -1;
		}
		int output = data[1];
		data[1] = data[data.size() - 1];
		data.pop_back();
		int currentIndex = 1;
		int leftChildIndex = 2 * currentIndex;
		int rightChildIndex = leftChildIndex + 1;
		while (leftChildIndex <= data.size() - 1) {
			int minIndex = currentIndex;
			if (data[leftChildIndex] < data[minIndex]) {
				minIndex = leftChildIndex;
			}

			if (rightChildIndex <= data.size() - 1) {
				if (data[rightChildIndex] < data[minIndex]) {
					minIndex = rightChildIndex;
				}
			}
			
			if (minIndex == currentIndex) {
				break;
			}

			int temp = data[minIndex];
			data[minIndex] = data[currentIndex];
			data[currentIndex] = temp;
			
			currentIndex = minIndex;
			leftChildIndex = 2* currentIndex;
			rightChildIndex = leftChildIndex + 1;
	
		}
		return output;
	}

	void insert(int priority) {
		data.push_back(priority);
		int childIndex = data.size() - 1;
		int parentIndex = childIndex/2;
		while (childIndex != 1) {
			if (data.at(parentIndex) <= data.at(childIndex)) {
				break;
			} else {
				int temp = data[parentIndex];
				data[parentIndex] = data[childIndex];
				data[childIndex] = temp;

				childIndex = parentIndex;
				parentIndex = childIndex/2;
			}
		}
	}

};
