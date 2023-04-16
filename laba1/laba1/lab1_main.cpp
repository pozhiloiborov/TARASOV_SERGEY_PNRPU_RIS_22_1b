
#include <iostream>
#include "lab1.h"
using namespace std;

lab1 make_lab1(int a, int b)
{
	lab1 t;
	t.init(a, b);
	return t;
}

int main()
{
	double k;
	int first, second;
	cout << " first "; cin >> first;
	cout << " second "; cin >> second;
	lab1 b = make_lab1(first, second);
	b.print();
	k = b.func();
	if (k != -1) cout << b.func() << " Resultat raboti\n";
	else cout << " error (znamenatel = 0)\n";
	b.read();
	b.print();
	k = b.func();
	if (k!=-1) cout << b.func() << " Resultat raboti\n";
	else cout << " error (znamenatel = 0)\n";;
	return 0;
}