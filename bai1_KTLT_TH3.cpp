#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


void docFile(const char *tenFile, int *a, int *n) {
    FILE *f = fopen(tenFile, "r");
    if (f == NULL) {
        printf("Khong the mo file %s\n", tenFile);
        exit(1);
    }
    fscanf(f, "%d", n); 
    for (int i = 0; i < *n; i++) {
        fscanf(f, "%d", &a[i]);
    }
    fclose(f);
}

// ham xuat ket qua ra man hinh
void xuatMang(int *a, int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Tim so lon nhat (Vong lap)
int timMaxVongLap(int *a, int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    return max;
}

// Tim so nho nhat (De quy)
int timMaxDeQuy(int *a, int n) {
    if (n == 1) return a[0];
    int maxConLai = timMaxDeQuy(a, n - 1);
    return (a[n - 1] > maxConLai) ? a[n - 1] : maxConLai;
}

// Tinh tong mang bang de quy dau
int tongMangDQDau(int *a, int n) {
    if (n == 0) return 0;
    return a[0] + tongMangDQDau(a + 1, n - 1);
}

// Tinh tong mang bang de quy duoi
int tongMangDQDuoi(int *a, int n, int tong) {
    if (n == 0) return tong;
    return tongMangDQDuoi(a + 1, n - 1, tong + a[0]);
}


int main() {
    const char *tenFile = "Lab3_1.inp";
    int a[100], n;

	//a
    docFile(tenFile, a, &n);

    //b
    xuatMang(a, n);

    //c
    printf("So lon nhat (vong lap): %d\n", timMaxVongLap(a, n));
    printf("So lon nhat (de quy): %d\n", timMaxDeQuy(a, n));

    //d
    printf("Tong mang (de quy dau): %d\n", tongMangDQDau(a, n));
    printf("Tong mang (de quy duoi): %d\n", tongMangDQDuoi(a, n, 0));

    return 0;
}

