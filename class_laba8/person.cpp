#include "person.h"
person::person()
{
	name = "";
	age = 0;
}
person::person(string n, int a)
{
		name = n;
		age = a;
}
person::~person()
{
}
person::person(const person& p)
{
	name = p.name;
	age = p.age;
}
person& person::operator=(const person& p)
{
	if (&p == this) return *this;
	name = p.name;
	age = p.age;
	return *this;
}
string person::get_name()
{
	return name;
}
int person::get_age()
{
	return age;
}
void person::set_name(string n)
{
	name = n;
}
void person::set_age(int a)
{
	age = a;
}
void person::show()
{
	cout << " Имя - " << name << endl;
	cout << " Возраст - " << age << endl;
}
void person::input()
{
	cout << " Имя - ? "; cin >> name;
	cout << " Возраст - ? "; cin >> age;
}