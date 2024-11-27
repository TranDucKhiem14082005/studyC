#include <stdio.h>

int tongPTMang(int a[], int left, int right){
	if(left == right) return a[left];
	int mid = (left + right) / 2;
	return tongPTMang(a,left,mid) + tongPTMang(a,mid + 1,right);
}

int main() {
	int a[100],n;
	printf("Nhap n trong khoang 5 < n < 100: ");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	printf("Tong cac phan tu trong mang la: %d",tongPTMang(a,0,n-1));
	return 0;
}
