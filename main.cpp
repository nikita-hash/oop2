#include<Windows.h>
#include"Train.h"
#include"MainMenu.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	FileAdd check;
	check.filecheck();
	Menu obj1;
	obj1.StartMenu();
}