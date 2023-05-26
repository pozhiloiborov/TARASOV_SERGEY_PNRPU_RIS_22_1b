#include <iostream>
#include <map>
#include <C:\Users\serge\OneDrive\Документы\GitHub\Tarasov_Sergey_LABS_PSTU_RIS_22_1b\class_laba12\task2\time.h> 
#include <C:\Users\serge\OneDrive\Документы\GitHub\Tarasov_Sergey_LABS_PSTU_RIS_22_1b\class_laba12\task2\time.cpp> 
#include <iostream>
#include "vvector.h"
using namespace std;

int main()
{
    Vector<Time> container(3);
    setlocale(LC_ALL, "Russian");
    int n;
    container.Print();
    cout << endl;

    Time a = container.max();
    container.add(a);
    container.Print();
    cout << endl;

    int b = container.min();
    container.del(b);
    container.Print();
    cout << endl;

    Time c = container.sred();
    container.add_sred(c);
    container.Print();
    cout << endl;
    return 0;
}