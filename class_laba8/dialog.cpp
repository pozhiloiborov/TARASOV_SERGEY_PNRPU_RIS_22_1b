#pragma once
#include "dialog.h"
#include "event.h"
#include <iostream>
#include "vector.h"
using namespace std;
//конструктор
Dialog::Dialog(void):vector()
{
	EndState = 0;
}
//деструктор
Dialog::~Dialog(void)
{
}
//получение события
void Dialog::GetEvent(TEvent& event)
{
	string OpInt = "m+-s?q"; //строка содержит коды операций
	string s;
	string param;

	char code; cout << '>';
	cin >> s; code = s[0];//первый символ команды
	if(OpInt.find(code)>=0)//является ли символ кодом операции
	{
		event.what = evMessage;
		switch (code)
		{
		case 'm':event.command = cmMake;break;//создать группу
		case '+': event.command = cmAdd;break;//добавить объект в группу
		case '-': event.command=cmDel;break;//удалить объект из группы
		case 's': event.command =cmShow;break;//удалить объект из группы
		case '?': event.command=cmShowOne;break;//просмотр группы
		case 'q': event.command = cmQuit;break; //конец работы
		default: event.command = error; break;
		}
		//выделяем параметры команды, если они есть
		if(s.length()>1)
		{
			param = s.substr(1, s.length() - 1);

			int A = atoi(param.c_str());//преобразуем парметр в число
			event.a=A;//записываем в сообщение
		}
	}
else event.what = evNothing;//пустое событие
}

int Dialog::Execute()
{
	TEvent event;
	do {
		EndState = 0;
		GetEvent(event); //получить событие
		HandleEvent(event); //обработать событие
	} while (!Valid());
	return EndState;
}

int Dialog::Valid()
{
	if (EndState == 0) return 0;
	else return 1;
}
void Dialog::ClearEvent(TEvent& event)
{
	event.what = evNothing;//пустое событие
}

void Dialog::EndExec()
{
	EndState = 1;
}

//обработчик событий
void Dialog::HandleEvent(TEvent& event)
{
	if (event.what == evMessage)
	{
		switch (event.command)
		{
		case cmMake://создание группы
			size=event.a; //размер группы
			beg = new object * [size];//выделяем память под массив указателей
			cur=0; //текущая позиция
			ClearEvent(event);//очищаем событие
			break;
		case cmAdd://добавление
			add(); ClearEvent(event); break;
		case cmDel:pop(); //удаление
			ClearEvent( event ); break;
		case cmShow:
			show(); //просмотр
			ClearEvent( event );
			break;
		case cmShowOne:
			int num;
			num = event.a; //номер нужного элемента
			showOne(num); //просмотр одного элемента
			ClearEvent(event);
			break;
		case cmQuit:EndExec(); //выход
			ClearEvent( event );
			break;
		default:
			cout << "Неверный ввод. " << endl;
			ClearEvent(event);
			break;
		};
	};
}
