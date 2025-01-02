#include <stdio.h>


long long giaithua(int n) {
    if (n == 0) return 1;
    return giaithua(n-1)*n;
}


long long tinhX(int n) {
    if (n == 0) return 1;  
    
    long long result = 0;
    
    for (int i = 0; i < n; i++) {
        result += giaithua(n - i - 1) * tinhX(i);
    }
    
    return result;
}

int main() {
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    
    long long result = tinhX(n);
    printf("gia tri x_%d = %lld\n", n, result);
    
    return 0;
}

