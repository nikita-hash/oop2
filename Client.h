#pragma once
#include"Human.h"
#include<iomanip>
class Client : public Human
{
	string city;
	string time;
	int ticket_quantity;
	int salary;
public:
	Client()
	{
		city = "NULL";
		time = "NULL";
		ticket_quantity = 0;
	}
	Client(string city,string time,int ticket)
	{
		this->city = city;
		this->time = time;
		this->ticket_quantity = ticket;
	}
	void setCity(string a) { city = a; }
	void setTime(string a) { time = a; }
	void setTicket(int a) { ticket_quantity = a; }
	void setSalary()
	{
		this->salary = 35 * this->ticket_quantity;
	}
	string getCity() { return city; }
	string getTime() { return time; }
	int getTicket() { return ticket_quantity; }
	int getSalary() { return salary; }
	friend ostream& operator <<(ostream& os, Client& obj)
	{
		os << "#" << "\t" << obj.getName() << "\t|" << obj.getDate() << "\t|" << obj.getTel() << setw(11) << "\t|" << obj.getPass_info() << "\t  |" << obj.getCity() << setw(17) << "|" << obj.getTime() << setw(10) << "|" << obj.getTicket() << setw(23) << "\t|" << obj.getSalary() << "\t|" << endl;
		return os;
	};

};
