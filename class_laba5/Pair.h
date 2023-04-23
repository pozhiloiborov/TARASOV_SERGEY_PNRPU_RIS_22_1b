#pragma once
#include <iostream>
#include "object.h"
using namespace std;

class Pair:
	public  object
{
	//����������� ��� ����������
public:
	Pair(void);
public:
	void show();//������� ��� ��������� ��������� ������ � ������� ���������
	//����������
	virtual ~Pair(void);
	//����������� � �����������
	Pair(int, int);
	//����������� �����������
	Pair(const Pair&);
	//���������
	int get_first();
	int get_second();
	//������������
	void set_first(int);
	void set_second(int);
	//���������� �����������
	Pair& operator=(const Pair&);
	//���������� �����-������
	friend ostream& operator<<(ostream& out, const Pair& t);
	friend istream& operator>>(istream& in, Pair& t);
	//������ ��������� ��� �� ��������
	bool operator>(const Pair&);
	bool operator<(const Pair&);
	bool operator==(const Pair&);
	//��������
protected:
	int first;
	int second;
};

