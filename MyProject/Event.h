#pragma once
#include <string>
#include "Location.h"
using namespace std;
#ifndef EVENT_H
#define EVENT_H

class Event
{
private:
	string name;
	string date;
	int time;

public:

	Event();
	Event(string name, string date, int time);

	friend ostream& operator<<(ostream& out, Event a);
	friend istream& operator>>(istream& in, Event& a);

	bool operator>(Event compare);
	bool operator<(Event compare);

	void setName(string nume);
	void setDate(string data);
	void setTime(int timp);

	int timeAshours(int timp);
	int numberOfLocations(Location a);

	string getName();
	string getDate();
	int getTime();
};

#endif 