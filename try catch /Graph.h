#include <unordered_map>
#include <vector>
#include <string>
#include "city.h"
#include "Road.h"
using namespace std;

class Graph {
	unordered_map<string, City*> cities;
	public:
	int numCities() {
		return cities.size();
	}

	int numRoads() {
		unordered_map<string, City*>::iterator it = cities.begin();
		int count = 0;
		while (it != cities.end()) {
			count += it->second->numRoads();
			it++;
		}
		return count/2;
	}

	void addCity(string cityName) {
		if (cities.count(cityName) == 1) {
			return;
		}
		City* city = new City(cityName);
		cities[cityName] = city;
	}

	void addRoad(string city1, string city2, int distance){
		if (cities.count(city1) == 0 || cities.count(city2) == 0) {
			return;
		}
		City* c1 = cities[city1];
		City* c2 = cities[city2];
		if (c1->isAdjacent(c2)) {
			return;
		}
		Road* e = new Road(c1, c2, distance);
		c1->addRoad(e);
		c2->addRoad(e);
	}

	bool hasCity(string cityName) {
		return cities.count(cityName) == 1;
	}

	int directRoadDistance(string city1, string city2){ 
		if (cities.count(city1) == 0 || cities.count(city2) == 0) {
			return -1;
		}
		City* c1 = cities[city1];
		City* c2 = cities[city2];
		return c1->distanceWith(c2);
	}

	void removeCity(string cityName) {
		if (cities.count(cityName) == 0) {
			return;
		}
		City* c1 = cities[cityName];
		vector<City*>* adjacent = c1->getAdjacentCities();
		for (int i = 0; i < adjacent->size(); i++) {
			City* adjacentCity = adjacent->at(i);
			removeRoad(cityName, adjacentCity->name);
		}
		cities.erase(cityName);
		delete c1;
	}

	void removeRoad(string city1, string city2) {
		if (cities.count(city1) == 0 || cities.count(city2) == 0) {
			return;
		}
		City* c1 = cities[city1];
		City* c2 = cities[city2];
		if (!c1->isAdjacent(c2)) {
			return;
		}
		Road* e = c1->removeRoadWith(c2);
		e = c2->removeRoadWith(c1);
		delete e;
	}

	void print() {
		cout << "num cities " << numCities() << endl;
		cout << "num roads " << numRoads() << endl;
		unordered_map<string, City*>::iterator it = cities.begin();
		while (it != cities.end()) {
			it->second->print();
			it++;
		}
	}

	bool hasPath(string city1, string city2) {
		return false;
	}

	bool isConnected() {

	}

	void shortestDistances(string city1) {

	}



};
