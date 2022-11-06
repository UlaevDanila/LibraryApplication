#include"User_Signature.h"

user::user()
{
	setName();
	setMale();
	setAge();
}

void user::setName()
{
	cout << "Enter you're name: ";
	cin >> name;
	cout << endl;
}

void user::setMale()
{
	cout << "Enter you're male: ";
	cin >> male;
	cout << endl;
}

void user::setAge()
{
	cout << "Enter you're age: ";
	cin >> age;
	cout << endl;
}

string user::getName()
{
	return name;
}

string user::getMale()
{
	return male;
}

float user::getAge()
{
	return age;
}



