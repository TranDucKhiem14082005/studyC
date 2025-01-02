#include <stdio.h>
#include <math.h>
//cau 1
float S1(int n) {
	if (n == 1) return 1;
	else return S1(n-1) + (float)1/n;
}


long long s2(int n) {
	if(n == 1) return 1;
	return s2(n-1) * (2*n+1);
}

int s3(int n) {
	if(n == 1) return 1;
	return s3(n-1) + pow(-1,n+1) * n;
}

int giaithua(int n) {
	if(n==1) return 1;
	return giaithua(n-1)*n;
}

long long s4(int n) {
	if(n==1) return 1;
	return s4(n-1) + giaithua(n);
}

int s5(int n) {
	if(n < 0) {
		n = abs(n);
	}
	if(n < 10) return 1;
	else return 1 + s5(1+n/10);
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	//cau 1
	printf("S1 = %.2f\n",S1(n));
	printf("S3 = %d\n",s3(n));
	printf("S4 = %d\n",s4(n));	
	printf("S5 = %d\n",s5(n));	
	return 0;
}


