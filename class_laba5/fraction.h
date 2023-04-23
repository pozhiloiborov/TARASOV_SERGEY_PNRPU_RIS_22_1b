#pragma once
#include "Pair.h"
//класс fraction наследуется от класса Pair
class fraction :
	public Pair
{
public:
	void show();//функция для просмотра артибутов класса с помощью указателя
	//конструктор без параметров
	fraction(void);
	//деструктор
	~fraction(void);
	//конструктор с параметрами
	fraction(int, int);
	fraction(const fraction&);
	//селекторы
	int get_firstpart();
	int get_secondpart();
	//модификаторы
	void set_first(int);
	void set_second(int);
	//перегрузка приваивания
	fraction& operator=(const fraction&);
	//перегрузка ввода-вывода
	friend ostream& operator<<(ostream& out, const fraction& t);
	friend istream& operator>>(istream& in, fraction& t);
	// полный набор методов сравнения
	bool operator == (const fraction&);
	bool operator>(const fraction&);
	bool operator<(const fraction&);
protected:
	//целая и дробная часть
	int first_part;
	int second_part;
};

