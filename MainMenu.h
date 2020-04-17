#pragma once
#include<iostream>
#include"FileAdd.h"
#include"Travel_agance.h"
#include"Train.h"
using namespace std;
class Menu
{
public:

	void StartMenu()
	{
		int k = 0;
		int a;
		while (k != 1)
		{
			cout << "1)меню сотрудника " << endl;
			cout << "2)меню клиента " << endl;
			cout << "3) выход" << endl;
			cin >> a;
			switch (a)
			{
			case 1: MenuEmployee(); break;
			case 2: MenuClient(); break;
			case 3:exit(1);
			}
		}
		
	}
	void MenuEmployee()
	{
		Train obj;
		int a;
		while (1)
		{
			cout << "1)удаление сотрудника " << endl;
			cout << "2)добавление сотрудника " << endl;
			cout << "3)найти сотрудника " << endl;
			cout << "4) вывод информации " << endl;
			cout << "5)выход" << endl;
			cin >> a;
			switch (a)
			{
			case 1:obj.delEmployee(); break;
			case 2:obj.addEmployee(); break;
			case 3:obj.findEmployee(); break;
			case 4:obj.printfInfoEmployee(); break;
			case 5:system("cls"); return StartMenu();
			}
		}
	}
	void MenuClient()
	{
		Train obj;
		int a;
		while (1)
		{
			cout << "1)удаление клиента  " << endl;
			cout << "2)добавление клиента  " << endl;
			cout << "3) найти клиента " << endl;
			cout << "4)вывод информации " << endl;
			cout << "5) выход " << endl;
			cin >> a;
			switch (a)
			{
			case 1: obj.delClient(); break;
			case 2:obj.addClient(); break;
			case 3: obj.findClient(); break;
			case 4:obj.printfInfoClient(); break;
			case 5: system("cls");  return StartMenu();
			}
		}
	}
};
