#include <string>
#ifndef TICKET_H
#define TICKET_H
using namespace std;

class Ticket
{
private:
	static int nrofgentickets;
	const char* uniqueID;
	const string zone;
	const int row;
	const int seat;

public:
	static void setNrofgentickets(int nrtichete);

	const char* getUniqueID();
	const string getZone();
	const int getRow();
	const int getSeat();


};

#endif