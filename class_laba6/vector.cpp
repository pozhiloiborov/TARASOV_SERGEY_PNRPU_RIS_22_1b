#include "vector.h"
#include <iostream>
using namespace std;
vector::vector(int s,int k)//конструктор с параметрами: выделяет память под s элементов и заполняет их значением k
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size;i++)
	{
		data[i] = k;
	}
	beg = Iterator(); // создаем объект-итератор по умолчанию
	end = Iterator();
	beg.elem = &data[0];
	end.elem = &data[size];
}
vector::vector(const vector& v)//конструктор копирования
{
	size = v.size;
	data = new  int[size];
	for (int i = 0; i < size;i++)
	{
		data[i] = v.data[i];
	}
	beg = v.beg;
	end = v.end;
}
vector::~vector()
{
	delete[] data;
	data = 0;
}
vector& vector::operator = (const vector& v)//операция присваивания
{
	if (this == &v) return *this;
	size = v.size;
	data = new int[size];
	for (int i = 0; i < size;i++)
	{
		data[i] = v.data[i];
	}
	beg = v.beg;
	end = v.end;
	return *this;
}
int& vector::operator[](int index)//операция доступа по индексу
{
	if (index < size) return data[index];
	else cout << "\nИндекс больше размера!\n";
}
vector vector::operator+(const int k)//операция добавления константы
{
	vector temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.data[i] = data[i] + k;
	}
	return temp;
}
int vector::operator()()//операция возвращающая длину вектора
{
	return size;
}
istream& operator>>(istream& in, vector& v)
{
	for (int i = 0; i < v.size;i++)
	{
		cout << "введите элемент " << endl;
		in >> v.data[i] ;
	}
	return in;
}
ostream& operator<<(ostream& out, const vector& v)
{
	for (int i = 0; i < v.size;i++)
	{
		out << v.data[i]<<" ";
	}
	return out;
}