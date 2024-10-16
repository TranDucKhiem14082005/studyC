#include <stdio.h>
#define N 100
void nhap(int a[],int n) {
	do {
		printf("nhap gia tri n: ");
		scanf("%d",&n);
	}while(n<=3 || n>=50);
	for(int i=0;i <n; i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
}

int demSL(int a[],int n, int x) {
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] == x) {
			dem++;
		}
		if(a[i] == -1) {
			break;
		}
	}
	return dem;
}

int main() {
	int a[N], n,x;
	nhap(a,n);
	printf("Nhap gia tri x: ");
	scanf("%d",&x);
	int result = demSL(a,n,x);
	printf("so lan xuat hien pt %d trong day so la: %d",x,result);
	return 0;
}
