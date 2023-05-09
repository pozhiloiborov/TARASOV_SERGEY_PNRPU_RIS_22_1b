#include "vector2.h"
#include "error.h"
#include <iostream>
#include <string>
using namespace std;
vector2::vector2(int n)
{
	size = n;
	beg = new int[n];
	for (int i = 0; i < n;i++)
	{
		beg[i] = 0;
	}
}
vector2::vector2(int s, int* mas)
{
	size = s;
	beg = new int[size];
	for (int i = 0;i < size;i++)
		beg[i] = mas[i];
}
vector2::vector2(const vector2& v)
{
	size = v.size;
	beg = new int[size];
	for (int i = 0; i < size;i++)
	{
		beg[i] = v.beg[i];
	}
}
vector2::~vector2()
{
	if (beg != 0) delete[] beg;
}
const vector2& vector2::operator=(const vector2& v)
{
	if (this == &v) return *this;
	if (beg != 0)
		delete[]beg;
	size = v.size;
	beg = new int[size];
	for (int i = 0;i < size;i++)
		beg[i] = v.beg[i];
	return*this;
}
int vector2::operator[](int i)
{
	if (i < 0)throw error("ERROR. [i] , i<0 ");
	if (i >= size) throw error("ERROR. [i] , i>=size ");
	return beg[i];
}
vector2 vector2::operator+(int a)
{
	if (size != 0)
	{
		for (int i = 0; i < size;i++)
			beg[i] = beg[i] + a;
	}
	return *this;
}
//-n - удал¤ет n элементов из конца вектора.
//5	Ц в операции Ц при попытке удалить элемент из пустого вектора.
vector2 vector2::operator-(int n)
{
	if (size == 0) throw error("ERROR. -n , size==0 ");
	else if (size < n)
	{
		/*size = 0;
		delete[] beg;
		beg = 0;*/
		throw error("ERROR. - n, size < n ");
	}
	else if (size == n)
	{
		size = 0;
		delete[] beg;
		beg = 0;
		return *this;
	}
	else if (size > n) {
		size = size - n;
		return *this;
	}
}
ostream& operator<<(ostream& out, const vector2& v)
{
	if (v.size == 0) out << "ѕусто." << endl;
	else
	{
		for (int i = 0;i < v.size;i++)
			out << v.beg[i] << " ";
		out << endl;
	}
	return out;

}
istream& operator>>(istream& in, vector2& v)
{
	for (int i = 0;i < v.size;i++)
	{
		in >> v.beg[i];
	}
	return in;

}