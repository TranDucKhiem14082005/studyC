#include <stdio.h>
int uscln(int a, int b) {
	if(a>b) {
		return uscln(b,a-b);
	}else if(a<b){
		return uscln(a,b-a);
	}else
		return a;
}

int bcnn(int a, int b) {
	return (a*b) / uscln(a,b);
}

int main() {
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");	
	scanf("%d",&b);
	int result = uscln(a,b);
	printf("uoc so chung lon nhat = %d\n",result);
	int result2 = bcnn(a,b);
	printf("bo so chung nho nhat = %d\n",result2);
	return 0;
}
