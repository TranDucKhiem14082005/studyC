#include <stdio.h>

void hoanDoiMinMax(int a[], int n) {
    if (n <= 1) return;  
    int minIndex = 0, maxIndex = n - 1;
    
  
    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }
    
    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;
}

void inMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {5, 3, 8, -2, 7, 1, 9};
    int n = sizeof(a) / sizeof(a[0]);

    printf("mang ban dau: ");
    inMang(a, n);

    hoanDoiMinMax(a, n);

    printf("mang sau khi hoan doi: ");
    inMang(a, n);

    return 0;
}

