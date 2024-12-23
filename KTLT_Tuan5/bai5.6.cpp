#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))

int a[100][100]; // M?ng luu th?i gian b?t d?u, th?i gian k?t th�c, v� gi� tr? (weight)
int n;           // S? lu?ng server
int save[100];   // M?ng luu gi� tr? t?i uu t?i m?i bu?c

// H�m d?c d? li?u t? file
void docFile() {
    FILE *f = fopen("lab5_6.inp", "r");
    if (f == NULL) {
        printf("Kh�ng th? m? file server.txt.\n");
        return;
    }
    fscanf(f, "%d", &n);
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            fscanf(f, "%d", &a[i][j]);
        }
    }
    fclose(f);
}

// H�m xu?t d? li?u ra m�n h�nh
void xuat() {
    printf("D? li?u d?c t? file:\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

// H�m ho�n d?i hai gi� tr?
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// H�m s?p x?p c�c server theo th?i gian k?t th�c tang d?n
void sort() {
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[2][i] > a[2][j]) {
                swap(&a[2][i], &a[2][j]);
                swap(&a[3][i], &a[3][j]);
                swap(&a[1][i], &a[1][j]);
            }
        }
    }
}

// H�m kh?i t?o m?ng `save` v?i gi� tr? ban d?u l� tr?ng s? (weight) c?a t?ng server
void khoiTao() {
    for (int i = 1; i <= n; i++) {
        save[i] = a[3][i];
    }
}

// H�m s? d?ng quy ho?ch d?ng d? t�nh gi� tr? t?i uu
void QHD() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (a[2][j] < a[1][i]) { // N?u server j k?t th�c tru?c khi server i b?t d?u
                save[i] = max(save[j] + a[3][i], save[i]);
            }
        }
    }
}

// H�m in ra k?t qu? gi� tr? t?i uu v� ghi v�o file `Lab8_3.out`
void ghiKetQua() {
    FILE *f = fopen("Lab8_3.out", "w");
    if (f == NULL) {
        printf("Kh�ng th? m? file Lab8_3.out d? ghi k?t qu?.\n");
        return;
    }

    printf("\nK?t qu? gi� tr? t?i uu t?i m?i bu?c:\n");
    fprintf(f, "K?t qu? gi� tr? t?i uu t?i m?i bu?c:\n");

    for (int i = 1; i <= n; i++) {
        printf("Server %d: %d\n", i, save[i]);
        fprintf(f, "Server %d: %d\n", i, save[i]);
    }

    // T�m gi� tr? t?i uu l?n nh?t
    int max_value = 0;
    for (int i = 1; i <= n; i++) {
        if (save[i] > max_value) {
            max_value = save[i];
        }
    }

    printf("\nGi� tr? t?i uu l?n nh?t: %d\n", max_value);
    fprintf(f, "\nGi� tr? t?i uu l?n nh?t: %d\n", max_value);

    fclose(f);
}

int main() {
    docFile();   // �?c d? li?u t? file
    sort();      // S?p x?p theo th?i gian k?t th�c tang d?n
    xuat();      // Xu?t d? li?u ra m�n h�nh
    khoiTao();   // Kh?i t?o m?ng `save`
    QHD();       // T�nh to�n gi� tr? t?i uu b?ng quy ho?ch d?ng
    ghiKetQua(); // In v� ghi k?t qu? ra file

    return 0;
}

