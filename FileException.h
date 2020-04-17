#pragma once
#include"Train.h"
class FileException:exception
{
	void messeg(string name)
	{
		cout << "ошибка открытия файла " << "'" << name << "'" << endl;
	}
public:
	void ofstreamEmployee(ofstream& os, Employee& obj);
	void ofstreamClient(ofstream& os, Client& obj);
//	void ifstreamEmployee(fstream& os, Employee& obj);
//	void ifstreamClient(fstream& os, Client& obj);
};
