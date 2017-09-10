class StackUsingArray {
	int * data;
	int nextIndex;
	int capacity;

	public:
	StackUsingArray() {
		capacity = 10;
		data = new int[capacity];
		nextIndex = 0;
	}
	
	~StackUsingArray() {
		delete [] data;
	}

	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		return size() == 0;
	}

	void push(int element) {
		if (nextIndex == capacity) {
			return;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	int pop() {
		if (size() == 0) {
			return -1;
		}
		int toBeReturned = data[nextIndex - 1];
		nextIndex--;
		return toBeReturned;
	}

	int top() {
		if (size() == 0) {
			return -1;
		}
		return data[nextIndex - 1];
	}
};
