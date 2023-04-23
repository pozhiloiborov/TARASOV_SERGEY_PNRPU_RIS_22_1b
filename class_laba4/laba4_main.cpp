#include "Pair.h"
#include  "fraction.h"
#include <iostream>
#include <windows.h>

using namespace std;
//функции принмающие и получающие объект базового класса
void f1(Pair& c)
{
	c.set_first(993);
}
Pair f2()
{
	fraction l(123,321);
	return l;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//работа с классом Pair
	Pair a;
	cin >> a;
	cout <<" a "<< a;
	Pair b(93, 12);
	cout <<" b " <<b;
	//методы сравнения пар
	cout << "============ Проверка методов сравнения ============ " << endl;
	if (a > b) cout << " a больше чем b " << endl;
	else if (a < b) cout << " a меньше чем b " << endl;
	else if (a==b) cout << " a равен b " << endl;
	a = b;
	cout <<"============ Проверка работы присваивания ============ "<<endl<<" a "<< a;
	//Работа с классом fraction
	cout << "============ Работа с fraction ============ "<<endl;
	fraction c;
	cin >> c;
	cout << " c " << c;
	fraction d(90, 9);
	cout << " d " << d;
	//методы сравнения 
	cout << "============ Проверка методов сравнения ============ " << endl;
	if (c > d) cout << " Дробь c больше чем d " << endl;
	else if (c < d) cout << " Дробь c меньше чем d " << endl;
	else if (c == d) cout << " Дробь c равна d" << endl;
	//принцип подстановки
	cout << "============ Функции получающие и возвращающие объект базового класса, принцип подстановки ============ "<<endl;
	f1(b);
	cout << " b " << b;
	// a  -  Pair,  f2() return - fraction,but a still Pair
	a = f2();
	cout << " a "  << a;

}