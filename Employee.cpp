#include "Employee.h"
ostream& operator<<(ostream& os, Employee& obj)
{
	/*os << "имя : " << obj.getName() << endl;
	os << "дата рождения : " << obj.getDate() << endl;
	os << "номер телефона : " << obj.getTel() << endl;
	os << "паспотрный номер : " << obj.getPass_info() << endl;
	os << "должность : " << obj.getPosition() << endl;*/
	os  << "\t " << obj.getName() << "\t " << obj.getDate() << "\t " << obj.getTel() << setw(11) << "\t " << obj.getPass_info() << "\t " << obj.getPosition() << "\t " << endl;
	return os;
}


