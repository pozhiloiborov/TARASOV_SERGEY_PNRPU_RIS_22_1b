#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

struct Stack {
    int size = 0;
    Node* head = nullptr;
};

void push(Stack*, int value);
void pop(Stack*);
void last(Stack*);

int main()
{
    setlocale(LC_ALL, "Russian");
    Stack* stack = new Stack;
    int n,value;
    do {
        system("cls");
        cout << "������� 0 ��� ���������� ������\n";
        cout << "������� 1 ��� ���������� �������� \n";
        cout << "������� 2 ��� �������� ��������\n";
        cout << "������� 3 ��� ������ �������� �����\n";
        cout << "============================================================================\n";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "  ������� �������� �������� "; cin >> value;
            push(stack, value);
            break;
        }
        case 2:
        {
            pop(stack);
            break;
        }
        case 3:
        {
            last(stack);
            cout << " ������� ����� ���������� ";cin >> value;
            break;
        }
        case 0:
            cout << " ���������� ������ ";
            break;
        }
    } while (n != 0);

    delete stack;
}

void push(Stack* stack, int value)
{
    if (stack->head == nullptr)
        stack->head = new Node{ value };
    else
    {
        Node* new_node = new Node;
        new_node->data = value;
        new_node->next = stack->head;
        stack->head = new_node;
    }
    stack->size++;
}

void pop(Stack* stack)
{
    if (stack->head != nullptr)
    {
        Node* temp = stack->head;
        stack->head = temp->next;
        stack->size--;
        delete temp;
    }
}

void last(Stack* stack)
{
    if (stack->head == nullptr)
        cout << "���� ����\n";
    else
        cout << "������� �������� ����� - " << stack->head->data << endl;
}