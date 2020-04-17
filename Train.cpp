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
			cout << "����������� ���������� >> " << endl;
			cout << "������� ��� : ";
			cin >> name;
			obj.setName(name);
			cout << "������� ���� �������� : ";
			cin >> date;
			obj.setDate(date);
			cout << "������� ����� �������� +375";
			cin >> tel;
			obj.setTel(tel);
			cout << "������� ���������� ����� : ";
			cin >> pass_info;
			obj.setPass_info(pass_info);
			cout << "������� ��������� : ";
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
			cout << "����������� ������� >> " << endl;
			cout << "������� ��� : ";
			cin >> name;
			obj.setName(name);
			cout << "������� ���� �������� : ";
			cin >> date;
			obj.setDate(date);
			cout << "������� ����� �������� +375";
			cin >> tel;
			obj.setTel(tel);
			cout << "������� ���������� ����� : ";
			cin >> pass_info;
			obj.setPass_info(pass_info);
			cout << "������� ���� ���� �������� : ";
			cin >> city;
			obj.setCity(city);
			cout << "������� ������� ����� ������� : ";
			cin >> time;
			obj.setTime(time);
			cout << "������� ���-�������� �������� ������� : ";
			cin >> ticket_quantity;
			obj.setTicket(ticket_quantity);
			obj.setSalary();
			masClient.push_back(obj);
			FileException check;
			//check.ofstreamClient(fil, obj);
			system("cls");
			cout << "���������� �������� " << endl;
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
	cout << "#" << "\t��� " << "\t|���� ��������  |" << "����� �������� +375 " << "\t|��������� " << "\t|���������� ����� |" << endl;
	for(int i=0;i<masEmployee.size();i++)
	{
		cout << "#" << "\t" << masEmployee[i].getName() << "\t|" << masEmployee[i].getDate() << "\t|" << masEmployee[i].getTel() << setw(11) << "\t|" << masEmployee[i].getPass_info() << "\t" << masEmployee[i].getPosition() << endl;
	}
}

void Train::printfInfoClient()
{
	cout << "#" << "\t��� " << "\t|���� ��������  |" << "����� �������� +375 " << "\t|���������� ����� |" << "����� �������� " << "\t|����� ������� |" << "���-�� ��������� ������� " << "\t|���� |" << endl;
	for(int i=0;i<masClient.size();i++)
	{
		cout << "#" << "\t" << masClient[i].getName() << "\t|" << masClient[i].getDate() << "\t|" << masClient[i].getTel() << setw(11) << "\t|" << masClient[i].getPass_info() << "\t  |" << masClient[i].getCity() << setw(17) << "|" << masClient[i].getTime() << setw(10) << "|" << masClient[i].getTicket() << setw(23) << "\t|" << masClient[i].getSalary() << "\t|" << endl;


	}
}

void Train::findEmployee()
{
	string tel;
	int k = 0;
	cout << "���� ������ >> " << endl;
	cout << "������� ����� �������� :+375 ";
	cin >> tel;
	for (int i = 0; i < masEmployee.size(); i++)
	{
		if (masEmployee[i].getTel() == tel)
		{
			cout << "############################################################" << endl;
			 cout << "��� : " << masEmployee[i].getName() << endl;
			 cout << "���� �������� : " << masEmployee[i].getDate() << endl;
			 cout << "����� �������� : " << masEmployee[i].getTel() << endl;
			 cout << "���������� ����� : " << masEmployee[i].getPass_info() << endl;
			 cout << "��������� : " << masEmployee[i].getPosition() << endl;
			 cout << "############################################################" << endl;
			 system("pause");
			 system("cls");
		}
		k++;
	}
	if (k == masEmployee.size())
	{
		system("cls");
		cout << "��� ����������� � ����� ������� !!!" << endl;
		system("pasuse");
	}
}

void Train::findClient()
{
	int k = 0;
	string tel;
	cout << "���� ������ >> " << endl;
	cout << "������� ����� �������� :+375 ";
	cin >> tel;
	for (int i = 0; i < masClient.size(); i++)
	{
		if (masClient[i].getTel() == tel)
		{
			cout << "############################################################" << endl;
			cout << "��� : " << masClient[i].getName() << endl;
			cout << "���� �������� : " << masClient[i].getDate() << endl;
			cout << "����� �������� : " << masClient[i].getTel() << endl;
			cout << "���������� ����� : " << masClient[i].getPass_info() << endl;
			cout << "����� �������� : " << masClient[i].getCity() << endl;
			cout << "����� ������� : " << masClient[i].getTime() << endl;
			cout << "���-�� ��������� ������� : " << masClient[i].getTicket() << endl;
			cout << "��������� : " << masClient[i].getSalary() <<"���"<< endl;
			cout << "############################################################" << endl;
			system("pause");
			system("cls");
		}
		k++;
	}
	if (k==masClient.size())
	{
		system("cls");
		cout << "��� �������� � ����� ������� !!!" << endl;
		system("pasuse");
	}
}

void Train::delEmployee()
{
	static string tel;
	static string pas;
	int k=0;
	cout << "���� �������� >>" << endl;
	cout << "������� ����� ���������� : +375";
	cin >> tel;
	cout << "������� ���������� ����� ���������� : ";
	cin >> pas;
	for(int i=0;i<masEmployee.size();i++)
	{
	if(masEmployee[i].getTel()==tel && masEmployee[i].getPass_info()==pas)
	{
		system("cls");
		cout << "������ ����� ������� !" << endl;
		cout << "############################################################" << endl;
		cout << "��� : " << masEmployee[i].getName() << endl;
		cout << "���� �������� : " << masEmployee[i].getDate() << endl;
		cout << "����� �������� : " << masEmployee[i].getTel() << endl;
		cout << "���������� ����� : " << masEmployee[i].getPass_info() << endl;
		cout << "��������� : " << masEmployee[i].getPosition() << endl;
		cout << "############################################################" << endl;
		system("pause");
		auto res = masEmployee.begin();
		masEmployee.erase(res +i);
	}
	k++;
	}
	if(k==masEmployee.size())
	{
		cout << "��� ������ ��������� ";
		system("pause");
	}
}

void Train::delClient()
{
	static string tel;
	static string pas;
	int k = 0;
	cout << "���� �������� >>" << endl;
	cout << "������� ����� ������� : +375";
	cin >> tel;
	cout << "������� ���������� ����� ������� : ";
	cin >> pas;
	for (int i = 0; i < masClient.size(); i++)
	{
		if (masClient[i].getTel() == tel && masClient[i].getPass_info() == pas)
		{
			system("cls");
			cout << "������ ����� ������� !" << endl;
			cout << "############################################################" << endl;
			cout << "��� : " << masClient[i].getName() << endl;
			cout << "���� �������� : " << masClient[i].getDate() << endl;
			cout << "����� �������� : " << masClient[i].getTel() << endl;
			cout << "���������� ����� : " << masClient[i].getPass_info() << endl;
			cout << "����� �������� : " << masClient[i].getCity() << endl;
			cout << "����� ������� : " << masClient[i].getTime() << endl;
			cout << "���-�� ��������� ������� : " << masClient[i].getTicket() << endl;
			cout << "��������� : " << masClient[i].getSalary() << "���" << endl;
			cout << "############################################################" << endl;
			system("pause");
			auto res = masClient.begin();
			masClient.erase(res + i);
		}
		k++;
	}
	if (k == masClient.size())
	{
		cout << "��� ������ ������� ";
		system("pause");
	}
}
