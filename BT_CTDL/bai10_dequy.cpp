#include<stdio.h>
#include<math.h>
long long gt(int n);
long long xn(int n);

int main(){
	int n;
	printf("Nhap n = "); scanf("%d",&n);
	printf(" xn = n!x0 + (n – 1)!x1 + (n – 2)!x2 + ... + 1!xn-1 = %ld voi x0 = 1 ",xn(n));
	return 0;
}
long long gt(int n){
	if (n==1) return 1;
	else
		return n*gt(n-1);
}
long long xn(int n){
	if(n==0) return 1;
	long long kq=0;
		for(int i=0;i<n;i++)
			kq=kq + gt(n-i)*xn(i);
	return kq;
}

