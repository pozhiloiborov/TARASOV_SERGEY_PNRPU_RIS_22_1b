#include <iostream>
#include <string>
#include  "laba2.h"
#include <windows.h>
using namespace std;

student make_student();
void print_student(student);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	//����������� ��� ����������
	cout << "student A\n";
	student A;
	A.print();
	//����������� � �����������
	cout << "student B\n";
	student B("�������� ������������ ����������", " ���-22-3�", 4.41);
	B.print();
	//����������� �����������
	cout << "student C\n";
	student C = B;
	C.print();
	cout << "student A\n";
	A = make_student();
	print_student(A);
	return 0;
}

student make_student()
{
	string fio;
	string group;
	double sred;
	cout << " ������� ��� " << endl;
	cin >> fio;
	cout << " ������� ������ " << endl;
	cin >> group;
	cout << " ������� c������ ���� " << endl;
	cin >> sred;
	student studentik(fio, group, sred);
	return studentik;
}
void print_student(student p)
{
	p.print();
}
