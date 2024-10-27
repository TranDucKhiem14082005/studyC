#include <stdio.h>


int docMangSoThucTuFile(float a[], int *n) {
    FILE *file = fopen("MangSoThuc.txt", "r"); 
    if (file == NULL) {
        printf("Không the mo file MangSoThuc.txt\n");
        return 0;
    }

    *n = 0;
    while (fscanf(file, "%f", &a[*n]) != EOF) { 
        (*n)++;
        if (*n >= 50) { 
            break;
        }
    }
    fclose(file); 
    return 1;
}


void xuatMang(float a[], int n) {
   
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}


float tinhTong_VongLap(float a[], int n) {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

float tinhTong_DeQuy(float a[], int n) {
    if (n == 0) {
        return 0;
    }
    return a[n - 1] + tinhTong_DeQuy(a, n - 1);
}

int main() {
    float a[50];
    int n;

    if (!docMangSoThucTuFile(a, &n)) {
        return 1; 
    }


    xuatMang(a, n);


    float tong_vongLap = tinhTong_VongLap(a, n);
    printf("tong cac phan tu (vong lap): %.2f\n", tong_vongLap);

    float tong_deQuy = tinhTong_DeQuy(a, n);
    printf("Tong cac phan tu (de quy): %.2f\n", tong_deQuy);

    return 0;
}

