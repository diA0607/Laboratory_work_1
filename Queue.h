#pragma once
#include <iostream>
class Queue {
public:
	Queue(); //конструктор
	void insert(int data);
	int remove();
	//Queue(int data);
	void printQueue();
	Queue* copy();
	int Queue_Size();
	static Queue* merge(Queue* first, Queue* second, Queue* thrid);
private:
	struct item { //узел связного списка
		int value; //элемент
		item* point_Next; //указатель на следующий элемент
	};
	item* tail = nullptr; //указатель на последний узел списка
	int size = 0;
};
