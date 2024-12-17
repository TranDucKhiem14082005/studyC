#include <stdio.h>
#include <math.h>
float S1(int n) {
	if(n == 1) return 1.0;
	return 1.0/n + S1(n-1);
}

float S2(int n) {
	if(n == 1) return 1;
	return (2 * n - 1) * S2(n-1);
}

float S3(int n) {
	if(n == 1) return 1;
	return (n % 2 == 0 ? -n : n) + S3(n-1);
}

float S32(int n) {
	if(n == 1) return 1;
	return S32(n-1) + pow(-1,n+1)*n;
}

float giaithua(int n) {
	if(n==1) return 1;
	return n*giaithua(n-1);
}

float tonggiaithua(int n){
	if(n == 1) return 1;
	return giaithua(n) + tonggiaithua(n-1);
}

float demchuso(int n) {
	if(n < 10 && n > -10) return 1;
	return 1 + demchuso(n/10);
}

float USCLN(int a, int b){
	if(b == 0) return a;
	return USCLN(b,a%b);
}

float USCLN2(int a, int b) {
	if(a == b) return a;
	if(a>b) return USCLN2(a-b,b);
	else return USCLN2(a,b-a);
}

double sotien(double X, double a, double b, double N){
	if(N == 0) return X;
	
	double sotientruoc = sotien(X,a,b,N-1);
	sotientruoc *= (1 + a/100.0);
	if(N * 10 == 0) {
		sotientruoc += b;
	}
	return sotientruoc;
}



float BSCNN(int a, int b){
	return (a*b)/USCLN(a,b);
}

int main() {
	
	return 0;
}
