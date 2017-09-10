#include <iostream>
#include "Graph.h"
using namespace std;

int main() {
	Graph g;
	g.addCity("G");
	g.addCity("D");
	g.addCity("N");
	g.addCity("F");
	g.addCity("K");
	
	g.addRoad("G", "N", 5);
	g.addRoad("G", "D", 9);
	g.addRoad("D", "K", 15);
	g.addRoad("D", "F", 7);
	g.addRoad("F", "N", 25);
	g.addRoad("F", "K", 20);
	g.addRoad("K", "N", 10);
	g.print();
	g.removeRoad("K", "F");
	g.print();
	g.removeCity("K");
	g.print();

}

