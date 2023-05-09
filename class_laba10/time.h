#pragma once
#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;
class Time
{
public:
	Time(void);
	Time(int, int);
	Time(const Time&);
	Time& operator=(const Time&);
	//перегруженные операции ввода-вывода
	Time operator+(Time&);
	bool operator==(const Time&);
	friend ostream& operator<< (ostream& out, const Time&);
	friend istream& operator>> (istream& in, Time&);
	friend fstream& operator>> (fstream& fin, Time& p);
	friend fstream& operator<< (fstream& fout, Time& p);
private:
	int min, sec;
};
