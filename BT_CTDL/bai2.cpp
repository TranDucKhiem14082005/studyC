#include <stdio.h>

long long tich(int n) {
	if (n == 0) return 1;
	else 
		return (2*n+1) * tich(n-1);
}

int main() {
	int n;
	scanf("%d",&n);
	long long result = tich(n);
	printf("%lld",result);
	return 0;
}
