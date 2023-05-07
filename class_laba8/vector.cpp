#include "vector.h"
#include "object.h"
#include "person.h"
#include "student.h"
#include <iostream>
using  namespace std;
vector::vector()
{
	beg = nullptr;
	size = 0;
	cur = 0;
}
vector::vector(int s)
{
	size = s;
	beg = new object*[s];
	cur = 0;
}
vector::~vector()
{
	if (beg != 0) delete[] beg;
		beg = 0; 
}
void vector::add()
{
	object* p;
	cout << "1. Добавить человека " << endl;
	cout << "2. Добавить студента " << endl;
	int y;
	cin >> y;
	if (y == 1)
	{
		person* a = new person;
		a->input();
		p = a;
		if (cur < size)
		{
			beg[cur] = p;
			cur++;
		}
	}
	else if (y == 2)
	{
		student* b = new student;
		b->input();
		p = b;
		if (cur < size)
		{
			beg[cur] = p;
			cur++;
		}
	}
	else return;

}
void vector::show()
{
	if (cur == 0) cout << "  Пусто. " << endl;
	object** p = beg;
	for (int i = 0; i < cur; i++)
	{
		(*p)->show();
		p++;
	}
}
void vector::pop()
{
	if (cur == 0) return;
	cur--;
}
int vector::operator()()
{
	return cur;
}
void vector::showOne(int num)
{
	object** p = beg;
	if (num <= cur)
	{
		int i = 0;
		while (i < num - 1)
		{
			i++;
			p++;
		}
		(*p)->show();
	}
	else cout << " Неверный ввод. " << endl;
}