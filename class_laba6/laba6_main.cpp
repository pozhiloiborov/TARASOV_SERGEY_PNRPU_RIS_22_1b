#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector v(5);
	cout << "vector v " << endl ;
	cout << v << endl << "==================================" << endl;
	cin >> v;
	cout << "vector v " << endl;
	cout << v << endl << "==================================" << endl;
	v[2] = 100;
	cout << "vector v[2]=100 " << endl;
	cout << v << endl << "==================================" << endl;
	vector a(10);
	cout << "vector a "  << endl;
	cout << a << endl << "==================================" << endl;
	a = v;
	cout << "vector a = vector v "<<endl;
	cout << a << endl << "==================================" << endl;
	vector c(10);
	c = a + 10;
	cout << "vector c = a + 10 " << endl;
	cout << c << endl << "==================================" << endl;
	cout << " длина с = " << c()<<endl;
	system("pause");
	system("cls");
	//разыменовываем значение, которое возвращает a.first() и выводим его 
	cout << " первый элемент - " << endl;
	cout<<*(a.first())<<endl;
	//переменную типа Iterator устанавливаем на первый элемент вектора а с
	//помощью метода first 
	Iterator i=a.first();
	//оперция инкремент
	cout << " инкремент, второй элемент - " << endl;
	i++;
	//разыменовываеи итератор и выводи его значение 
	cout<<*i<<endl;
	//выводим значения элеменов вектора с помощью итератора 
	cout << " значения элементов вектора с помощью итератора "<<endl;
	for( i=a.first();i!=a.last();i++)
		cout<<*i<<endl;
}