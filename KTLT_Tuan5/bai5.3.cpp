#include <stdio.h>

// Hàm tính s? Fibonacci th? n b?ng cách c?p nh?t tham lam
unsigned long long fibonacci(int n) {
    if (n == 0) return 0; // Tru?ng h?p d?c bi?t
    if (n == 1) return 1; // Tru?ng h?p d?c bi?t

    unsigned long long prev2 = 0; // F[i-2]
    unsigned long long prev1 = 1; // F[i-1]
    unsigned long long current;  // F[i]

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2; // C?p nh?t F[i]
        prev2 = prev1;           // F[i-2] = F[i-1]
        prev1 = current;         // F[i-1] = F[i]
    }

    return current; // Tr? v? k?t qu? cu?i cùng
}

int main() {
    int n;
    printf("Nh?p s? n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("S? n ph?i không âm.\n");
    } else {
        printf("S? Fibonacci th? %d là: %llu\n", n, fibonacci(n));
    }

    return 0;
}

