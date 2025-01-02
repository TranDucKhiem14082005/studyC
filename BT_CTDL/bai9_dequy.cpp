#include<stdio.h>
#include<math.h>
int xn(int n);
int yn(int n);

int main(){
	int n;
	printf("Nhap n = "); scanf("%d",&n);
	printf("xn = 2xn-1 + 3yn-1 = %d , yn = 3xn-1 - 2yn-1 = %d voi x0 = 1, y0 = 1 ", xn(n),yn(n));
	return 0;
}

int xn(int n){
	if (n==0)
		return 1;
	return 2*xn(n-1)+3*yn(n-1);
}
int yn(int n){
	if (n==0)
		return 1;
	return 3*xn(n-1)-2*yn(n-1);
}

