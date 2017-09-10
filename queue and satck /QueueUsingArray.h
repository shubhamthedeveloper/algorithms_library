template <typename T>
class QueueUsingArray {
	T* data;
	int nextIndex;
	int startIndex;
	int length;
	int capacity;

	public:
	QueueUsingArray() {
		capacity = 10;
		data = new T[capacity];
		nextIndex = 0;
		startIndex = -1;
		length = 0;
	}

	~QueueUsingArray() {
		delete [] data;
	}

	int size() {
		return length;
	}

	bool isEmpty() {
		return size() == 0;
	}

	T dequeue() {
		if (size() == 0) {
			return 0;
		}
		T toBeReturned = data[startIndex];
		startIndex = (startIndex + 1) % capacity;
		length--;
		if (length == 0) {
			startIndex = -1;
			nextIndex = 0;
		}
		return toBeReturned;
	}

	T front() {
		if (size() == 0) {
			return 0;
		}
		return data[startIndex];
	}

	private:
	void resize() {
		T* temp = data;
		data = new T[2* capacity];
		int k = 0;
		for (int i = startIndex; i < capacity; i++) {
			data[k] = temp[i];
			k++;
		}

		for (int i = 0; i < startIndex; i++) {
			data[k] = temp[i];
			k++;
		}
		delete [] temp;
		capacity = 2 * capacity;
		nextIndex = k;
		startIndex = 0;
	}

	public:
	void enqueue(T element) {
		if (size() == capacity) {
			resize();
		}
		length++;
		if (length == 1) {
			startIndex = 0;
		}
		data[nextIndex] = element;
		nextIndex = (nextIndex + 1) % capacity;
	}
};
