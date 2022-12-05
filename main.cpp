#include <iostream>
#include "bubblesort.h"
#include "insertionsort.h"
#include "mergesort.h"

int main() {

    //Bubble Sort
    int arr1[] = {-2, 45, 0, 11, -9}; // задаем массив
    int size_arr1 = sizeof(arr1) / sizeof(arr1[0]); // находим количество элементов массива

    bubbleSort(arr1, size_arr1);

    std::cout << "Массив, отсортированный с помощью Bubble Sort: " << std::endl;
    for (int i = 0; i < size_arr1; ++i)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;


    //Insertion Sort
    int arr2[] = {9, 99, 1, 4, -3};
    int size_arr2 = sizeof(arr2) / sizeof(arr2[0]);

    insertionSort(arr2, size_arr2);

    std::cout << "Массив, отсортированный с помощью Insertion Sort: " << std::endl;
    for (int i = 0; i < size_arr2; ++i)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;


    //Merge Sort
    int arr3[] = {77, -5, 32, 10, 9, 1};
    int size_arr3 = sizeof(arr3) / sizeof(arr3[0]);

    mergeSort(arr3, 0, size_arr3 - 1);

    std::cout << "Массив, отсортированный с помощью Merge Sort: " << std::endl;
    for (int i = 0; i < size_arr3; i++)
        std::cout << arr3[i] << " ";

    return 0;
}
