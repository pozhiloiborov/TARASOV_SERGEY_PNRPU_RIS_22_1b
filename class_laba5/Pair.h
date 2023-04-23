#pragma once
#include <iostream>
#include "object.h"
using namespace std;

class Pair:
	public  object
{
	//конструктор без параметров
public:
	Pair(void);
public:
	void show();//функция для просмотра атрибутов класса с помощью указателя
	//деструктор
	virtual ~Pair(void);
	//конструктор с параметрами
	Pair(int, int);
	//конструктор копирования
	Pair(const Pair&);
	//селекторы
	int get_first();
	int get_second();
	//модификаторы
	void set_first(int);
	void set_second(int);
	//перегрузка приваивания
	Pair& operator=(const Pair&);
	//перегрузка ввода-вывода
	friend ostream& operator<<(ostream& out, const Pair& t);
	friend istream& operator>>(istream& in, Pair& t);
	//методы сравнения пар из варианта
	bool operator>(const Pair&);
	bool operator<(const Pair&);
	bool operator==(const Pair&);
	//атрибуты
protected:
	int first;
	int second;
};

