#include <iostream>
using namespace std;

class vehicle {
	protected:
	int maxSpeed;

	public:
	
	vehicle(int maxSpeed, int blah) {
		cout << "constructing vehicle" << endl;
	}

	void setMaxSpeed(int speed) {
		maxSpeed = speed;
	}

	int getMaxSpeed() {
		return maxSpeed;
	}

	virtual void print() = 0;
};

class car: public vehicle {

	public:
	int power;
	
	car(int power, int maxSpeed, int blah):vehicle(maxSpeed, blah) {
		this->power = power;
		cout << "constructing car" << endl;
	}

	int getCarMaxSpeed() {
		return maxSpeed;
	}

	void setPower(int power) {
		this->power = power;
	}
	
	int getPower() {
		return power;
	}

	void print() {
		cout << power << endl;
	}

};

void letsMove(vehicle* v) {

}

int main() {
	car c(10, 4, 2);
	c.print();

	car* cp = new car(10, 3, 4);
	cp->print();

	vehicle* vp = new car(10, 1, 2);
	vp->print();
	//vehicle* vp = new vehicle();


	//vehicle v;
	//v.print();

	/*vehicle v;
	v.print();

	car c1;
	letsMove(&c1);

	vehicle* vp;

	int i;
	cin >> i;

	if (i == 10) {
		vp = new vehicle();
	} else {
		vp = new car();
	}

	vp->print();
	//cout << vp->getPower() << endl;

	//cout << v.maxSpeed << endl;

	car c;
	c.print();
	cout << c.power << endl;
	//cout << c.maxSpeed << endl;
	car* cp = new car();
	cout << c.getPower() << endl;
	//cout << c.getMaxSpeed() << endl;
*/
}


