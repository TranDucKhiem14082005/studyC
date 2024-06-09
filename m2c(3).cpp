#include <stdio.h>
#include <math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i == 0) return 0;
	}
	return n>1;
}

int p[10001];

void sang(){
	
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
	//hoan vi cac phan tu tren duong cheo chinh va duong cheo phu
	//a[i][i] la pt tren duong cheo chinh, a[i][n-i-1]: pt tren duong cheo phu

//	for(int i=0;i<n;i++){
//		int temp = a[i][i];
//		a[i][i] = a[i][n-i-1];
//		a[i][n-i-1] = temp;
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
	//dem so nguyen to tren duong cheo chinh va duong cheo phu cua ma tran.
//	int cnt =0;
//	for(int i=0;i<n;i++){
//		if(snt(a[i][i])) ++cnt;
//		if(snt(a[i][n-i-1])) ++cnt;
//	}
//	if(snt(a[n/2][n/2])) --cnt;
//	printf("%d",cnt);
	
	//dem so nguyen to tren duong cheo chinh va duong cheo phu, moi gitr thoa man
	//chi dem 1 lan
	
	
	//chuyen vi cua ma tran
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	//in ma tran tu duoi len va tu trai qua phai
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(int j=n-1;j>=0;j--){
		for(int i=n-1;i>=0;i--){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(int j=n-1;j>=0;j--){
		for(int i=0;i<n;i++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}







