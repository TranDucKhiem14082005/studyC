#include <stdio.h>

// Hàm tính giai th?a c?a n
long long factorial(int n) {
    if (n == 0) return 1;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Hàm d? quy tính giá tr? x_n
long long tinhX(int n) {
    if (n == 0) return 1;  // Ði?u ki?n d?ng, x0 = 1
    
    long long result = 0;
    
    // Tính t?ng (n! * x0 + (n-1)! * x1 + ...)
    for (int i = 0; i < n; i++) {
        result += factorial(n - i - 1) * tinhX(i); // Ð? quy tính x_i
    }
    
    return result;
}

int main() {
    int n;
    printf("Nh?p giá tr? n: ");
    scanf("%d", &n);
    
    long long result = tinhX(n);
    printf("Giá tr? x_%d = %lld\n", n, result);
    
    return 0;
}

