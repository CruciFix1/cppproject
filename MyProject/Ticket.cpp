#include<iostream>
#include "Ticket.h"
#include<string>

int Ticket::nrofgentickets = 0;

Ticket::Ticket() : zone("Not existing") {

	uniqueID = nullptr;
	row = 0;
	seat = 0;

}

Ticket::Ticket(char* uniqueID, string zone, int row, int seat) : zone(zone) {

	if (uniqueID != nullptr) {
		this->uniqueID = new char[strlen(uniqueID) + 1];
		strcpy(this->uniqueID, uniqueID);
	}
	else {
		this->uniqueID = nullptr;
	}

	this->row = row;
	this->seat = seat;

}

Ticket::Ticket(const Ticket& copy) : zone(copy.zone) {

	if (copy.uniqueID != nullptr) {
		this->uniqueID = new char[strlen(copy.uniqueID) + 1];
		strcpy(this->uniqueID, copy.uniqueID);
	}
	else {
		this->uniqueID = nullptr;
	}
	this->row = copy.row;
	this->seat = copy.seat;

}

Ticket& Ticket::operator=(const Ticket& copy) {

	if (this != &copy) {

		if (this->uniqueID != nullptr) {

			delete[] this->uniqueID;

		}
		if (copy.uniqueID != nullptr) {

			this->uniqueID = new char[strlen(copy.uniqueID) + 1];
			strcpy(this->uniqueID, copy.uniqueID);

		}
		else {
			this->uniqueID = nullptr;
		}
		this->row = copy.row;
		this->seat = copy.seat;

		

	}
	return *this;
}

Ticket::~Ticket()
{
	if (this->uniqueID != nullptr) {
		delete[] this->uniqueID;
		this->uniqueID = nullptr;
	}
}

ostream& operator<<(ostream& out, Ticket a) {

	out << "UniqueID: ";
	out << endl;
	if (a.uniqueID != nullptr) {
		
		out << a.uniqueID;
	}
	out << "Zone: " << a.zone << endl;
	out << "Row: " << a.row << endl;
	out << "Seat: " << a.seat << endl;

	return out;
}


