#include <stdio.h>
#include <math.h>
int S3(int n) {
	if(n == 1) return 1;
	else return S3(n-1) + pow(-1,n+1)*n;
}

int main() {
	int n;
	scanf("%d",&n);	
	int result = S3(n);
	printf("%d",result);
	return 0;
}
