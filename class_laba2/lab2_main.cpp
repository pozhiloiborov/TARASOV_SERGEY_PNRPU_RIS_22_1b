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
	//конструктор без параметров
	cout << "student A\n";
	student A;
	A.print();
	//конструктор с параметрами
	cout << "student B\n";
	student B("Владимир Владимирович Владимиров", " РИС-22-3б", 4.41);
	B.print();
	//конструктор копирования
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
	cout << " Введите ФИО " << endl;
	cin >> fio;
	cout << " Введите группу " << endl;
	cin >> group;
	cout << " Введите cредний балл " << endl;
	cin >> sred;
	student studentik(fio, group, sred);
	return studentik;
}
void print_student(student p)
{
	p.print();
}
