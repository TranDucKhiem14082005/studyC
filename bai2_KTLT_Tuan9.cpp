#include <stdio.h>

#define Cong(x, y, z) ((x) + (y) + (z))

int main() {
    double a, b, c;

    printf("Nhap so thu nhat: ");
    scanf("%lf", &a);
    printf("Nhap so thu hai: ");
    scanf("%lf", &b);
    printf("Nhap so thu ba: ");
    scanf("%lf", &c);

    double sum = Cong(a, b, c);
    printf("Tong cua 3 so là: %.2f\n", sum);

    return 0;
}

