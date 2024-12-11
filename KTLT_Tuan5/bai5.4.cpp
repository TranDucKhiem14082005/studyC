#include <stdio.h>

#define MAXN 30

int n;          // S? ph?n t? trong dãy
int a[MAXN];    // M?ng luu dãy s?
int dp[MAXN];   // M?ng dp d? luu d? dài LIS k?t thúc t?i m?i ph?n t?

// Hàm d?c d? li?u t? file
void readFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Không th? m? file %s\n", filename);
        return;
    }
    fscanf(file, "%d", &n); // Ð?c s? lu?ng ph?n t?
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &a[i]); // Ð?c các ph?n t? c?a dãy
    }
    fclose(file);
}

// Hàm ghi k?t qu? ra file
void writeFile(const char *filename, int result) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Không th? m? file %s\n", filename);
        return;
    }
    fprintf(file, "%d\n", result); // Ghi d? dài LIS vào file
    fclose(file);
}

// Hàm tìm d? dài LIS b?ng quy ho?ch d?ng
int findLIS() {
    // Kh?i t?o dp v?i giá tr? 1 (m?i ph?n t? riêng l? là 1 dãy con tang)
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
    }

    // Tìm LIS
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) { // N?u A[j] nh? hon A[i]
                dp[i] = (dp[i] > dp[j] + 1) ? dp[i] : (dp[j] + 1);
            }
        }
    }

    // Tìm d? dài l?n nh?t trong m?ng dp
    int maxLIS = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > maxLIS) {
            maxLIS = dp[i];
        }
    }
    return maxLIS;
}

int main() {
    // Ð?c d? li?u t? file
    readFile("DaySo.inp");

    // Tìm d? dài LIS b?ng quy ho?ch d?ng
    int result = findLIS();

    // Ghi k?t qu? ra file
    writeFile("DayCon.out", result);

    return 0;
}

