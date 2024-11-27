#include <stdio.h>
#include <math.h>

double power(double a, int n) {
    if (n == 0) return 1; 
    if (n == 1) return a; 
    double half = power(a, n / 2);
    if (n % 2 == 0) {
        return half * half; 
    } else {
        return half * half * a; 
    }
}

int main() {
    double a;
    int n;
    printf("Nhap so a: ");
    scanf("%lf", &a);
    printf("Nhap so mu n (5 < n < 100): ");
    scanf("%d", &n);

    printf("S(n) = %.2lf\n", power(a, n));
    return 0;
}

