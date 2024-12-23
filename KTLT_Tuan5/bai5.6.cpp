#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))

int a[100][100]; // M?ng luu th?i gian b?t d?u, th?i gian k?t thúc, và giá tr? (weight)
int n;           // S? lu?ng server
int save[100];   // M?ng luu giá tr? t?i uu t?i m?i bu?c

// Hàm d?c d? li?u t? file
void docFile() {
    FILE *f = fopen("lab5_6.inp", "r");
    if (f == NULL) {
        printf("Không th? m? file server.txt.\n");
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

// Hàm xu?t d? li?u ra màn hình
void xuat() {
    printf("D? li?u d?c t? file:\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

// Hàm hoán d?i hai giá tr?
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm s?p x?p các server theo th?i gian k?t thúc tang d?n
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

// Hàm kh?i t?o m?ng `save` v?i giá tr? ban d?u là tr?ng s? (weight) c?a t?ng server
void khoiTao() {
    for (int i = 1; i <= n; i++) {
        save[i] = a[3][i];
    }
}

// Hàm s? d?ng quy ho?ch d?ng d? tính giá tr? t?i uu
void QHD() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (a[2][j] < a[1][i]) { // N?u server j k?t thúc tru?c khi server i b?t d?u
                save[i] = max(save[j] + a[3][i], save[i]);
            }
        }
    }
}

// Hàm in ra k?t qu? giá tr? t?i uu và ghi vào file `Lab8_3.out`
void ghiKetQua() {
    FILE *f = fopen("Lab8_3.out", "w");
    if (f == NULL) {
        printf("Không th? m? file Lab8_3.out d? ghi k?t qu?.\n");
        return;
    }

    printf("\nK?t qu? giá tr? t?i uu t?i m?i bu?c:\n");
    fprintf(f, "K?t qu? giá tr? t?i uu t?i m?i bu?c:\n");

    for (int i = 1; i <= n; i++) {
        printf("Server %d: %d\n", i, save[i]);
        fprintf(f, "Server %d: %d\n", i, save[i]);
    }

    // Tìm giá tr? t?i uu l?n nh?t
    int max_value = 0;
    for (int i = 1; i <= n; i++) {
        if (save[i] > max_value) {
            max_value = save[i];
        }
    }

    printf("\nGiá tr? t?i uu l?n nh?t: %d\n", max_value);
    fprintf(f, "\nGiá tr? t?i uu l?n nh?t: %d\n", max_value);

    fclose(f);
}

int main() {
    docFile();   // Ð?c d? li?u t? file
    sort();      // S?p x?p theo th?i gian k?t thúc tang d?n
    xuat();      // Xu?t d? li?u ra màn hình
    khoiTao();   // Kh?i t?o m?ng `save`
    QHD();       // Tính toán giá tr? t?i uu b?ng quy ho?ch d?ng
    ghiKetQua(); // In và ghi k?t qu? ra file

    return 0;
}

