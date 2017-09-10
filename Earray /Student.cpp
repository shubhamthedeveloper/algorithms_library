#include <iostream>
using namespace std;

class Student {
	int rollNumber;
	char* name;
	static int numStudents = 0;

	public:
	static int getNumStudents() {
		return numStudents;
	}

	void setName(char* n) {
		// shallow copy name = n;
		// deep copy
		if (name != NULL) {
			delete [] name;
		}
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	Student(int rollNumber, char* n) {
		numStudents++;
		this->rollNumber = rollNumber;
		name = NULL;
		setName(n);
	}

	Student(int rn) {
		numStudents++;
		rollNumber = rn;
		name = NULL;
	}

	~Student() {
		delete [] name;
	}

	char* getName() {
		return name;
	}


	int getRollNumber() {
		return rollNumber;
	}

	void setRollNumber(int rn) {
		if (rn <= 0) {
			return;
		}
		rollNumber = rn;
	}

};

int main() {
	Student s1(1);
	Student s2(2);

	Student* s4;

	Student* s3 = new Student(3);

	cout << s3->getRollNumber() << endl;

	char n1[] = {'b','a','c','d','\0'};
	s1.setName(n1);

	n1[0] = 'a';
	n1[1] = 'b';
	s2.setName(n1);

	cout << s1.getName() << endl;
	cout << s2.getName() << endl;

	cout << s1.getRollNumber() << endl;
	cout << s2.getRollNumber() << endl;
	delete s3;
}
