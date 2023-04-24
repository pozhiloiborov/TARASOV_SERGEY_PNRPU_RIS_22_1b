#include "Pair.h"
#include "object.h"
#include "fraction.h"
#include "vector.h"
#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);SetConsoleOutputCP(1251);
	Pair a;
	cin >> a;
	cout << a << endl;
	object* p = &a;
	p->show();
	cout << "================================" << endl;
	fraction b;
	cin >> b;
	cout << b << endl;
	p = &b;
	p->show();
	system("pause");
	system("cls");
	vector vec(5);
	p = &a;
	vec.Add(p);
	p = &b;
	vec.Add(p);
	cout << vec;
	vec.show();
	system("pause");
}