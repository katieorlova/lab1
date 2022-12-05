#include "insertionsort.h"

void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        // Сравниваем key с каждым элементом слева от него,
        // пока не найдется элемент, меньший
        // В порядке убывания изменяем key < array[j] на key > array[j]

        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}