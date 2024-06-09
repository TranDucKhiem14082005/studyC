#include <stdio.h>
#include <string.h>
#define maxa 101

void them(int a[], int &n, int vt, int x){
	if (vt >= 0 && vt <= n){
		for (int i = n; i > vt; i--)
			a[i] = a[i - 1];
		a[vt] = x;
		n++;
	}
}

void xuat(int a[], int n){
	for(int i = 0; i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n; i++){
		scanf("%d",&a[i]);
	}
	int x,index;
	scanf("%d %d",&x,&index);
	if(index <= n){
		them(a,n,index,x);
		xuat(a,n);
	}else printf("none");
}
