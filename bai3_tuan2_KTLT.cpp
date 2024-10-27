#include <stdio.h>
#include <stdlib.h>


void docMaTranTuFile(int A[30][30], int *n) {
    FILE *file = fopen("MaTran.inp", "r"); 
    if (file == NULL) {
        printf("Không the mo file MaTran.inp\n");
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
    printf("Ma tr?n dã d?c t? file:\n");
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
        printf("Không the mo file KetQua.out\n");
        return;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }
    float trungBinhCong = (float)sum / n;
    fprintf(file, "Trung bình cong cac phan tu tren duong chéo chính: %.2f\n", trungBinhCong);

    fclose(file); 
}

void ghiGiaTriLonNhat(int A[30][30], int n) {
    FILE *file = fopen("KetQua.out", "a"); 
    if (file == NULL) {
        printf("Không the mo file KetQua.out\n");
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
    fprintf(file, "Giá tri lon nhat trong ma tr?n: %d\n", max);

    fclose(file); // Ðóng file
}

int main() {
    int A[30][30], n;

    
    docMaTranTuFile(A, &n);

    
    xuatMaTran(A, n);

    
    ghiTBCDuongCheoChinh(A, n);

    
    ghiGiaTriLonNhat(A, n);

    printf("Ket qua da duoc ghi vào file KetQua.out\n");

    return 0;
}

