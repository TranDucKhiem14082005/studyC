#include <stdio.h>

void heapify(int a[], int n, int i) {
    int largest = i; // Gi? s? g?c là l?n nh?t
    int left = 2 * i + 1; // Con trái
    int right = 2 * i + 2; // Con ph?i

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

void heapsort(int a[], int n) {
    // Xây d?ng Max-Heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    // Trích xu?t t?ng ph?n t? t? heap
    for (int i = n - 1; i > 0; i--) {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0); // Tái c?u trúc heap
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);

    printf("M?ng ban d?u: ");
    printArray(a, n);

    heapsort(a, n);

    printf("M?ng sau khi s?p x?p: ");
    printArray(a, n);

    return 0;
}

