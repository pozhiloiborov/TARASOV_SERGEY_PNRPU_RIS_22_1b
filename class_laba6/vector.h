#pragma once
#include <iostream>
using namespace std;
class Iterator
{
	friend class vector;//дружественный класс 
public:
	Iterator()
	{ 
		elem = 0; 
	}//конструктор без параметров
	Iterator(const Iterator& it)
	{
		elem = it.elem; 
	}//конструктор копирования
	//перегруженные операции сравнения
	bool operator==(const Iterator& it)
	{
		return elem == it.elem; 
	} 
	bool operator!=(const Iterator& it) 
	{ 
		return elem != it.elem; 
	}
	//перегруженная операция инкремент 
	Iterator operator++(int)
	{
		Iterator tmp(*this);
		++elem;
		return tmp;
	}
	//перегруженная операция декремент 
	Iterator operator--(int)
	{
		Iterator tmp(*this);
		--elem;
		return tmp;
	}
	//перегруженная операция разыменования
	int& operator *() const 
	{
		return*elem; 
	} 
private:
	int* elem;
};
class vector
{
public:
	vector(int s,int k=0);//конструктор с параметрами: выделяет память под s элементов и заполняет их значением k
	vector(const vector&);//конструктор копирования
	~vector();
	vector& operator = (const vector&);//операция присваивания
	int& operator[](int index);//операция доступа по индексу
	vector operator+(const int k);//операция добавления константы
	int operator()();//операция возвращающая длину вектора
	friend istream& operator>>(istream&, vector&);
	friend ostream& operator<<(ostream&, const vector&);
	Iterator first()
	{
		return beg;
	}
	Iterator last()
	{
		return end;
	}
private:
	int size;
	int* data;//указатель на динамический массив значений веткора
	Iterator beg;
	Iterator end;
};

