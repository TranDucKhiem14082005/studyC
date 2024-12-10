#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high) {
    int pivot = a[high]; // Ch?n ph?n t? cu?i làm pivot
    int i = low - 1;     // i là ch? s? c?a ph?n t? nh? hon pivot

    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) { // N?u ph?n t? nh? hon ho?c b?ng pivot
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]); // Ðua pivot v? dúng v? trí
    return i + 1; // Tr? v? v? trí c?a pivot
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high); // Chia m?ng
        quicksort(a, low, pi - 1);        // S?p x?p ph?n bên trái
        quicksort(a, pi + 1, high);       // S?p x?p ph?n bên ph?i
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(a) / sizeof(a[0]);

    printf("M?ng ban d?u: ");
    printArray(a, n);

    quicksort(a, 0, n - 1);

    printf("M?ng sau khi s?p x?p: ");
    printArray(a, n);

    return 0;
}

