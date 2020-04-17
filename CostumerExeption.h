#pragma once
#include<iostream>
using namespace std;
class CustomerExeption :exception
{
public:
	void CustomerExep() { cout << "CustomerExeption: Больше нет достпупных билетов !!!" << endl; }
};
