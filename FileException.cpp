#include "FileException.h"

void FileException::ofstreamEmployee(ofstream& os, Employee& obj)
{
	os.exceptions(ofstream::badbit | ofstream::failbit);
	try
	{
		system("cls");
		os.open(FileEmployee,ofstream::app);
		os << obj;
		cout << "информация записана !" << endl;
		os.close();
	}
	catch (FileException &a)
	{
		a.messeg(FileEmployee);
		cout << "ошибка открытия файла " << "'" << FileEmployee << "'" << endl;
		exit(0);
	} 
}

void FileException::ofstreamClient(ofstream& os, Client& obj)
{
	os.exceptions(ofstream::badbit | ofstream::failbit);
	try
	{
		system("cls");
		os.open(FileClient, ofstream::app);
		os << obj;
		cout << "информация записана !" << endl;
		os.close();
	}
	catch (FileException & a)
	{
		a.messeg(FileClient);
		cout << "ошибка открытия файла " << "'" << FileClient << "'" << endl;
		exit(0);
	}
}

//void FileException::ifstreamEmployee(fstream& os, Employee& obj)
//{
//	os.exceptions(fstream::badbit | fstream::failbit);
//	try
//	{
//		os.open(FileEmployee,fstream::in|fstream::out|fstream::app);
//		os >> obj;
//		os.close();
//	}
//	catch (FileException &o)
//	{
//		o.messeg(FileEmployee);
//		exit(0);
//	}
//}

//void FileException::ifstreamClient(fstream& os, Client& obj)
//{
//	os.exceptions(ifstream::badbit | ifstream::failbit);
//	try
//	{
//		os.open(FileEmployee, fstream::in | fstream::out | fstream::app);
//		os >> obj;
//		os.close();
//	}
//	catch (FileException & o)
//	{
//		o.messeg(FileClient);
//		exit(0);
//	}
//}
