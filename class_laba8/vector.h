#pragma once
#include "object.h"
class vector
{
public:
	vector();
	vector(int);
	~vector();
	void add();
	void show();
	void pop();
	int operator()();
	void showOne(int);
protected:
	object** beg;
	int size;
	int cur;
};