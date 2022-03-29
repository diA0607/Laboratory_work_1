#include "Queue_1.h"
float Queue_1::math_operation()
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