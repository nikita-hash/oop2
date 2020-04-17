#pragma once
#include<iomanip>
#include <iterator>
#include<algorithm>
#include<fstream>
#include"Employee.h"
#include"Client.h"
#include"CostumerExeption.h"
#include"EmployeeExeption.h"
#include<map>
#include"list"
#include"FileException.h"
#include"Travel_agance.h"
#include<vector>
static int kof = 0;
static string FileClient = "client.txt";
static string  FileEmployee = "Employee.txt";
class Train :public Travel_agance
{
	class SaleManager :public Human
	{
		double salary;
	public:
		double getSalary() { return this->salary; }
		void setSalary(double sal) { this->salary = sal; }
	};
	
public:
	Train()
	{
		ifstream file;
		file.open(FileEmployee);
		while (!file.eof())
		{

			Employee obj;
			file >> obj;
			if (file.eof())
			{
				break;
			}
			masEmployee.push_back(obj);
		}

	}
	map<int, string> mapId;
	vector<Employee> masEmployee;
	list<Train>MyStatistics;
	vector<Client> masClient;
	void addEmployee();
	void addClient();
	void printfInfoEmployee();
	void printfInfoClient();
	void findEmployee();
	void findClient();
	void delEmployee();
	void delClient();
	/*template<class T>
	friend ostream& operator <<  (ostream& os, vector<Employee>& masEmployee)
	{
		os << "\t " << masEmployee[i]<< "\t " << masEmployee.date << "\t " << masEmployee.tel << setw(11) << "\t " << masEmployee.pass_info << "\t " << masEmployee.position << endl;
		return os;
	}
	~Train()
	{
		fstream fil(FileEmployee);
		
	}*/
	//template<class T>
	/*friend ostream& operator<<(ostream& os, vector<Employee>&as)
	{
		for (int i = 0; i < as.size(); i++)
		{
			os << as[i].getName() << "\t" << as[i].getDate() << "\t" << as[i].getTel() << "\t" << as[i].getPass_info() << "\t" << as[i].getPosition();
		}
		return os;
	}*/
	/*void getMasTicket()
	{
		for(int i=0;i<masClient.size();i++)
		{
			kof = masClient[i].getTicket() + kof;
		}
	}*/
	/*~Train()
	{
		ofstream fil;
		fil.open(FileEmployee);
		copy(masEmployee.begin(), masEmployee.end(), ostream_iterator<Employee>(fil));
	}*/
};
