#pragma once
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
	friend ostream& operator<< (ostream& out, const Time&); 
	friend istream& operator>> (istream& in, Time&);
public:
	virtual ~Time(void) {}; 
	Time operator+(Time k);
	Time operator+(int k);
private:
	int min, sec;
};
