#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Human
{
protected:
	string name;
	string date;
	string tel;
	string pass_info;
public:
	Human()
	{
		name = "NULL";
		date= "NULL";
		tel = "NULL";
		pass_info= "NULL";
	}
	Human(string name, string date, string tel, string pass_info)
	{
		this->name = name;
		this->date = date;
		this->tel = tel;
		this->pass_info = pass_info;
	}
	void setName(string a) { name = a; }
	void setDate(string a) { date = a; }
	void setTel(string a) { tel = a; }
	void setPass_info(string a) { pass_info = a; }
	string getName() { return name; }
	string getDate() { return date; }
	string getTel() { return tel; }
	string getPass_info() { return pass_info; }
};
