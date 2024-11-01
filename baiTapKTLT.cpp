#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapDaySo(int a[], int n, char *tenFile) {
    FILE *f = fopen(tenFile, "w");
    if (f == NULL) {
        printf("Không th? m? file %s d? ghi.\n", tenFile);
        return;
    }
    fprintf(f, "%d\n", n); // Ghi s? ph?n t? vào file
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d ", a[i]);
    }
    fclose(f);
}


void taoMaTran(int n, char *tenFile) {
    FILE *f = fopen(tenFile, "w");
    if (f == NULL) {
        printf("Không th? m? file %s d? ghi.\n", tenFile);
        return;
    }
    fprintf(f, "%d\n", n); // Ghi kích thu?c ma tr?n vào file
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int so = rand() % 1001;
            fprintf(f, "%d ", so);
        }
        fprintf(f, "\n");
    }
    fclose(f);
}

int docMaTran( int a[30][30], int *n,char *tenFile) {
    FILE *f = fopen(tenFile, "r");
    if (f == NULL) {
        printf("Không th? m? file %s d? d?c.\n", tenFile);
        return 0;
    }
    fscanf(f, "%d", n);
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++) {
            fscanf(f, "%d", &a[i][j]);
        }
    }
    fclose(f);
    return 1;
}

void xuatMaTran(int a[30][30], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}


int main() {
//    int n;
//    printf("Nh?p s? ph?n t? c?a dãy s?: ");
//    scanf("%d", &n);
//    int a[n];
//    for (int i = 0; i < n; i++) {
//        printf("Nh?p ph?n t? th? %d: ", i + 1);
//        scanf("%d", &a[i]);
//    }
//    nhapDaySo(a, n, "DaySo.inp");
//
//    printf("Nh?p kích thu?c ma tr?n (2 <= n <= 30): ");
//    scanf("%d", &n);
//    if (n < 2 || n > 30) {
//        printf("Kích thu?c không h?p l?.\n");
//        return 1;
//    }
//    taoMaTran(n,"MaTran.inp");
	int a[30][30],n;
    taoMaTran(n, "MaTran.inp");
    if(!docMaTran(a,&n,"MaTran.inp")) return 1;
    xuatMaTran(a,n);
    return 0;
}

