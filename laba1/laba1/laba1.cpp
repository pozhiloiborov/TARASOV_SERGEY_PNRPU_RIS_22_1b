
#include <iostream>
#include "lab1.h"

using namespace std;

void lab1::init(int a, int b)
{
	first = a;second = b;
}
void lab1::read()
{
	cout << " vvod first \n";cin >> first;
	cout << " vvod second \n";cin >> second;
}
void lab1::print()
{
	cout << "\nfirst = " << first;
	cout << "\nsecond = " << second << "\n";
}
double lab1::func() 
{
	if (second == 0) 
	{
		return -1;
	}
	return floor(first / second);
}

