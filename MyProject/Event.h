#include <string>
using namespace std;
#ifndef EVENT_H
#define EVENT_H

class Event
{
private:
	string name;
	string date;
	double time;

public:

	Event();
	Event(string name, string date, double time);

	friend ostream& operator<<(ostream& out, Event a);
	friend istream& operator>>(istream& in, Event& a);

	void setName(string nume);
	void setDate(string data);
	void setTime(double timp);

	string getName();
	string getDate();
	double getTime();
};

#endif 