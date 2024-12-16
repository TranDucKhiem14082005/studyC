#include <stdio.h>

int timSoAmDauTien(int a[], int n);
int timSoDuongDauTien(int a[], int n);
void hoanDoiMinMax(int a[], int n);
void inMang(int a[], int n);


int main() {
    int a[] = {3, -1, 5, 0, -4, 8, -2, 9};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Mang ban dau: ");
    inMang(a, n);

    // T�m s? �m d?u ti�n
    int indexAm = timSoAmDauTien(a, n);
    if (indexAm != -1) {
        printf("So am dau tien: %d (vi tri %d)\n", a[indexAm], indexAm);
    } else {
        printf("Khong co so am trong mang.\n");
    }

    // T�m s? duong d?u ti�n
    int indexDuong = timSoDuongDauTien(a, n);
    if (indexDuong != -1) {
        printf("So duong dau tien: %d (vi tri %d)\n", a[indexDuong], indexDuong);
    } else {
        printf("Khong co so duong trong mang.\n");
    }

    // Ho�n d?i ph?n t? nh? nh?t v� l?n nh?t
    hoanDoiMinMax(a, n);
    printf("Mang sau khi hoan doi: ");
    inMang(a, n);

    return 0;
}

int timSoAmDauTien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            return i; // Tr? v? v? tr� c?a s? �m d?u ti�n
        }
    }
    return -1; // Kh�ng c� s? �m
}


int timSoDuongDauTien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            return i; // Tr? v? v? tr� c?a s? duong d?u ti�n
        }
    }
    return -1; // Kh�ng c� s? duong
}

void hoanDoiMinMax(int a[], int n) {
    if (n <= 0) return; // M?ng r?ng, kh�ng th?c hi?n g�

    int minIndex = 0; // V? tr� ph?n t? nh? nh?t
    int maxIndex = 0; // V? tr� ph?n t? l?n nh?t

    // T�m ph?n t? nh? nh?t v� l?n nh?t
    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }

    // Ho�n d?i ph?n t? nh? nh?t v?i l?n nh?t
    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    printf("Da hoan doi: MinIndex = %d, MaxIndex = %d\n", minIndex, maxIndex);
}

void inMang(int a[], int n){
	for(int i = 0; i < n; i++) {
		printf("%d ",a[i]);
	}
}

