#include "laba3.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Time a, b,c ;
	cin >> a >> b;
	//�������� ��������� ����������
	c= a + b;
	cout << c;
	//��������� ��������� ����������
	if (a == b) cout << "a==b";
	else cout << "a!=b";
}