#include <stdio.h>
long long tinhX(int n);
long long tinhY(int n);


int main() {
    int n;
    printf("nhap n: ");
    scanf("%d", &n);

    long long x = tinhX(n);
	long long y = tinhY(n);
	printf("gia tri X: %lld",x);
	printf("\ngia tri Y: %lld",y);
    return 0;
}

long long tinhX(int n) {
	if(n == 0) return 1;
	return 2 * tinhX(n-1) + 3 *tinhY(n-1);
}

long long tinhY(int n) {
	if(n == 1) return 1;
	return 3 * tinhX(n-1) - 2*tinhY(n-1);
}
