#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
struct List {
	Node* head;
	int count;
};
void show_list(List& list);
void push_front(List& list, int value);
int pop_front(List& list);
void push_back(List& list, int value);
int pop_back(List& list);
int add_after(List& list, int value, int number);
void removeelement(List& list, int number);
int add_several(List& list, int number, int k);
void clear_list(List& list);
int main()
{
	setlocale(LC_ALL, "Russian");
	List list;
	list.head = NULL;
	list.count = 0;
	int n,value,number,k,flag;
	do {
		system("cls");
		cout << "Введите 0 для завершения работы\n";
		cout << "Введите 1 для показа списка\n";
		cout << "Введите 2 для добавления элемента в начало списка\n";
		cout << "Введите 3 для добавления элемента в конец списка\n";
		cout << "Введите 4 для удаления элемента в начале списка\n";
		cout << "Введите 5 для удаления элемента в конце списка\n";
		cout << "Введите 6 для добавления элемента после элемента с заданным номером\n";
		cout << "Введите 7 для удаления элемента с заданным номером\n";
		cout << "Введите 8 для добавление k элементов после элемента с заданным номером\n";
		cout << "Введите 9 для удаления k элементов после элемента с заданным номером\n";
		cout << "Введите 10 для удаления данных из списка\n";
		cout << "============================================================================\n";
		cin >> n;
		switch (n)
		{
		case 1:
		{
			show_list(list);
			cout << "Введите что бы продолжить\n"; cin >> value;
			break;
		}
		case 2:
		{
			cout << " Введите значение элемента, для вставки в начало "; cin >> value;
			push_front(list, value);
			break;
		}
		case 3:
		{
			cout << " Введите значение элемента, для вставки в конец "; cin >> value;
			push_back(list, value);
			break;
		}
		case 4:
		{
			cout << " Удаление в начале списка \n";
			flag = pop_front(list);
			if (flag == -1) cout << "  Список пуст\n";
			else cout << " Элемент в начале списка со значением - " << flag << " был  удален \n";
			break;
		}
		case 5:
		{
			cout << " Удаление в конце списка \n";
			flag = pop_back(list);
			if (flag == -1) cout << "  Список пуст\n";
			else cout << " Элемент в конце списка со значением - " << flag << " был  удален \n";
			break;
		}

		case 6:
		{
			cout << " Введите номер элемента, после которого нужно вставить элемент  ";  cin >> number;
			cout << " Введите значение элемента для вставки "; cin >> value;
			flag = add_after(list, value, number-1);
			if (flag == -1) cout << " Что-то введено неверно :( ";
			break;
		}

		case 7:
		{
			cout << " Введите номер элемента, который нужно удалить ";cin >> number;
			removeelement(list, number);
			break;
		}

		case 8:
		{
			cout << " Введите номер элемента, после которого нужно вставить элементы  ";  cin >> number;
			cout << "Введите количество элементов для вставки "; cin >> k;
			flag = add_several(list, number-1, k);
			if (flag == -1) cout << "  Что-то введено неверно :(\n";
			break;
		}
		case 9:
		{
			cout << "Введите количество элементов для удаления "; cin >> k;
			cout << " Введите номер элемента,после которого нужно удалить ";cin >> number;
			for (int i = 0;i < k;i++)
			{
				removeelement(list, number);
			}
			break;
		}
		case 10:
		{
			clear_list(list);
			cout << "Данные удалены ";
			break;
		}
		case 0:
			cout << " Завершение работы ";
			break;
		}
	} while (n != 0);
}
// Функция печати списка
void show_list(List& list) {
	Node* temp = list.head;

	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}

	cout << endl;
}
// Функция добавления элемента в начало списка
void push_front(List& list, int value) {
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = list.head;

	list.head = newNode;
	list.count++;
}
// Функция удаления элемента в начале списка
int pop_front(List& list) {
	if (list.head == nullptr) {
		return -1; 
	}

	int result = list.head->data;
	Node* temp = list.head;

	list.head = list.head->next;
	list.count--;

	delete temp;

	return result;
}
// Функция добавления элемента в конец списка
void push_back(List& list, int value) {
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;

	if (list.head == nullptr) {
		list.head = newNode;
	}
	else {
		Node* temp = list.head;

		while (temp->next != nullptr) {
			temp = temp->next;
		}

		temp->next = newNode;
	}

	list.count++;
}
// Функция удаления элемента из конца списка
int pop_back(List& list) {
	if (list.head == nullptr) {
		return -1; 
	}

	int result;

	if (list.head->next == nullptr) {
		result = list.head->data;
		delete list.head;
		list.head = nullptr;
	}
	else {
		Node* temp = list.head;

		while (temp->next->next != nullptr) {
			temp = temp->next;
		}

		result = temp->next->data;

		delete temp->next;

		temp->next = nullptr;
	}

	list.count--;

	return result;
}
// Функция добавления элемента после элемента с заданным номером
int add_after(List& list, int value, int number) {
	if (list.head == nullptr || number >= list.count) {
		return -1; // ничего не делаем, если список пустой, number неверный
	}
	Node* current = list.head;
	for (int i = 1; i <= number && current != nullptr; i++) {
		current = current->next; // перебираем элементы до того, который имеет номер number
	}
	if (current == nullptr) {
		return -1; // number выходит за пределы списка
	}
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = current->next;
	current->next = newNode;
	current = newNode;
	list.count++;
	return 0;
}
// Функция удаления элемента по номеру
void removeelement(List& list, int number) {
	if (number < 1 || number > list.count) {
		return;
	}

	if (number == 1) {
		Node* temp = list.head;

		list.head = list.head->next;

		delete temp;

		list.count--;

		return;
	}

	Node* temp = list.head;

	for (int i = 1; i < number - 1; i++) {
		temp = temp->next;
	}

	Node* delNode = temp->next;

	temp->next = temp->next->next;

	delete delNode;

	list.count--;
}
// Функция добавления K элементов после элемента с заданным номером
int add_several(List& list,int number, int k) {
	if (list.head == nullptr || number >= list.count || k <= 0) {
		return -1; // ничего не делаем, если список пустой, number неверный, или k не положительное число
	}
	Node* current = list.head;
	for (int i = 1; i <= number && current != nullptr; i++) {
		current = current->next; // перебираем элементы до того, который имеет номер number
	}
	if (current == nullptr) {
		return -1; // number выходит за пределы списка
	}
	for (int i = 0; i < k; i++) {
		int value;
		cout << "Введите значение для вставки элемента\n";  cin >> value;
		Node* newNode = new Node;
		newNode->data = value;
		newNode->next = current->next;
		current->next = newNode;
		current = newNode;
		list.count++;
	}
	return 0;
}
// Функция очистки списка
void clear_list(List& list) {
	Node* temp = list.head;

	while (temp != nullptr) {
		Node* delNode = temp;

		temp = temp->next;

		delete delNode;
	}

	list.head = nullptr;
	list.count = 0;
}