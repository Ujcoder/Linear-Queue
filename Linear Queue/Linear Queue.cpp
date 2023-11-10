// Linear Queue
using namespace std;
#include<iostream>
#define MAX 8
int queue[MAX];
int rear = -1;
int front = -1;

void enqueue(int item)
{
	if (rear == MAX - 1)
	{
		cout << "Queue is Full !" << endl;
		return;
	}
	if (front == -1)
		front = 0;
	rear++;
	queue[rear] = item;
	return;
}

int dequeue()
{
	if (front == -1 && rear == -1)
	{
		cout << "Queue is Empty !" << endl;
		return -1;
	}
	int item = queue[front];
	if (front == rear)
		front = rear = -1;
	else
		front++;
	return item;
}

void display()
{
	if (front == -1)
	{
		cout << "Queue is Empty" << endl;
		return;
	}
	cout << "All lement in Queue is: " << endl;
	if (front <= rear)
		for (int i = front; i <= rear; i++)
			cout << queue[i] << endl;
	return;
}

int main()
{
	int value, choice;
	do
	{
		cout << " 1.Enqueue 2.Dequeue 3.Display 4.Exit" << endl;
		cout << "Enter the Choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:cout << "Enter Enqueue Element :  " ;
			cin >> value;
			enqueue(value);
			break;
		case 2:value = dequeue();
			cout << "The Element is deleted  : " << value << endl;
			break;
		case 3:display();
			break;
		default:cout << "Exiting.............!" << endl;
			choice = 4;
		}
	} while (choice != 4);
}