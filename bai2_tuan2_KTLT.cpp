#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ghiDaySoVaoFile(int n) {
    int a[n];
    FILE *file = fopen("DaySo.inp", "w"); 

    if (file == NULL) {
        printf("Không the mo file DaySo.inp\n");
        return;
    }

    printf("Nhap %d cua day so:\n", n);
    for (int i = 0; i < n; i++) {
        printf("phan tu %d: ", i + 1);
        scanf("%d", &a[i]);
        fprintf(file, "%d ", a[i]); 
    }

    fclose(file); 
    
}


void ghiMaTranVaoFile(int n) {
    if (n < 2 || n > 30) {
        printf("Kich thuoc nhap vao khong hop le!\n");
        return;
    }

    int a[n][n];
    FILE *file = fopen("MaTran.inp", "w"); 

    if (file == NULL) {
        printf("Khong the mo file MaTran.inp\n");
        return;
    }

    srand(time(0)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 1001; 
            fprintf(file, "%d ", a[i][j]); 
        }
        fprintf(file, "\n"); 
    }

    fclose(file);
}

int main() {
    int n;
    printf("Nhap so phan tu cua day so: ");
    scanf("%d", &n);
    ghiDaySoVaoFile(n);
    printf("Nhap kich thuoc cua ma tran vuông (2 <= n <= 30): ");
    scanf("%d", &n);
    ghiMaTranVaoFile(n);
    return 0;
}

