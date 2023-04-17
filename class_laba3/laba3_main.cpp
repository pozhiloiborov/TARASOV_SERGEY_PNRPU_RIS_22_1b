#include "laba3.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Time a, b,c ;
	cin >> a >> b;
	//сложение временных интервалов
	c= a + b;
	cout << c;
	//сравнение временных интервалов
	if (a == b) cout << "a==b";
	else cout << "a!=b";
}