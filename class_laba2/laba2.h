#pragma once
#include <string>

using namespace std;

class student
{
	string fio;
	string group;
	double sred;
public:
	//конструкторы с и без параметров
	student();
	student(string, string, double);
	//копирование и деструктор
	student(const student&);
	~student();
	//селекторы
	string get_fio();
	string get_group();
	float get_sred();
	//модификаторы
	void set_fio(string);
	void set_group(string);
	void set_sred(double);

	void print();
};