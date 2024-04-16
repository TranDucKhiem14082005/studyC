#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i<n;i++){
		scanf("%d",&a[i]);
	}
	int max1= -1e9-1, max2 = -1e9-1;
	for(int i = 0; i<n;i++){
		if(a[i] > max1){ // neu ma a[i] lon hon so lon nhat thi cap nhat max2 = max1 sau do max1 = a[i] 
			max2 = max1;
			max1 = a[i];
		}
		else if(a[i] > max2){ // tuc la luc nay a[i] chi lon hon max2 thoi, chu a[i] khong co lon hon max1. 
		// khong anh huong den max1.
			max2 = a[i];
		}
	}
	printf("%d %d\n", max1,max2);
	
	int min1 = 1e9+1,min2=1e9+1;
	for(int i =0;i<n;i++){
		if(a[i] < min1){
			min2=min1;
			min1=a[i];
		}else if(a[i] < min2){
			min2=a[i];
		}
	}
	printf("%d %d",min1,min2);
	return 0;
}


