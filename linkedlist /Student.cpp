#include <iostream>
using namespace std;

class Student {
	int rollNumber;
	char* name;
	static int numStudents;

	public:
	static int getNumStudents() {
		return numStudents;
	}

	Student& operator= (Student const & s1) {
		this->rollNumber = s1.rollNumber;
		setName(s1.name);
		return (*this)
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

	Student(Student const & s): rollNumber(s.rollNumber) {
		name = NULL;
		this->setName(s.name);
	}

	Student(int rollNumber, char* n):rollNumber(rollNumber) {
		numStudents++;
		name = NULL;
		setName(n);
	}

	Student(int rn):rollNumber(rn) {
		numStudents++;
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

	/*
	void setRollNumber(int rn) {
		if (rn <= 0) {
			return;
		}
		rollNumber = rn;
	}
*/
};

int Student::numStudents = 0;

int main() {
	Student s1(1);
	Student s2(2);

	
	Student* s4;

	Student* s3 = new Student(3);

	cout << s3->getRollNumber() << endl;

	char n1[] = {'b','a','c','d','\0'};
	s1.setName(n1);
	Student sc(s1);

	Student & a = (sc = s1);

	cout << s1.getRollNumber() << endl;
	cout << s1.getName() << endl;
	cout << sc.getRollNumber() << endl;
	cout << sc.getName() << endl;
	return 0;
	n1[0] = 'a';
	n1[1] = 'b';
	s2.setName(n1);

	cout << s1.getName() << endl;
	cout << s2.getName() << endl;

	cout << s1.getRollNumber() << endl;
	cout << s2.getRollNumber() << endl;
	delete s3;
}
