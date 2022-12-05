#include <string>
#ifndef TICKET_H
#define TICKET_H
using namespace std;

class Ticket
{
private:
	static int nrofgentickets;
	char* uniqueID;
	const string zone;
	int row;
	int seat;

public:

	Ticket();
	Ticket(char* uniqueID, int row, int seat);
	Ticket(const Ticket& copy);
	~Ticket();

	friend ostream& operator<<(ostream& out, Ticket a);
	friend istream& operator>>(istream& in, Ticket& a);

	static void setNrofgentickets(int nrtichete);
	static void incrementTickets();


	static int getNrofgentickets();
	const char* getUniqueID();
	const string getZone();
	const int getRow();
	const int getSeat();


};

#endif