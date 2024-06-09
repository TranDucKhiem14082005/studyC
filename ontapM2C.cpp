#include <stdio.h>
#include <math.h>

int snt(int n){
	for(int i = 2 ; i <= sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i = 0 ; i < n;i++){
		for(int j = 0 ; j < m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	

	for(int i = 0 ; i < n;i++){
		for(int j = 0; j < m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	// tinh tong cac phan tu cua tung hang
	
//	for(int i = 0 ; i <n;i++){
//		int sum = 0;
//		for(int j=0;j<m;j++){
//			sum +=a[i][j];
//		}
//		printf("%d\n",sum); 
//	}
//	

	//tinh tong cac phan tu cua tung cot
//	for(int j = 0;j<m;j++){
//		int sum1=0;
//		for(int i =0;i<n;i++){
//			sum1 += a[i][j];
//		}
//		printf("%d\n",sum1);
//	}
//

	//tim hang/cot co chua nhieu so nguyen to nhat, neu co nhieu hang co cung so snt thi in ra dong dau tien
//	
	int res=0, hang; //res de luu lai ki luc
	for(int i=0;i<n;i++){
		int cnt=0;//dem xem hang thu i co bao nhieu so nguyen to
		for(int j=0;j<m;j++){
			if(snt(a[i][j])){
				++cnt;
			}
		}
		if(cnt>res){
			res=cnt;
			hang=i;
		}
	}
	printf("%d\n",hang+1);
	for(int j=0;j<m;j++){
		if(snt(a[hang][j]))
			printf("%d ",a[hang][j]);
	}
	printf("\n");
	int res1=0,cot;
	for(int j=0;j<m;j++){
		int cnt1=0;
		for(int i =0;i<n;i++){
			if(snt(a[i][j])){
				++cnt1;
			}
		}
		if(cnt1 > res1){
			res1=cnt1;
			cot=j;
		}
	}
	printf("%d\n",cot+1);
	for(int i=0;i<n;i++){
		if(snt(a[i][cot])){
			printf("%d ",a[i][cot]);
		}
	}
	
	return 0;
}







