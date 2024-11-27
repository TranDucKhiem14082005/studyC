#include <stdio.h>

int tong(int left, int right){
	if(left == right) return left*left;
	int mid = (left + right) / 2;
	return tong(left,mid) + tong(mid + 1, right);
}

int main() {
	int n;
	printf("Nhap n trong khoang 5 < n < 30: ");
	scanf("%d",&n);
	printf("Tong binh phuong cac so dau tien la: %d",tong(1,n));
	return 0;
}
