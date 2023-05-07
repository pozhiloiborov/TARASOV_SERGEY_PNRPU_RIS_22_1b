#include "student.h"
student::student():person()
{
	rating = 0;
}
student::~student()
{
}
void student::show()
{
	cout << " Имя - " << name << endl;
	cout << " Возраст - " << age << endl;
	cout << " Рейтинг - " << rating << endl;
}
void student::input()
{
	cout << " Имя - ? "; cin >> name;
	cout << " Возраст - ? "; cin >> age;
	cout << " Рейтинг - ? ";  cin >> rating;
}
student::student(string n, int a, float r)
{
	name = n;
	age = a;
	rating = r;
}
student& student::operator=(const student& s)
{
	if (&s == this) return *this;
	name = s.name;
	age = s.age;
	rating = s.rating;
	return *this;
}
student::student(const student& s)
{
	name = s.name;
	age = s.age;
	rating = s.rating;
}
void student::set_rating(float r)
{
	rating = r;
}
float student::get_rating()
{
	return rating;
}
