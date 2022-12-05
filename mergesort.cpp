#include "mergesort.h"

void merge(int arr[], int p, int q, int r) { //объединяем два подмассива L и M

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Пока мы не достигнем ни одного из концов массива L или M, выбираем бОльший среди
    // элементов L и M и помещаем их в правильную позицию в A[p..r]
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // Когда заканчиваются элементы либо в L, либо в M,
    // берем оставшиеся элементы и вставляем в A[p..r]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

// Разделяем массив на два подмассива, отсортировываем их и объединяем
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // m — точка, в которой массив делится на два подмассива
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Объединяем отсортированные подмассивы
        merge(arr, l, m, r);
    }
}
