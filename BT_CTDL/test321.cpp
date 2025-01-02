#include <stdio.h>

// H�m t�nh giai th?a c?a n
long long factorial(int n) {
    if (n == 0) return 1;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// H�m d? quy t�nh gi� tr? x_n
long long tinhX(int n) {
    if (n == 0) return 1;  // �i?u ki?n d?ng, x0 = 1
    
    long long result = 0;
    
    // T�nh t?ng (n! * x0 + (n-1)! * x1 + ...)
    for (int i = 0; i < n; i++) {
        result += factorial(n - i - 1) * tinhX(i); // �? quy t�nh x_i
    }
    
    return result;
}

int main() {
    int n;
    printf("Nh?p gi� tr? n: ");
    scanf("%d", &n);
    
    long long result = tinhX(n);
    printf("Gi� tr? x_%d = %lld\n", n, result);
    
    return 0;
}

