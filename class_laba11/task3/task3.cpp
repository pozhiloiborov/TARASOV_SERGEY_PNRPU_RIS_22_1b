//������ 3
//������������������� ����� � ������(��.������������ ������ �7)
//������� 3
//����� ������������ ������� � �������� ��� � ������ ����������
//������� 4
//����� ����������� ������� � ������� ��� ��  ����������	
//������� 5
//� ������� �������� �������� ������� �������������� ����������


//������ 3
//1.	������� ������������������� �����, ��������� � �������� ���������� ���������������� ���������.
//2.	��������� ��� ����������.
//3.	�������� �������� � ������������ � ��������
//4.	������� �������� � ������������ � ��������.
//5.	��������� ������� �������� ��� ����������� ����������.
//6.	���������� ���� ������� �������� � ���� ������� �������������������� ������.

#include <C:\Users\serge\OneDrive\���������\GitHub\Tarasov_Sergey_LABS_PSTU_RIS_22_1b\class_laba11\task2\time.h>
#include <C:\Users\serge\OneDrive\���������\GitHub\Tarasov_Sergey_LABS_PSTU_RIS_22_1b\class_laba11\task2\time.cpp>
#include "vector.h"
#include <iostream>
using namespace std;

void main()
{
	Vector<Time>vec(5);//������� ������ �� 5 ���������
	vec.Print();//������ �������
	Time temp;
	temp = vec.max();
	cout << temp << endl;
	vec.add(temp);
	vec.Print();
	int mini;
	mini = vec.min();
	cout << mini << endl;
	vec.del(mini);
	vec.Print();
	vec.sred();
	temp = vec.sred();
	cout << temp << endl;
	vec.add_sred(temp);
	vec.Print();
}
