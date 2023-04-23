#include "fraction.h"
#include  <iostream>
using namespace std;
//����������� ��� ����������
fraction::fraction(void)
{
	first_part = 0;
	second_part = 0;
}
//����������
fraction::~fraction(void)
{
}
//����������� � �����������
fraction::fraction(int first_part, int second_part) :Pair(first_part, second_part)
{
	this->first_part = first_part;
	this->second_part = second_part;
}

//����������� ����������
fraction::fraction(const fraction& t)
{
	first_part = t.first_part;
	second_part = t.second_part;
}
//���������
int fraction::get_firstpart()
{
	return first_part;
}
int fraction::get_secondpart()
{
	return  second_part;
}
//������������
void fraction::set_first(int  ffirst)
{
	first_part = ffirst;
}
void fraction::set_second(int ssecond)
{
	second_part = ssecond;
}
//���������� �����������
fraction& fraction::operator=(const fraction& t)
{
	if (this == &t) return *this;
	first_part = t.first_part;
	second_part = t.second_part;
	return *this;
}
//���������� �����-������
ostream& operator<<(ostream& out, const fraction& t)
{
	out << "\n����� ����� ����� = " << t.first_part;
	out << "\n������� ����� ����� = " << t.second_part;
	out << "\n";
	return out;
}
istream& operator>>(istream& in, fraction& t)
{
	cout << "������� ����� ����� ����� "; in >> t.first_part;
	cout << "������� ������� ����� ����� "; in >> t.second_part;
	return in;
}
// ������ ����� ������� ��������
bool fraction::operator == (const fraction& t)
{
	double value1 = first_part / second_part;
	double value2 = t.first_part / t.second_part;
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
void  fraction::show()
{
	cout << "����� ����� " << first_part << endl;
	cout << "������� ����� " << second_part << endl;
}