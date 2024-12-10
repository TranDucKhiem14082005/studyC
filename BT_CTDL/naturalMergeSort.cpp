#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // T?o c�c m?ng t?m th?i
    int leftArr[n1], rightArr[n2];

    // Sao ch�p d? li?u v�o c�c m?ng t?m th?i
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    // H?p nh?t c�c m?ng t?m th?i v�o m?ng ban d?u
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Sao ch�p ph?n c�n l?i c?a m?ng t?m th?i v�o m?ng ban d?u
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// T�m c�c chu?i d� du?c s?p x?p (runs) trong m?ng
void naturalMergeSort(int arr[], int n) {
    int step = 1;
    while (step < n) {
        for (int i = 0; i < n; i += 2 * step) {
            int left = i;
            int mid = i + step - 1;
            int right = (i + 2 * step - 1) < (n - 1) ? (i + 2 * step - 1) : (n - 1);

            // N?u c� �t hon 2 chu?i (run) th� b? qua
            if (mid < right) {
                merge(arr, left, mid, right);
            }
        }
        step *= 2;
    }
}

// H�m in m?ng
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // M?ng d?u v�o
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("M?ng ban d?u: ");
    printArray(arr, n);

    // S?p x?p m?ng b?ng Natural Merge Sort
    naturalMergeSort(arr, n);

    printf("M?ng sau khi s?p x?p: ");
    printArray(arr, n);

    return 0;
}

