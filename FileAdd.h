#pragma once
#include"Train.h"
class FileAdd
{
	void addFile()
	{
		ofstream of;
		of.open(FileEmployee);
		//of << "#" << "\t��� " << "\t|���� ��������  |" << "����� �������� +375 " << "\t|��������� " << "\t|���������� ����� |" << endl;
		of.close();
		of.open(FileClient);
		of << "#" << "\t��� " << "\t|���� ��������  |" << "����� �������� +375 " << "\t|���������� ����� |" << "����� �������� " << "\t|����� ������� |" << "���-�� ��������� ������� " << "\t|���� |" << endl;
		of.close();
		system("cls");
		cout << "����� ������� ������� !" << endl;
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
			cout << "�������� ������ ������ ������� " << endl;
			system("pause");
		}
	}
};
