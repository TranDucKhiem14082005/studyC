#include <stdio.h>
#include <math.h>
//cau 1
float S1(int n) {
	if (n == 1) return 1;
	else return S1(n-1) + (float)1/n;
}

//cau 2
long long tich(int n) {
	if (n == 0) return 1;
	else 
		return (2*n+1) * tich(n-1);
}
//cau 3
int S3(int n) {
	if(n == 1) return 1;
	else return S3(n-1) + pow(-1,n+1)*n;
}
//cau 4
long long giaithua(int n) {
	long long s = 1;
	for(int i = 1; i <= n; i++){
		s*=i;
	}
	return s;
}

long long s4(int n){
	if(n == 1 || n == 0) return 1;
	else return s4(n-1) + giaithua(n) ;
	
}

//cau 5
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
	//cau 1
	printf("S1 = %.2f\n",S1(n));
	//cau 2
	long long result2 = tich(n);
	printf("S2 = %lld\n",result2);
	
	//cau 3
	int result3 = S3(n);
	printf("S3 = %d\n",result3);
	
	//cau 4
	long long result4 = s4(n);
	printf("S4 = %lld\n",result4);
	
	//cau 5
	printf("S5 = %d\n",s5(n));
	return 0;
}


