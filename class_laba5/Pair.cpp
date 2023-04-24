#include "Pair.h"
#include <iostream>
using namespace std;

Pair::Pair(void)
{
	first = 0;
	second = 0;
}
//деструктор
Pair::~Pair(void)
{
}
//конструктор с параметрами
Pair::Pair(int ffirst, int ssecond)
{

	first = ffirst;
	second = ssecond;
}
//конструктор копировани¤
Pair::Pair(const Pair& t)
{
	first = t.first;
	second = t.second;
}
//селекторы
int Pair::get_first()
{
	return first;
}
int Pair::get_second()
{
	return second;
}
//модификаторы
void Pair::set_first(int ffirst)
{
	first = ffirst;
}
void Pair::set_second(int ssecond)
{
	second = ssecond;
}
//перегрузка приваивани¤
Pair& Pair::operator=(const Pair& t)
{
	if (this == &t) return *this;
	first = t.first;
	second = t.second;
	return *this;
}
//перегрузка ввода-вывода
ostream& operator<<(ostream& out, const Pair& t)
{
	out << "\nпервое число в паре = " << t.first;
	out << "\nвторое число в паре = " << t.second;
	out << "\n";
	return out;
}
istream& operator>>(istream& in, Pair& t)
{
	cout << " введите первое число в паре "; in >> t.first;
	cout << " введите второе число в паре "; in >> t.second;
	return in;
}
//методы сравнени¤ пар из варианта
bool Pair::operator>(const Pair& t)
{
	return (first > t.first) || (first == t.first) && second > t.second;
}
bool Pair::operator<(const Pair& t)
{
	return (first < t.first) || (first == t.first) && second < t.second;
}
bool Pair::operator==(const Pair& t)
{
	return (first == t.first) && (second == t.second);
}
void Pair::show()
{
	cout << "первое число " << first <<endl;
	cout << "второе число " << second<< endl;
}