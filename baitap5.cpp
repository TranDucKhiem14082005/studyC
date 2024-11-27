#include <stdio.h>

int timMin(int a[], int left, int right){
	if(left == right) return a[left];
	int mid = (left + right) / 2;
	int midLeft = timMin(a,left, mid) / 2;
	int midRight = timMin(a,mid + 1, right) / 2;
	return midLeft < midRight ? midLeft : midRight;
}


int main(){
	int a[100],n;
	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
	for(int i = 0; i < n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Vi tri cua phan tu nho nhat trong mang la: %d",timMin(a,0,n-1));
	
	return 0;
}
