#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int check(int n){
	while(n){
		int r = n % 10;
		if(r % 2 == 0) return 0;
		n/=10;
	}
	return 1;
}


int dx(int a[],int n){
	int l = 0, r = n -1;
	while(l<r){
		if(a[l] != a[r]) return 0;
		++l; --r;
	}
	return 1;
}
int check1(int n){
	int c1 = 0, c2 = 0;
	while(n){
		int r = n % 10;
		if(r == 1) c1 = 1;
		if(r == 9) c2 = 1;
		n/=10;
	}
	return c1&&c2;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	// tim so lon nhat va so nho nhat trong mang
//	int min = 2e9, max = -2e9;
//	for(int i =0 ; i<n; i++){
//		if(a[i] > max){
//			max = a[i];
//		}
//		if(a[i] < min){
//			min = a[i];
//		}
//	}
//	printf("%d %d ",max,min);
	
	// dem so luong so chan, le trong mang
//	int le = 0, chan = 0;
//	for(int i = 0; i<n; i++){
//		if(a[i] % 2 == 0) ++chan;
//		else ++le;
//	}
//	printf("%d %d",chan,le);
	
	//liet ke cac so nguyen to trong mang
//	for(int i = 0; i<n; i++){
//		if(nt(a[i])) printf("%d ",a[i]);
//	}

	//tim va in ra chi so cua so nho nhat (lon nhat) trong mang, neu co nhieu so co cung gia tri thi in chi so dau tin(cuoi cung)
//	int max = -2e9, min = 2e9, index;
//	for(int i = 0;i<n;i++){
//		if(a[i] >= max){ // nhu the nay la lay chi so dau tien. con neu >=/<= thi se lay chi so cuoi cung
//			max = a[i];
//			index = i;
//		}
//	}
//	printf("%d %d ",max,index);
//	printf("\n");
//	for(int i = 0; i < n ; i++){
//		if(a[i] <= min){
//			min = a[i];
//			index = i;
//		}
//	}
//	printf("%d %d ", min, index);

	//tim va in ra so lon nhat va so lon thu 2 trong mang
/*	so lon nhat va so lon thu 2 trong mang
	int max1 = -2e9-1,max2 = -2e9-1;
	for(int i = 0; i < n; i++){
		if(a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}
		if(a[i] > max2 && a[i] != max1){
			max2 = a[i];
		}
	}
	printf("%d %d\n",max1,max2);
	*/
	
	/*
	//so nho nhat va so nho thu 2 trong mang
	int min1 = 2e9+1, min2 =2e9+1;
	for(int i = 0; i<n; i++){
		if(a[i]<min1){
			min2=min1;
			min1=a[i];
		}
		if(a[i] < min2 && a[i] != min1){
			min2 = a[i];
		}
	}
	printf("%d %d\n",min1, min2);
	*/
	
	//tim va in ra so lon thu nhat va so lon thu 2 trong mang,2 so nay phai khac nhau.neu khong tim ra so lon thu 2 thi in -1
//	
//	int max1 = -2e9-1, max2 = -2e9-1;
//
//	for(int i =0 ; i<n;i++){
//		if(a[i] > max1){
//			max2 = max1;
//			max1 = a[i];
//		}
//		if(a[i] > max2 && a[i] !=max1){
//			max2 = a[i];
//		
//		}
//	}
//	if(max2 == -2e9-1){
//		printf("%d %d\n",max1,-1);
//	}else printf("%d %d\n",max1,max2);

//	//dem va lie ke cac chu so toan le
//	int cnt = 0;
//	for(int i = 0; i<n; i++){
//		if(check(a[i])){
//			++cnt;
//		}
//	}
//	printf("%d\n",cnt);
//	for(int i = 0; i<n;i++){
//		if(check(a[i])) printf("%d ",a[i]);
//	}

//	//liet ke cac chu so doi mot khac nhau co it nhat hai phan tu lon hon no
//	int max1 = -2e9-1, max2 = -2e9-1;
//	for(int i =0; i<n;i++){
//		if(a[i] > max1){
//			max2 = max1;
//			max1 = a[i];
//		}
//		if(a[i] > max2 && a[i] != max1) max2 = a[i];
//	}
//	for(int i =0; i<n;i++){
//		if(a[i] < max2) printf("%d ",a[i]);
//	}

//	//in ra cac so dep trong mang, neu khong co so dep thi in ra 1. so dep la so co chu so 1 va chu so 9
//	int ok = 0;
//	for(int i = 0; i<n; i++){
//		if(check1(a[i])){
//			printf("%d ",a[i]);
//			ok = 1;
//		}
//	}
//	if(ok == 0) printf("-1");


//	//cho mang mot chieu cac so nguyen,liet ke cac phan tu co it nhat mot phan tu lien ke trai dau voi no.
//	for(int i = 0; i < n; i++){
//		if(i == 0 && a[0]*a[1] < 0)
//			printf("%d ",a[0]);
//		else if(i == n-1 && a[i-1] * a[i-2] < 0){
//			printf("%d",a[i]);
//		}
//		else if(a[i] * a[i-1] <0 || a[i] * a[i+1] < 0){
//			printf("%d ",a[i]);
//		}
//	}

	// mang doi xung
	if(dx(a,n)) printf("YES\n");
	else printf("NO\n");
	return 0;
}






