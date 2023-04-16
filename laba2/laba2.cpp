#include <string>
#include <iostream>
#include "laba2.h"
using namespace std;

	
student::student()
{
	cout << " ����������� ��� ���������� " << endl;
	fio = "";
	group = "";
	sred = 0;
}
student::student(string F, string G, double S)
{
	cout << " ����������� � ����������� " << endl;
	fio = F;
	group = G;
	sred = S;
}
student::student(const student& studentik)
{
	cout << " ����������� ����������� " << endl;
	fio = studentik.fio;
	group = studentik.group;
	sred = studentik.sred;
}
student::~student()
{
	cout << " ���������� " << endl;
}
string student::get_fio()
{
	return fio;
}
string  student::get_group()
{
	return group;
}
float student::get_sred()
{
	return sred;
}
void  student::set_fio(string fioo)
{
	fio = fioo;
}
void  student::set_group(string groupp)
{
	group = groupp;
}
void  student::set_sred(double sredd)
{
	sred = sredd;
}
void  student::print()
{
	cout << "  ��� - " << fio <<" ." << endl;
	cout << "  ������ - " << group << " ." << endl;
	cout << "  ������� ���� - " << sred << " ." << endl;
}
