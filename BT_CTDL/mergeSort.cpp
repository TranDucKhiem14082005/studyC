#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = a[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergesort(a, left, mid);
        mergesort(a, mid + 1, right);

        merge(a, left, mid, right);
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

    mergesort(a, 0, n - 1);

    printf("M?ng sau khi s?p x?p: ");
    printArray(a, n);

    return 0;
}

