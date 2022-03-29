#pragma once
#include <iostream>
class Queue {
public:
	Queue(); //�����������
	void insert(int data);
	int remove();
	//Queue(int data);
	void printQueue();
	Queue* copy();
	int Queue_Size();
	static Queue* merge(Queue* first, Queue* second, Queue* thrid);
private:
	struct item { //���� �������� ������
		int value; //�������
		item* point_Next; //��������� �� ��������� �������
	};
	item* tail = nullptr; //��������� �� ��������� ���� ������
	int size = 0;
};
