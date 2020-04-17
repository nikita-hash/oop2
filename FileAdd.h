#pragma once
#include"Train.h"
class FileAdd
{
	void addFile()
	{
		ofstream of;
		of.open(FileEmployee);
		//of << "#" << "\tИмя " << "\t|дата рождения  |" << "номер телефона +375 " << "\t|должность " << "\t|паспортный номер |" << endl;
		of.close();
		of.open(FileClient);
		of << "#" << "\tИмя " << "\t|дата рождения  |" << "номер телефона +375 " << "\t|паспортный номер |" << "пункт прибытия " << "\t|время отъезда |" << "кол-во купленных билетов " << "\t|цена |" << endl;
		of.close();
		system("cls");
		cout << "файлы успешно созданы !" << endl;
	}
public:
	void filecheck()
	{
		ifstream file;
		ifstream file1;
		file.open(FileClient);
		file1.open(FileEmployee);
		if (!file && !file1)
		{
			addFile();
		}
		else
		{
			cout << "загрузка файлов прошла успешно " << endl;
			system("pause");
		}
	}
};
