#pragma once
#include"Human.h"
#include<iomanip>
#include<vector>
class Employee : public Human
{
	string position;
public:
	Employee()
	{
		position = "NULL";
	}
	Employee(string pos) { position = pos; }
	void setPosition(string a) { position = a; }
	string getPosition() { return position; }
	friend ostream& operator<<(ostream& os, Employee& obj);
	friend istream& operator>>(istream& os, Employee& obj)
	{
		os >> obj.name >> obj.date >> obj.tel >> obj.pass_info >> obj.position;
		return os;
	}
	template<class T>
	friend ostream& operator <<  (ostream& os, vector<Employee>& masEmployee)
	{
		os << "\t " << masEmployee.<< "\t " << masEmployee.date << "\t " << masEmployee.tel << setw(11) << "\t " << masEmployee.pass_info << "\t " << masEmployee.position << endl;
		return os;
	}
};
