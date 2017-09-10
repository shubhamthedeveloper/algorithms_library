#ifndef ROAD_H
#define ROAD_H
#include "city.h"
class City;

class Road {
	public:
	City* first;
	City* second;
	int distance;
	
	Road(City* c1, City* c2, int distance) {
		this->first = c1;
		this->second = c2;
		this->distance = distance;
	}
};
#endif
