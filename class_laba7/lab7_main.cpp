//����� - ��������� ������ � ���������� ���� int.����������� �������� :
//[] � ������� �� �������;
//() � ����������� ������� �������;
//+����� � ��������� ��������� �� ���� ��������� �������;
//
//���������������� ����� Time ��� ������ � ���������� �����������.�������� ������ ���� ����������� � ���� ���� ����� : ������ ���� int � ������� ���� int.��� ������ ������ ���������� �� ������ ����������.

#include  "time.h"
#include "vector.h" 
#include <iostream>
using namespace std;

void main()
{

	//�������������, ���� � ����� �������� ������� 
	Vector<int>e(5,0);
	cin >> e;
	cout << e << endl;
	//������������� � ����� �������� ������� 
	Vector <int>g(10,1);
	cout << g << endl;
	//�������� ������������
	g=e;
	cout << g << endl;
	//������ �� ������� 
	cout <<e[2]<<endl;
	//��������� ����� ������� 
	cout<<"size="<<e()<<endl;
	//�������� �������� � ���������� 
	g=e+10;
	cout << g << endl;
	system("pause");
	system("cls");
	Time t;
	cin >> t; 
	cout << t << endl;
	int k;
	cout << "k?";
	cin >> k;
	Time p;
	p = t + k;
	cout << p;
	system("pause");
	system("cls");
	cin >> t;
	cout << t;
	Vector<Time>A(5, t); cin >> A; cout << A << endl;
	Vector <Time>B(10, t); cout << B << endl;
	B = A;
	cout << B << endl; cout << A[2] << endl;
	cout << "size=" << A() << endl;
	//B = A + t;
	cout << B << endl;

}
