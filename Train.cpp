#include "Train.h"

void Train::addEmployee()
{
	try
	{
		if (masEmployee.size() < 5)
		{
			Train o;
			ofstream fil;
			Employee obj;
			string name;
			string date;
			string tel;
			string pass_info;
			string position;
			FileException check;
			cout << "Регистрация сотрудника >> " << endl;
			cout << "Введите имя : ";
			cin >> name;
			obj.setName(name);
			cout << "Введите дату рождения : ";
			cin >> date;
			obj.setDate(date);
			cout << "Введите номер телефона +375";
			cin >> tel;
			obj.setTel(tel);
			cout << "Введите паспортный номер : ";
			cin >> pass_info;
			obj.setPass_info(pass_info);
			cout << "Введите должность : ";
			cin >> position;
			obj.setPosition(position);
			masEmployee.push_back(obj);
			check.ofstreamEmployee(fil, obj);
			//copy(masEmployee.begin(), masEmployee.end(), ostream_iterator<Employee>(fil, "\n"));
		}
		else
			throw EmployeeExption();
	}
	catch (EmployeeExption & ox)
	{
		ox.EmployeeExpt();
		system("pause");
		exit(0);
	}
}

void Train::addClient()
{
	try
	{
		if (masClient.size() < 5)
		{
			Train o;
			Client obj;
			string name;
			string date;
			string tel;
			string pass_info;
			string city;
			string time;
			ofstream fil;
			int ticket_quantity;
			cout << "Регистрация Клиента >> " << endl;
			cout << "Введите имя : ";
			cin >> name;
			obj.setName(name);
			cout << "Введите дату рождения : ";
			cin >> date;
			obj.setDate(date);
			cout << "Введите номер телефона +375";
			cin >> tel;
			obj.setTel(tel);
			cout << "Введите паспортный номер : ";
			cin >> pass_info;
			obj.setPass_info(pass_info);
			cout << "Введите куда кдет пассажир : ";
			cin >> city;
			obj.setCity(city);
			cout << "Введите удобное время отъезда : ";
			cin >> time;
			obj.setTime(time);
			cout << "Введите кол-личество купленых билетов : ";
			cin >> ticket_quantity;
			obj.setTicket(ticket_quantity);
			obj.setSalary();
			masClient.push_back(obj);
			FileException check;
			//check.ofstreamClient(fil, obj);
			system("cls");
			cout << "информация записана " << endl;
		}
		else throw CustomerExeption();
	}
	catch (CustomerExeption & ox)
	{
		ox.CustomerExep();
		system("pause");
		exit(0);
	}
}

void Train::printfInfoEmployee()
{
	ifstream file;
	FileException check;
	file.open(FileEmployee);
	cout << "#" << "\tИмя " << "\t|дата рождения  |" << "номер телефона +375 " << "\t|должность " << "\t|паспортный номер |" << endl;
	for(int i=0;i<masEmployee.size();i++)
	{
		cout << "#" << "\t" << masEmployee[i].getName() << "\t|" << masEmployee[i].getDate() << "\t|" << masEmployee[i].getTel() << setw(11) << "\t|" << masEmployee[i].getPass_info() << "\t" << masEmployee[i].getPosition() << endl;
	}
}

void Train::printfInfoClient()
{
	cout << "#" << "\tИмя " << "\t|дата рождения  |" << "номер телефона +375 " << "\t|паспортный номер |" << "пункт прибытия " << "\t|время отъезда |" << "кол-во купленных билетов " << "\t|цена |" << endl;
	for(int i=0;i<masClient.size();i++)
	{
		cout << "#" << "\t" << masClient[i].getName() << "\t|" << masClient[i].getDate() << "\t|" << masClient[i].getTel() << setw(11) << "\t|" << masClient[i].getPass_info() << "\t  |" << masClient[i].getCity() << setw(17) << "|" << masClient[i].getTime() << setw(10) << "|" << masClient[i].getTicket() << setw(23) << "\t|" << masClient[i].getSalary() << "\t|" << endl;


	}
}

void Train::findEmployee()
{
	string tel;
	int k = 0;
	cout << "Меню поиска >> " << endl;
	cout << "введите номер телефона :+375 ";
	cin >> tel;
	for (int i = 0; i < masEmployee.size(); i++)
	{
		if (masEmployee[i].getTel() == tel)
		{
			cout << "############################################################" << endl;
			 cout << "имя : " << masEmployee[i].getName() << endl;
			 cout << "дата рождения : " << masEmployee[i].getDate() << endl;
			 cout << "номер телефона : " << masEmployee[i].getTel() << endl;
			 cout << "паспотрный номер : " << masEmployee[i].getPass_info() << endl;
			 cout << "должность : " << masEmployee[i].getPosition() << endl;
			 cout << "############################################################" << endl;
			 system("pause");
			 system("cls");
		}
		k++;
	}
	if (k == masEmployee.size())
	{
		system("cls");
		cout << "нет сотрудников с таким номеров !!!" << endl;
		system("pasuse");
	}
}

void Train::findClient()
{
	int k = 0;
	string tel;
	cout << "Меню поиска >> " << endl;
	cout << "введите номер телефона :+375 ";
	cin >> tel;
	for (int i = 0; i < masClient.size(); i++)
	{
		if (masClient[i].getTel() == tel)
		{
			cout << "############################################################" << endl;
			cout << "имя : " << masClient[i].getName() << endl;
			cout << "дата рождения : " << masClient[i].getDate() << endl;
			cout << "номер телефона : " << masClient[i].getTel() << endl;
			cout << "паспотрный номер : " << masClient[i].getPass_info() << endl;
			cout << "место прибытия : " << masClient[i].getCity() << endl;
			cout << "время отъездв : " << masClient[i].getTime() << endl;
			cout << "кол-во купленных билетов : " << masClient[i].getTicket() << endl;
			cout << "стоимость : " << masClient[i].getSalary() <<"руб"<< endl;
			cout << "############################################################" << endl;
			system("pause");
			system("cls");
		}
		k++;
	}
	if (k==masClient.size())
	{
		system("cls");
		cout << "нет клиентов с таким номеров !!!" << endl;
		system("pasuse");
	}
}

void Train::delEmployee()
{
	static string tel;
	static string pas;
	int k=0;
	cout << "меню удаления >>" << endl;
	cout << "введите номер сотрудника : +375";
	cin >> tel;
	cout << "введите паспортный номер сотрудника : ";
	cin >> pas;
	for(int i=0;i<masEmployee.size();i++)
	{
	if(masEmployee[i].getTel()==tel && masEmployee[i].getPass_info()==pas)
	{
		system("cls");
		cout << "Анкета будет удалена !" << endl;
		cout << "############################################################" << endl;
		cout << "имя : " << masEmployee[i].getName() << endl;
		cout << "дата рождения : " << masEmployee[i].getDate() << endl;
		cout << "номер телефона : " << masEmployee[i].getTel() << endl;
		cout << "паспотрный номер : " << masEmployee[i].getPass_info() << endl;
		cout << "должность : " << masEmployee[i].getPosition() << endl;
		cout << "############################################################" << endl;
		system("pause");
		auto res = masEmployee.begin();
		masEmployee.erase(res +i);
	}
	k++;
	}
	if(k==masEmployee.size())
	{
		cout << "Нет такого сотрудник ";
		system("pause");
	}
}

void Train::delClient()
{
	static string tel;
	static string pas;
	int k = 0;
	cout << "меню удаления >>" << endl;
	cout << "введите номер клиента : +375";
	cin >> tel;
	cout << "введите паспортный номер клиента : ";
	cin >> pas;
	for (int i = 0; i < masClient.size(); i++)
	{
		if (masClient[i].getTel() == tel && masClient[i].getPass_info() == pas)
		{
			system("cls");
			cout << "Анкета будет удалена !" << endl;
			cout << "############################################################" << endl;
			cout << "имя : " << masClient[i].getName() << endl;
			cout << "дата рождения : " << masClient[i].getDate() << endl;
			cout << "номер телефона : " << masClient[i].getTel() << endl;
			cout << "паспотрный номер : " << masClient[i].getPass_info() << endl;
			cout << "место прибытия : " << masClient[i].getCity() << endl;
			cout << "время отъездв : " << masClient[i].getTime() << endl;
			cout << "кол-во купленных билетов : " << masClient[i].getTicket() << endl;
			cout << "стоимость : " << masClient[i].getSalary() << "руб" << endl;
			cout << "############################################################" << endl;
			system("pause");
			auto res = masClient.begin();
			masClient.erase(res + i);
		}
		k++;
	}
	if (k == masClient.size())
	{
		cout << "Нет такого клиента ";
		system("pause");
	}
}
