#include <string>
using namespace std;
#ifndef EVENT_H
#define EVENT_H

class Event
{
private:
	string name;
	int date;
	int time;

public:

	Event();
	Event(string name, int date, int time);

	void setName(string nume);
	void setDate(int data);
	void setTime(int timp);

	string getName();
	int getDate();
	int getTime();
};

#endif 