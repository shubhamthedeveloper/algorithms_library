#ifndef CITY_H
#define CITY_H
#include "Road.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
class City {
	unordered_map<City*, Road*> roads;

	public:
	string name;
	City(string name) {
		this->name = name;
	}

	void print() {
		cout << name << ":";
		unordered_map<City*, Road*>::iterator it = roads.begin();
		while (it != roads.end()) {
			cout << it->first->name << ":" << it->second->distance << ",";
			it++;
		}
		cout << endl;
	}

	Road* removeRoadWith(City* c) {
		if (roads.count(c) == 0) {
			return NULL;
		}
		Road* output = roads[c];
		roads.erase(c);
		return output;
	}

	vector<City*>* getAdjacentCities() {
		vector<City*>* output = new vector<City*>();
		unordered_map<City*, Road*>::iterator it = roads.begin();
		while (it != roads.end()) {
			output->push_back(it->first);
			it++;
		}
		return output;
	}

	int distanceWith(City* c) {
		if (roads.count(c) == 1) {
			return roads[c]->distance;
		} else {
			return -1;
		}
	}

	int numRoads() {
		return roads.size();
	}

	void addRoad(Road* r) {
		if (r->first == this) {
			roads[r->second] = r;
		} else if (r->second == this) {
			roads[r->first] = r;
		} else {
			return;
		}
	}

	bool isAdjacent(City* c2) {
		return roads.count(c2) == 1;
	}
};
#endif
