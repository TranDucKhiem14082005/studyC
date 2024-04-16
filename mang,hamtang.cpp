#include <stdio.h>
#include <math.h>

int hamtang(int a[],int n){
	for(int i =0; i<n-1;i++){
		if(a[i+1] <= a[i]) return 0;
	}
	return 1;
	
}

int hamgiam(int a[], int n){
	for(int i =0; i<n-1;i++){
		if(a[i+1] >= a[i]) return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i =0; i<n;i++){
		scanf("%d",&a[i]);
	}
//	// kiem tra xem 1 mang co phai la mang tang/giam hay khong
//	if(hamtang(a,n)) printf("YES\n");
//	else printf("NO\n");
//	if(hamgiam(a,n)) printf("YES\n");
//	else printf("NO\n");
	
	//so khong nho hon so dung truoc no
	int max1 = -2e9-1, max2= -2e9-1;
	for(int i =0; i<n; i++){
		if(a[0] == 0 && a[1] == 1){
			printf("%d %d ",a[0],a[1]);
		}
		else if(a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}
		else if(a[i]> max2 && a[i] != max1){
			max2 = a[i];
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}
