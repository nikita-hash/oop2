#pragma once
#include"Train.h"
class Travel_agance 
{
	string month;
	int sumTicket;
public:
	Travel_agance()
	{
		sumTicket = 0;
	}
	void setSumTicket(int a)
	{
		
		sumTicket = a + sumTicket;
	}
	int getSumTicket() { return sumTicket; }
};
