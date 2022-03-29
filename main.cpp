#include <iostream>
#include "Queue_1.h"
#include "Queue_2.h"
#include "Queue_3.h"
using namespace std;

int main()
{
	Queue_3 Myqueue; //create queue
	Queue_3 copys;
	Queue_3 Two;
	Queue_3 Three;
	// interface
	int n = 1;
	
	while (n != 0)
	{
		cout << "1: Add value\n2: Delete value\n3: Print queue\n4: math operations\n5: create copy\n6: merge\n7: exit" << endl;
		cout << "Enter the number: ";
		cin >> n;
		if (n == 1) {
			// add value in queue
			system("cls");
			int value;
			cout << "Input value: ";
			cin >> value;
			Myqueue.insert(value);
		}
		else if (n == 2) {
			// delete value in queue
			system("cls");
			Myqueue.remove();
			cout << "value deleted";
			cout << "Queue: ";
			Myqueue.printQueue();

		}
		else if (n == 3) {
			// print queue
			system("cls");
			cout << "Queue: ";
			Myqueue.printQueue();
		}
		else if (n == 4) {
			system("cls");
			cout <<"Result: "<< Myqueue.math_operation() << endl;
		}
		else if (n == 5) {
			//create copy
			system("cls");
			Myqueue.copy();
			cout << "copy created\n";
		}
		else if (n == 6) {
			//merge queues
			system("cls");
			int p;
			cout << "Enter the value in the new queue\n";
			do
			{
				int value;
				cout << "Input value: ";
				cin >> value;
				Two.insert(value);
				cout <<"Want to enter a value\n1.YES\n2.NO\n";
				cin >> p;
			} while (p != 2 && p == 1);
			Queue* copyMyqueue = Myqueue.copy();
			Queue* copyMyqueue_1 = Two.copy();
			Queue* copyMyqueue_2 = Three.copy();
			cout << "Queue: ";
			Three.merge(copyMyqueue, copyMyqueue_1, copyMyqueue_2);
			
		}
		else if (n == 7) {
			//close program
			system("cls");
			return 0;
		}
	}

	return 0;
}
