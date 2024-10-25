#include <stdio.h>
#include <stdlib.h>

void nhapMang(int a[], int *n) {
	do{
		printf("nhap so n: ");
		scanf("%d",n);
	}while(*n<=3 || *n>=50);
	for(int i=0; i<*n; i++){
		scanf("%d",&a[i]);
	}
}

int dem(int a[], int n,int x){
	int ok= -9999999,count=0;
	for(int i = 0; i < n; i++){
		if(a[i] == ok){
			break;
		}
		if(a[i] == x){
			count++;
		}
	}
	return count;
}

int check(int a[],int n){
	int ok = 1;
	for(int i = 0; i<n-1;i++){
		if(a[i] < a[i+1]){
			ok = 0;
			break;
		}
	}
	return ok;
}

int main() {
	int a[100],n,x;
	nhapMang(a,&n);
	printf("nhap so can dem: ");
	scanf("%d",&x);
	int kq = dem(a,n,x);
	printf("%d\n",kq);
	if(check(a,n)){
		printf("Day la ham giam dan!");
	}else
		printf("Day khong phai ham giam dan!");
	return 0;
}
