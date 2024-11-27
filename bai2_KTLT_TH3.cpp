#include <stdio.h>
#include <math.h>

// a) Tính S(n) = a^n
int tinhLuyThuaVongLap(int a, int n) {
    int ketQua = 1;
    for (int i = 0; i < n; i++) {
        ketQua *= a;
    }
    return ketQua;
}

int tinhLuyThuaDeQuy(int a, int n) {
    if (n == 1) return a;
    return a * tinhLuyThuaDeQuy(a, n - 1);
}

// b) So Fibonacci thu n
int fibonacciVongLap(int n) {
    int f1 = 1, f2 = 1, f3 = 0;
    for (int i = 3; i <= n; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f3;
}

int fibonacciDeQuy(int n) {
    if (n == 1 || n == 2) return 1;
    return fibonacciDeQuy(n - 1) + fibonacciDeQuy(n - 2);
}

// c) Thap HN
void thapHaNoi(int n, char cotNguon, char cotDich, char cotTrungGian) {
    if (n == 1) {
        printf("Chuyen dia tu %c sang %c\n", cotNguon, cotDich);
        return;
    }
    thapHaNoi(n - 1, cotNguon, cotTrungGian, cotDich);
    printf("Chuyen dia tu %c sang %c\n", cotNguon, cotDich);
    thapHaNoi(n - 1, cotTrungGian, cotDich, cotNguon);
}


int main() {
    int a, n;

    // a
    printf("Nhap a va n (1 < n < 30): ");
    scanf("%d %d", &a, &n);
    printf("Ket qua (VL): %d\n", tinhLuyThuaVongLap(a, n));
    printf("Ket qua (DQ): %d\n", tinhLuyThuaDeQuy(a, n));

    // b)
    printf("\nNhap n de tinh duoc Fibonacci (3 < n < 20): ");
    scanf("%d", &n);
    printf("Fibonacci thu %d (VL): %d\n", n, fibonacciVongLap(n));
    printf("Fibonacci thu %d (d? quy): %d\n", n, fibonacciDeQuy(n));

    // c) 
    printf("\nNhap so dia: "); // Nhap do dia it, neu khong dai qua
    scanf("%d", &n);
    printf("Cac buoc giai bai toan:\n");
    thapHaNoi(n, 'A', 'C', 'B');

    return 0;
}

