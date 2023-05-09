#pragma once
#include  <iostream>

using namespace std;
class vector
{
	int size;
	int* beg;
public:
	vector() { size = 0; beg = 0; };
	vector(int n);
	vector(int s, int* mas);
	vector(const vector& v);
	~vector();
	const vector& operator=(const vector& v);
	int operator[](int i);
	vector operator+(int a);
	vector operator-(int n);
	friend ostream& operator<<(ostream& out, const vector& v);
	friend istream& operator>>(istream& in, vector& v);

};