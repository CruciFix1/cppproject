#include <string>
#include "Event.h"
using namespace std;
#ifndef LOCATION_H
#define LOCATION_H

class Location
{
private:

	int nrofseats;
	int nrofrows;
	int seatsperrow;
	int* row;
	string zone;
	static int numberofLocations;

public:

	Location();
	Location(int nrofseats, int nrofrows, int seatsperrow, int* row, string zone);

	Location(const Location& copy);
	Location& operator=(const Location& copy);
	~Location();

	friend ostream& operator<<(ostream& out, Location a);
	friend istream& operator>>(istream& in, Location& a);

	void setNrofseats(int numarscaune);
	void setNrofrows(int numarranduri);
	void setSeatsperrow(int scauneperrand);
	void setRow(int* rand);
	void setZone(string zona);
	static void setNrOfLocations(int numar);

	bool checkAvailability();
	void checkBelongs(Event check);

	int getNrofseats();
	int getNrofrows();
	int getSeatsperrow();
	int* getRow();
	string getZone();
	static int getNrOfLocations();

};

#endif