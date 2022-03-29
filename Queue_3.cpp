#include "Queue_3.h"
float Queue_3::math_operation()
{
    int size = Queue_Size();
    int* arr = new int[size];
    int i = 0;
    for (i = 0; i < size; i++) {
        int save = remove();
        arr[i] = save;
        this->insert(save);
    }
    double element_denominator = 0, result = 0, arifmetic_number;

    for (i = 0; i < size; i++) {
        if (arr[i] != 0) {
            element_denominator += arr[i];
        }
    }
    arifmetic_number = element_denominator / size;
    result = arifmetic_number;

    delete[] arr;
    return result;
}

void Queue_3::insert(int data) {
    Queue::insert(data);
}

int Queue_3::remove() {
    return Queue::remove();
}

void Queue_3::printQueue() {
    Queue::printQueue();
}

Queue* Queue_3::copy()
{
    return Queue::copy();
}

Queue* Queue_3::merge(Queue* first, Queue* second, Queue* third) {
    return Queue::merge(first, second, third);
}
