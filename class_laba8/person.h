#pragma once
#include "object.h"
#include <iostream>
#include <string>
using namespace std;
class person :
	public object
{
public:
	person();
	person(string,int);
	~person();
	person(const person&);
	person& operator=(const person&);
	string get_name();
	int get_age();
	void set_name(string);
	void set_age(int);
	void show();
	void input();
	
protected:
	string name;
	int age;
};