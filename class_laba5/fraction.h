#pragma once
#include "Pair.h"
//����� fraction ����������� �� ������ Pair
class fraction :
	public Pair
{
public:
	void show();//������� ��� ��������� ��������� ������ � ������� ���������
	//����������� ��� ����������
	fraction(void);
	//����������
	~fraction(void);
	//����������� � �����������
	fraction(int, int);
	fraction(const fraction&);
	//���������
	int get_firstpart();
	int get_secondpart();
	//������������
	void set_first(int);
	void set_second(int);
	//���������� �����������
	fraction& operator=(const fraction&);
	//���������� �����-������
	friend ostream& operator<<(ostream& out, const fraction& t);
	friend istream& operator>>(istream& in, fraction& t);
	// ������ ����� ������� ���������
	bool operator == (const fraction&);
	bool operator>(const fraction&);
	bool operator<(const fraction&);
protected:
	//����� � ������� �����
	int first_part;
	int second_part;
};

