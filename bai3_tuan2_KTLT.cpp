#include <stdio.h>
#include <stdlib.h>


void docMaTranTuFile(int A[30][30], int *n) {
    FILE *file = fopen("MaTran.inp", "r"); 
    if (file == NULL) {
        printf("Kh�ng the mo file MaTran.inp\n");
        return;
    }

    fscanf(file, "%d", n); 
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++) {
            fscanf(file, "%d", &A[i][j]); 
        }
    }
    fclose(file); 
}


void xuatMaTran(int A[30][30], int n) {
    printf("Ma tr?n d� d?c t? file:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d ", A[i][j]); 
        }
        printf("\n");
    }
}


void ghiTBCDuongCheoChinh(int A[30][30], int n) {
    FILE *file = fopen("KetQua.out", "w"); 
    if (file == NULL) {
        printf("Kh�ng the mo file KetQua.out\n");
        return;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }
    float trungBinhCong = (float)sum / n;
    fprintf(file, "Trung b�nh cong cac phan tu tren duong ch�o ch�nh: %.2f\n", trungBinhCong);

    fclose(file); 
}

void ghiGiaTriLonNhat(int A[30][30], int n) {
    FILE *file = fopen("KetQua.out", "a"); 
    if (file == NULL) {
        printf("Kh�ng the mo file KetQua.out\n");
        return;
    }

    int max = A[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }
    }
    fprintf(file, "Gi� tri lon nhat trong ma tr?n: %d\n", max);

    fclose(file); // ��ng file
}

int main() {
    int A[30][30], n;

    
    docMaTranTuFile(A, &n);

    
    xuatMaTran(A, n);

    
    ghiTBCDuongCheoChinh(A, n);

    
    ghiGiaTriLonNhat(A, n);

    printf("Ket qua da duoc ghi v�o file KetQua.out\n");

    return 0;
}

