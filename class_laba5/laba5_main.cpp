#include "Pair.h"
#include "object.h"
#include "fraction.h"
#include "vector.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
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
	system("pause");
}