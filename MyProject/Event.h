#ifndef EVENT_H
#define EVENT_H

class Event
{
private:
	char* name;
	int date;
	int time;

public:
	void setName(char* nume);
	void setDate(int data);
	void setTime(int timp);

	char* getName();
	int getDate();
	int getTime();
};

#endif 