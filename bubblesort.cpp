#include "bubblesort.h"

void bubbleSort(int array[], int size) {

    for (int step = 0; step < size; ++step) { // цикл, позволяющий пройтись по каждому элементу шаг за шагом

        for (int i = 0; i < size - step; ++i) { // цикл, сравнивающий два соседних элемента

            if (array[i] > array[i + 1]) { // если элемент [i] больше элемента [i+1], то меняем местами
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}