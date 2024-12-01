#include <stdio.h>
#include <stdbool.h>
//thu tu tang dan
bool check(int a[], int l, int r) {
	if(l >= r) return true;
	int mid = (l + r) / 2;
	if(a[mid] > a[mid + 1]) return false;
	return check(a,l,mid) && check(a,mid+1,r);
}

//Tim va xuat ra vi tri phan tu nho nhat
int check2(int a[], int l, int r){
	if(l== r) return l;
	int mid = (l + r) / 2;
	int leftMin = check2(a,l,mid);
	int rightMin = check2(a,mid+1,r);
	if(a[leftMin] < a[rightMin]){
		return leftMin;
	}else {
		return rightMin;
	}
}

//Dem va xuat ra so phan tu la boi so cua x trong mang


int check3(int a[], int l, int r, int x) {
	if(l > r) return 0;
	if(l == r) return (a[l] % x == 0) ? 1 : 0;
	int mid = (l + r) / 2;
	int demLeft = check3(a,l,mid,x);
	int demRight = check3(a,mid+1,r,x);
	return demLeft + demRight;
}

int main() {
	int a[] = {5,7,9,1,10,25,30};
	int n = sizeof(a) / sizeof(a[0]);
	//cau a
	if(check(a,0,n-1)){
		printf("day la mang tang dan");
	}else {
		printf("day khong phai la mang tang dan");	
	}
	
	// cau b
	printf("\nvi tri co phan tu nho nhat trong mang la: %d\n",check2(a,0,n-1));
	
	// cau c
	int x;
	scanf("%d",&x);
	printf("\nSo phan tu la boi cua %d la: %d",x,check3(a,0,n-1,x));
	
	return 0;
}
