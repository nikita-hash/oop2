#pragma once
#include<iostream>
using namespace std;
class EmployeeExption : public exception
{
public:
	void	EmployeeExpt()
	{
		cout << "EmployeeExption: Достигнут предел сотрудников !!!" << endl;
	}
};
