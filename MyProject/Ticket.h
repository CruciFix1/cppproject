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
	Ticket& operator=(const Ticket& copy);
	~Ticket();

	friend ostream& operator<<(ostream& out, Ticket a);
	friend istream& operator>>(istream& in, Ticket& a);

	Ticket& operator++();
	Ticket operator++(int);
	bool operator!();

	static void setNrofgentickets(int nrtichete);
	void setUniqueID(char* id);
	void setRow(int rand);
	void setSeat(int loc);

	static void incrementTickets();
	void neighbours(Ticket a);


	static int getNrofgentickets();
	const char* getUniqueID();
	const string getZone();
	const int getRow();
	const int getSeat();


};

#endif