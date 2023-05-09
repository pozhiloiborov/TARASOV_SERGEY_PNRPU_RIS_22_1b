#pragma once
#include  <iostream>

using namespace std;
class vector2
{
	int size;
	int* beg;
public:
	vector2() { size = 0; beg = 0; };
	vector2(int n);
	vector2(int s, int* mas);
	vector2(const vector2& v);
	~vector2();
	const vector2& operator=(const vector2& v);
	int operator[](int i);
	vector2 operator+(int a);
	vector2 operator-(int n);
	friend ostream& operator<<(ostream& out, const vector2& v);
	friend istream& operator>>(istream& in, vector2& v);

};
