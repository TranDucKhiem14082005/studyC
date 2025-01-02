#include <stdio.h>

long long s8(int n) {
	if(n == 0) return 0;
	if(n==1) return 1;
	
	long long xn_1 = s8(n-1);
	long long xn_2 = s8(n-2);
	
	return (xn_1 + xn_2) * (xn_1 + xn_2) + (xn_1 - xn_2) * (xn_1 - xn_2);
}

int main() {
	int n;
	scanf("%d",&n);
	int result = s8(n);
	printf("ket qua cua phep tinh = %d ", result);
	return 0;
}
