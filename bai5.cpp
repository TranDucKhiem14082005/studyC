#include <stdio.h>
#include <math.h>
int s5(int n) {
	if (n < 0)
		n= abs(n);
	if (n < 10)
		return 1;
	else return 1 + s5(n/10);
}

int main() {
	int n;
	scanf("%d",&n);
	printf("%d",s5(n));
	return 0;
}
