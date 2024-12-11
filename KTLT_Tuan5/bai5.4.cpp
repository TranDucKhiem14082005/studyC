#include <stdio.h>

#define MAXN 30

int n;          // S? ph?n t? trong d�y
int a[MAXN];    // M?ng luu d�y s?
int dp[MAXN];   // M?ng dp d? luu d? d�i LIS k?t th�c t?i m?i ph?n t?

// H�m d?c d? li?u t? file
void readFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Kh�ng th? m? file %s\n", filename);
        return;
    }
    fscanf(file, "%d", &n); // �?c s? lu?ng ph?n t?
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &a[i]); // �?c c�c ph?n t? c?a d�y
    }
    fclose(file);
}

// H�m ghi k?t qu? ra file
void writeFile(const char *filename, int result) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Kh�ng th? m? file %s\n", filename);
        return;
    }
    fprintf(file, "%d\n", result); // Ghi d? d�i LIS v�o file
    fclose(file);
}

// H�m t�m d? d�i LIS b?ng quy ho?ch d?ng
int findLIS() {
    // Kh?i t?o dp v?i gi� tr? 1 (m?i ph?n t? ri�ng l? l� 1 d�y con tang)
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
    }

    // T�m LIS
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) { // N?u A[j] nh? hon A[i]
                dp[i] = (dp[i] > dp[j] + 1) ? dp[i] : (dp[j] + 1);
            }
        }
    }

    // T�m d? d�i l?n nh?t trong m?ng dp
    int maxLIS = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > maxLIS) {
            maxLIS = dp[i];
        }
    }
    return maxLIS;
}

int main() {
    // �?c d? li?u t? file
    readFile("DaySo.inp");

    // T�m d? d�i LIS b?ng quy ho?ch d?ng
    int result = findLIS();

    // Ghi k?t qu? ra file
    writeFile("DayCon.out", result);

    return 0;
}

