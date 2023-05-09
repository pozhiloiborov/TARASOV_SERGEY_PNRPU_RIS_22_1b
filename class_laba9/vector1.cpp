#include "vector1.h"
#include <iostream>
using namespace std;
vector::vector(int n)
{
	size = n;
	beg = new int[n];
	for (int i = 0; i < n;i++)
	{
		beg[i] = 0;
	}
}
vector::vector(int s, int* mas)
{
	size = s;
	beg = new int[size]; 
	for (int i = 0;i < size;i++)
		beg[i] = mas[i];
}
vector::vector(const vector& v)
{
	size = v.size;
	beg = new int[size];
	for (int i = 0; i < size;i++)
	{
		beg[i] = v.beg[i];
	}
}
vector::~vector()
{
	if ( beg!=0 ) delete[] beg;
}
const vector& vector::operator=(const vector& v)
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
int vector::operator[](int i)
{
	if (i < 0)throw 2;
	if (i >= size) throw 3;
	return beg[i];
}
vector vector::operator+(int a)
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
vector vector::operator-(int n)
{
	if (size == 0) throw 4;
	else if (size < n)
	{
		/*size = 0;
		delete[] beg;
		beg = 0;*/
		throw 5;
	}
	else if (size == n)
	{
		size = 0;
		delete[] beg;
		beg = 0;
		return *this;
	}
	else if (size>n){
		size = size - n;
		return *this;
	}
}
ostream& operator<<(ostream& out, const vector& v)
{
	if (v.size == 0) out << "ѕусто."<<endl;
	else
	{
		for (int i = 0;i < v.size;i++)
			out << v.beg[i] << " ";
		out << endl;
	}
	return out;

}
istream& operator>>(istream& in, vector& v)
{
	for (int i = 0;i < v.size;i++)
	{
		in >> v.beg[i];
	}
	return in;

}