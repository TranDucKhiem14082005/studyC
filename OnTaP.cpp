#include <stdio.h>
#include <math.h>

int snt(int n){
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0) 
			return 0;
	}
	return n>1;
}

int sole(int n){
	while (n){
		int r = n%10;
		if(r % 2 ==0){
			return 0;
		}
		n/=10;
	}
	return 1;
}

int sodep(int n){
	int r1=0,r2=0;
	while(n){
		int r = n%10;
		if(r == 1) r1 = 1;
		if(r == 9) r2 = 1;
		n/=10;
	}
	return r1&&r2;
}
int dx(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		if(a[l] != a[r])
			return 0;
		++l;--r;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	// tim so lon nhat va so nho nhat trong mang
//	int min = 2e9,max = -2e9;
//	for(int i=0;i<n;i++){
//		if(a[i] < min ){
//			min = a[i];
//			
//		}
//		if(a[i] > max ){
//			max = a[i];
//		}
//	}
//	printf("so nho nhat trong mang la: %d\n",min);
//	printf("so lon nhat trong mang la: %d\n",max);
//	//dem so luong so chan va so le trong mang
//	int chan = 0 , le = 0;
//	for(int i=0;i<n;i++){
//		if(a[i] % 2 == 0){
//			chan++;
//		}else le++;
//	}
//	printf("%d %d\n",chan,le);
//	//liet ke cac so nguyen to trong mang.
//	for(int i=0;i<n;i++){
//		if(snt(a[i])){
//			printf("%d ",a[i]);
//		}
//	}
//	//tim va in ra chi so cua so nho nhat (lon nhat) trong mang,
//	printf("\n");
//	int min1 = 2e9, index;
//	for(int i = 0 ;i<n;i++){
//		if(a[i] < min){ // them dau bang se la vi tri cuoi cung
//			min1 = a[i];
//			index = i;
//		}
//	}
//	printf("chi so cua so nho nhat trong mang la: %d\n",index);
//	 //. so lon nhat trong mang
//	int max1 = -2e9, index1;
//	for(int i = 0 ; i < n ; i++){
//		if( a[i] > max1){
//			max1  = a[i];
//			index1 = i;
//		}
//	}
//	printf("chi so cua so lon nhat trong mang la: %d\n",index1);
	//tim va in ra so lon thu nhat va so lon thu 2 trong mang.
//	int max1 = -2e9, max2=-2e9;
//	for(int i=0;i<n;i++){
//		if(a[i]>max1){
//			max2 = max1;
//			max1 = a[i];
//		}else if(a[i] > max2){
//			max2 = a[i];
//		}
//	}
//	printf("%d %d\n",max1,max2);
	//tim va in ra so lon thu nhat va so lon thu 2 trong mang va  2 so nay la 2 so khac nhau
//	int max1 = -2e9,max2 = -2e9;
//	for(int i=0;i<n;i++){
//		if(a[i] > max1){
//			max2 = max1;
//			max1 = a[i];
//		}else if(a[i] > max1 && a[i] != max1){
//			max2 = a[i];
//		}
//	}
//	if(max2 == -2e9){
//		printf("%d %d",max1,-1);
//	}else printf("%d %d",max1,max2);
	//dem va liet ke cac so toan chu so le trong mang
//	int cnt = 0;
//	for(int i = 0;i<n;i++){
//		if(sole(a[i])){
//			cnt++;
//		}
//	}
//	printf("%d\n",cnt);
//	for(int i=0;i<n;i++){
//		if(sole(a[i])) printf("%d ",a[i]);
//	}

	//cho mang cac so nguyen khac nhau doi mot. liet ke cac phan tu trong mang co
	//it nhat 2 phan tu khac lon hon no.
//	int max1=-2e9,max2=-2e9;
//	for(int i=0;i<n;i++){
//		if(a[i]>max1){
//			max2 = max1;
//			max1 = a[i];
//		}else if(a[i] > max2 && a[i] != max1){
//			max2 = a[i];
//		}
//	}
//	for(int i = 0; i<n;i++){
//		if(a[i] < max2){
//			printf("%d ",a[i]);
//		}
//	}
	//liet ke so cac so dep ( so dep la so co chua so 1 va so 9 ). neu khong co so dep
	//in ra -1
//	int ok = 0;
//	for(int i = 0 ;i<n;i++){
//		if(sodep(a[i])){
//			printf("%d ",a[i]);
//			ok = 1;
//		}
//	}
//	if( ok == 0) printf("-1");
	
	//cho mang mot chieu cac so nguyen,liet ke cac phan tu co it nhat 1 phan tu lien
	//le trai dau voi no.
//	for(int i =0;i<n;i++){
//		if(i==0 && a[0]*a[1] < 0){
//			printf("%d ",a[0]);
//		}
//		else if (i == n-1 && a[i-1]*a[n-2] < 0){
//			printf("%d ",a[n-1]);
//		}
//		else if( a[i]*a[i-1] < 0 || a[i]*a[i+1]<0){
//			printf("%d ",a[i]);
//		}
//	}

	//kiem tra xem mang co doi xung hay khong.
	if(dx(a,n)){
		printf("YES");
	}else printf("NO");
	return 0;
}








