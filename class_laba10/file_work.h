#pragma once
#include "time.h"
#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;
int make_file(const char* f_name)
{
	fstream stream(f_name, ios::out | ios::trunc); //открыть для записи
	if (!stream)return -1;//ошибка открытия файла
	int n;
	Time p;
	cout << "N? ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> p;//ввод атрибутов объекта из стандартного потока
		stream << p << "\n";//запись объекта в файловый поток
	}
	stream.close();//закрыть поток
	return n;//вернуть количество записанных объектов
}
int print_file(const char* f_name)
{
	fstream stream(f_name, ios::in);//открыть для чтения
	if(!stream)return -1;//ошибка открытия файла
	Time p;
	int i = 0;
	while (stream >> p)
	{
		cout << p << "\n"; i++;
	}
	stream.close();
	return i;
}
int del_file(const char* f_name, Time k)
{
	fstream temp("temp", ios::out);//открыть для записи
	fstream stream(f_name,ios::in);//открыть для чтения
	if(!stream)return -1;//ошибка открытия файла
	int i = 0;
	Time p;
	while (stream >> p)//пока нет конца файла выполняем чтение объекта
	{
		//если прочитан признак конца файла,то выход из цикла
		if (stream.eof()) break;
		i++;
		//если номер объекта не равен k, то записываем его во вспомогательый файл
		if(!(p==k)) temp<<p;
	}
	//закрыть файлы
	stream.close(); temp.close();
	remove(f_name);//удалить старый файл
	rename("temp", f_name);// переименовать temp
	return i;//количество прочитанных
}
int add_file(const char* f_name, int k,int nom)
{
	fstream temp("temp", ios::out);//открыть для записи
	fstream stream(f_name,ios::in);//открыть для чтения
	if(!stream)return -1;//ошибка открытия файла
	Time p;
	int i = 0;
	int j = 0;
	bool f=false;
	while (stream >> p)
	{
		if (stream.eof())break; i++;
		temp << p;
		if (i == nom)
		{
			for (int j = 0; j < k;j++)
			{
				cin >> p;
				temp << p;
				f = true;
			}
		}
	}
	stream.close();
	temp.close();
	remove(f_name);
	rename("temp", f_name);
	if (f==false) return -2;
	return 1;
}
int change_file(const char* f_name, Time pp)
{
	fstream temp("temp", ios::out);//открыть для записи
	fstream stream(f_name,ios::in);//открыть для чтения
	if(!stream)return -1;//ошибка открытия файла
	Time p;
	Time p1(1, 30);
	int i = 0, l = 0;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (p==pp)
		{
			p = p + p1;
			l++;
		}
		temp << p;
	}
	stream.close();
	temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;//количество измененных элементов
}

