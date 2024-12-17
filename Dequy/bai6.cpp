#include <stdio.h>
int s6(int a, int b) {
	if(a>b) {
		return s6(b,a-b);
	}else if(a<b){
		return s6(a,b-a);
	}else
		return a;
}

int s7(int n) {
	
}

int main() {
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");	
	scanf("%d",&b);
	int result6 = s6(a,b);
	printf("S6 = %d\n",result6);
	
	return 0;
}
