// ласс - контейнер ¬≈ “ќ– с элементами типа int.–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера вектора;
//+число Ц добавл¤ет константу ко всем элементам вектора;
//
//ѕользовательский класс Time дл¤ работы с временными интервалами.»нтервал должен быть представлен в виде двух полей : минуты типа int и секунды типа int.при выводе минуты отдел¤ютс¤ от секунд двоеточием.

#include  "time.h"
#include "vector.h" 
#include <iostream>
using namespace std;

void main()
{

	//инициализаци¤, ввод и вывод значений вектора 
	Vector<int>e(5,0);
	cin >> e;
	cout << e << endl;
	//инициализаци¤ и вывод значений вектора 
	Vector <int>g(10,1);
	cout << g << endl;
	//операци¤ присваивани¤
	g=e;
	cout << g << endl;
	//доступ по индексу 
	cout <<e[2]<<endl;
	//получение длины вектора 
	cout<<"size="<<e()<<endl;
	//операци¤ сложени¤ с константой 
	g=e+10;
	cout << g << endl;
	system("pause");
	system("cls");
	Time t;
	cin >> t; 
	cout << t << endl;
	int k;
	cout << "k?";
	cin >> k;
	Time p;
	p = t + k;
	cout << p;
	system("pause");
	system("cls");
	cin >> t;
	cout << t;
	Vector<Time>A(5, t); cin >> A; cout << A << endl;
	Vector <Time>B(10, t); cout << B << endl;
	B = A;
	cout << B << endl; cout << A[2] << endl;
	cout << "size=" << A() << endl;
	//B = A + t;
	cout << B << endl;

}
