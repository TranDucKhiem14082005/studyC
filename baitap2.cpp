#include <stdio.h>

int tong(int left, int right){
	if(left == right) return left;
	int mid = (left + right) / 2;
	return tong(left,mid) + tong(mid+1,right);
}

int main() {
	int n;
	printf("Nhap n trong khoang 5 < n < 100: ");
	scanf("%d",&n);
	printf("Tong cac so nguyen duong dau tien la: %d",tong(1,n));
	return 0;
}
