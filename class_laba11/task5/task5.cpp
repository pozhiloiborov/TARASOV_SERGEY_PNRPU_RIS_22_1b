//������ 5
//������������������� ����� � ������
//������� ���������� - ����.
//������� 3
//����� ������������ ������� � �������� ��� � ������ ����������
//������� 4
//����� ����������� ������� � ������� ��� ��  ����������	
//������� 5
//� ������� �������� �������� ������� �������������� ����������


//������ 5
//1.	������� ������������������� �����, ��������� � �������� ���������� ������� ����������.
//2.	��������� ��� ����������.
//3.	�������� �������� � ������������ � ��������
//4.	������� �������� � ������������ � ��������.
//5.	��������� ������� �������� ��� ����������� ����������.
//6.	���������� ���� ������� �������� � ���� ������� �������������������� ������.

#include <C:\Users\serge\OneDrive\���������\GitHub\Tarasov_Sergey_LABS_PSTU_RIS_22_1b\class_laba11\task2\time.h> 
#include <C:\Users\serge\OneDrive\���������\GitHub\Tarasov_Sergey_LABS_PSTU_RIS_22_1b\class_laba11\task2\time.cpp> 
#include <iostream>
#include <stack> 
#include <vector>
#include "vector.h"
using namespace std;

void  main()
{
	Vector<Time>v(3);
	v.Print();
	cout << endl;
	v.Add();
	v.Print();
	cout << endl;
	v.Del();
	v.Print();
	cout << endl;
	Time e;
	e = v.Srednee();
	v.Add_sred(e);
	v.Print();
	cout << endl;
}