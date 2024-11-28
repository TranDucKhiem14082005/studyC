#include <stdio.h>

#define maxc 100

int findMax(int a[], int left, int right) {
	if(left == right) return a[left];
	int mid = (left + right) / 2;
	int maxLeft = findMax(a,left,mid);
	int maxRight = findMax(a,mid + 1, right);
	return (maxLeft > maxRight) ? maxLeft : maxRight;
}

int main(){
	int a[] = {1, 5, 3, 10, 2, 8, 4};
    int n = sizeof(a) / sizeof(a[0]); 	
    int max = findMax(a,0,n-1);
	printf("%d",max);
	return 0;
}
