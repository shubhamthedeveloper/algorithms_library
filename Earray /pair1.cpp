template <typename T, typename V>
class pair1 {
	T first;
	V second;


	public:
	void setFirst(T first) {
		this->first = first;
	}

	void setSecond(V second) {
		this->second = second;
	}

	V getSecond() {
		return second;
	}

	T getFirst() {
		return first;
	}
};
