#pragma once
#include<iostream>
using namespace std;
class CustomerExeption :exception
{
public:
	void CustomerExep() { cout << "CustomerExeption: ������ ��� ���������� ������� !!!" << endl; }
};
