#include <stdio.h>


double tinhTien(double X, double a, double b, int N) {
    
    if (N == 0) {
        return X;x
    }
    
    
    if (N % 10 == 0) {
        X += b;
    }

    X = X * (1 + a / 100);

    
    return tinhTien(X, a, b, N - 1);
}

int main() {
    double X, a, b;
    int N;

    
    printf("So tien gui ban dau X: ");
    scanf("%lf", &X);

    printf("Nhap lai suat hang nam a (%%): ");
    scanf("%lf", &a);

    printf("Nhap gia tri cong them b: ");
    scanf("%lf", &b);

    printf("nhap so nam muon gui N: ");
    scanf("%d", &N);

    
    double soTienSauNnam = tinhTien(X, a, b, N);
    printf("So tien gui trong tai khoan sau %d nam là: %.2lf\n", N, soTienSauNnam);

    return 0;
}

