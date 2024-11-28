#include <stdio.h>
#include <math.h>
int dem(int a[], int l, int r, int x) {
	if(l == r) {
		if(a[l] == x) return 1;
		return 0;
	}
	int mid = (l + r) / 2;
	return dem(a,l,mid,x) + dem(a,mid+1,r,x);
}

int tim(int a[], int l, int r) {
	if(l == r) return a[l];
	int mid = (l + r) / 2;
	int tim1 = tim(a,l,mid);
	int tim2 = tim(a,mid+1,r);
	int dem1 = dem(a,l,r,tim1);
	int dem2 = dem(a,l,r,tim2);
	return (dem1 >= dem2) ? tim1 : tim2;
}

int main(){
	int a[] = {1,4,2,5,7,9,3,3,3};
	int n = sizeof(a) / sizeof(a[0]);
//	int min = -1;
	int result = dem(a,0,n-1,3);
	printf("%d\n",result);
	int result2 = tim(a,0,n-1);
	printf("%d ",result2);
	return 0;
}
