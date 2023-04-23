#include "fraction.h"
#include  <iostream>
using namespace std;
//конструктор без параметров
fraction::fraction(void)
{
	first_part = 0;
	second_part = 0;
}
//деструктор
fraction::~fraction(void)
{
}
//конструктор с параметрами
fraction::fraction(int first_part, int second_part) :Pair(first_part, second_part)
{
	this->first_part = first_part;
	this->second_part = second_part;
}

//конструктор копировани¤
fraction::fraction(const fraction& t)
{
	first_part = t.first_part;
	second_part = t.second_part;
}
//селекторы
int fraction::get_firstpart()
{
	return first_part;
}
int fraction::get_secondpart()
{
	return  second_part;
}
//модификаторы
void fraction::set_first(int  ffirst)
{
	first_part = ffirst;
}
void fraction::set_second(int ssecond)
{
	second_part = ssecond;
}
//перегрузка присваивани¤
fraction& fraction::operator=(const fraction& t)
{
	if (this == &t) return *this;
	first_part = t.first_part;
	second_part = t.second_part;
	return *this;
}
//перегрузка ввода-вывода
ostream& operator<<(ostream& out, const fraction& t)
{
	out << "\nцелая часть числа = " << t.first_part;
	out << "\nдробная часть числа = " << t.second_part;
	out << "\n";
	return out;
 }
istream& operator>>(istream& in, fraction& t)
{
	cout << " введите целую часть числа "; in >> t.first_part;
	cout << " введите дробную часть числа "; in >> t.second_part;
	return in;
 }
// полный набор методов сравнени¤
bool fraction::operator == (const fraction& t)
{
	double value1 = first_part / second_part;
	double value2= t.first_part / t.second_part;
	return  value1 == value2;
}
bool  fraction::operator>(const fraction& t)
{
	double value1 = first_part / second_part;
	double value2 = t.first_part / t.second_part;
	return value1 > value2;
}
bool  fraction::operator<(const fraction& t)
{
	double value1 = first_part / second_part;
	double value2 = t.first_part / t.second_part;
	return value1 < value2;
}
