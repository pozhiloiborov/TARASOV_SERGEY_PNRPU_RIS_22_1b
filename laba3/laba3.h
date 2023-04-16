#pragma once
#include <iostream>
using namespace std;
class Time
{
private:
	int mins;
	int secs;
public:
	Time();
	Time(int, int);
	Time(Time&);
	~Time();
	void set_mins(int);
	void set_secs(int);
	int get_mins();
	int get_secs();
	Time& operator=(const Time&);
	Time operator+(const Time&);
	bool operator==(const Time&);
	friend ostream& operator<<(ostream& out, const Time& t);
	friend istream& operator>>(istream& in, Time& t);
};