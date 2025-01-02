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

    
    int indexAm = timSoAmDauTien(a, n);
    if (indexAm != -1) {
        printf("So am dau tien: %d (vi tri %d)\n", a[indexAm], indexAm);
    } else {
        printf("Khong co so am trong mang.\n");
    }

    
    int indexDuong = timSoDuongDauTien(a, n);
    if (indexDuong != -1) {
        printf("So duong dau tien: %d (vi tri %d)\n", a[indexDuong], indexDuong);
    } else {
        printf("Khong co so duong trong mang.\n");
    }

    
    hoanDoiMinMax(a, n);
    printf("Mang sau khi hoan doi: ");
    inMang(a, n);

    return 0;
}

int timSoAmDauTien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            return i; 
        }
    }
    return -1; 
}


int timSoDuongDauTien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            return i; 
    }
    return -1; 
}

void hoanDoiMinMax(int a[], int n) {
    if (n <= 0) return; // M?ng r?ng, không th?c hi?n gì

    int minIndex = 0; // V? trí ph?n t? nh? nh?t
    int maxIndex = 0; // V? trí ph?n t? l?n nh?t

    // Tìm ph?n t? nh? nh?t và l?n nh?t
    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }

    // Hoán d?i ph?n t? nh? nh?t v?i l?n nh?t
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

