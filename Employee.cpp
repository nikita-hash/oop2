#include "Employee.h"
ostream& operator<<(ostream& os, Employee& obj)
{
	/*os << "��� : " << obj.getName() << endl;
	os << "���� �������� : " << obj.getDate() << endl;
	os << "����� �������� : " << obj.getTel() << endl;
	os << "���������� ����� : " << obj.getPass_info() << endl;
	os << "��������� : " << obj.getPosition() << endl;*/
	os  << "\t " << obj.getName() << "\t " << obj.getDate() << "\t " << obj.getTel() << setw(11) << "\t " << obj.getPass_info() << "\t " << obj.getPosition() << "\t " << endl;
	return os;
}


