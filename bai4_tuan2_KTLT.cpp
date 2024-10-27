#include <stdio.h>

int docDaySoTuFile(int a[], int *n) {
    FILE *file = fopen("DaySo.inp", "r"); 
    if (file == NULL) {
        printf("Không the mo file DaySo.inp\n");
        return 0;
    }

    *n = 0;
    while (fscanf(file, "%d", &a[*n]) != EOF) {
        (*n)++;
    }
    fclose(file); 
    return 1; 
}


void xuatDaySo(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


int demSoLanXuatHien_VongLap(int a[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    return count;
}

int demSoLanXuatHien_DeQuy(int a[], int n, int x) {
    if (n == 0) {
        return 0;
    }
    int count = (a[n - 1] == x) ? 1 : 0;
    return count + demSoLanXuatHien_DeQuy(a, n - 1, x);
}


int main() {
    int a[50], n, x;


    if (!docDaySoTuFile(a, &n)) {
        return 1;
    }

    xuatDaySo(a, n);

    printf("Nhap gia tri x can dem : ");
    scanf("%d", &x);

    
    int count_vongLap = demSoLanXuatHien_VongLap(a, n, x);
    printf("so lan xuat hien cua %d (vong lap): %d\n", x, count_vongLap);

    int count_deQuy = demSoLanXuatHien_DeQuy(a, n, x);
    printf("so lan xuat hien cua %d (de quy): %d\n", x, count_deQuy);

    return 0;
}

