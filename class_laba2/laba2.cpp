#include <string>
#include <iostream>
#include "laba2.h"
using namespace std;

	
student::student()
{
	cout << " Конструктор без параметров " << endl;
	fio = "";
	group = "";
	sred = 0;
}
student::student(string F, string G, double S)
{
	cout << " Конструктор с параметрами " << endl;
	fio = F;
	group = G;
	sred = S;
}
student::student(const student& studentik)
{
	cout << " Конструктор копирования " << endl;
	fio = studentik.fio;
	group = studentik.group;
	sred = studentik.sred;
}
student::~student()
{
	cout << " Деструктор " << endl;
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
	cout << "  ФИО - " << fio <<" ." << endl;
	cout << "  ГРУППА - " << group << " ." << endl;
	cout << "  СРЕДНИЙ БАЛЛ - " << sred << " ." << endl;
}
