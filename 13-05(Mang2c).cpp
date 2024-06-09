#include <stdio.h>
#include <math.h>

int snt(int n){
	for(int i =2 ; i <=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main() {
//	int n,m;
//	scanf("%d%d",&n,&m);
//	int a[n][m];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
	
//	//tinh tong cac hang cua ma tran
//
//	for(int i =0 ; i < n; i++){
//		int sum = 0;
//		for(int j=0;j<m;j++){
//			sum += a[i][j];
//		}
//		printf("%d\n",sum);
//	}
//	
//	//tinh tong cac phan tu cung 1 cot cua ma tran
//	for(int j = 0 ; j<m;j++){
//		int sum1 = 0;
//		for(int i = 0;i<n;i++){
//			sum1 +=a[i][j];
//		}
//		printf("%d\n",sum1);
//	}
	
	//tim hang co nhieu so nguyen to nhat
//	int res = 0, hang;
//	for(int i=0;i<n;i++){
//		int cnt= 0; // dem xem hang thu i co bao nhieu so nguyen to
//		for(int j=0;j<m;j++){
//			if(snt(a[i][j])){
//				++cnt;
//			}
//		}
//		if(cnt > res) {
//			res = cnt;
//			hang = i;
//		}
//	}
//	printf("%d\n",hang+1);
//	for(int j=0;j<m;j++){
//		printf("%d ",a[hang][j]);
//	}
	
	//tim co co nhieu so nguyen to nhat va neu trong ma tran co nhieu cot co cung snt thi in ra cot dau
//	int res = 0, cot;
//	for(int j = 0; j<m;j++){
//		int cnt=0;
//		for(int i=0;i<n;i++){
//			if(snt(a[i][j])){
//				++cnt;
//			}
//		}
//		if(cnt > res) {
//			res = cnt;
//			cot = j;
//		}
//	}
//	printf("%d\n",cot+1);
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i][cot]);
//	}

	//cho ma tran co n hang, m cot hay loai bo hang co tong lon nhat va cot co tong lon nhat
	// ra khoi ma tran
	
//	int t;
//	scanf("%d",&t);
//	for(int i= t; i<=t; i++){
//		int n,m;
//		scanf("%d%d",&n,&m);
//		int a[n][m];
//		for(int i = 0;i<n;i++){
//			for(int j =0;j<m;j++){
//				scanf("%d",&a[i][j]);
//			}
//			// tim hang co tong cac phan tu lon nhat
//			int res=-1e9,hang,cot; // hang/cot la luu hang/cot co tong cac phan tu lon nhat.
//			for(int i=0;i<n;i++){
//				int sum=0;
//				for(int j=0;j<m;j++) sum += a[i][j];
//				if(sum>res){
//					res = sum;
//					hang = i;
//				}
//			}
//			//tim cot co tong cac phan tu lon nhat
//			res = -1e9;
//			for(int j=0;j<m;j++){
//				int sum=0;
//				for(int i=0 ;i<n;i++){
//					sum += a[i][j];
//				}
//				if(sum > res) {
//					res = sum;
//					cot = i;
//				}
//			}
//			printf("#TC %d:\n",i);
//			for(int i=0;i<n;i++){
//				if(i!=hang){
//					for(int j=0;j<m;j++){
//						if(j!=cot){
//							printf("%d ",a[i][j]);
//						}
//					}
//					printf("\n");
//				}
//			}
//		}
//		
//	}

	int t;
	scanf("%d",&t);
	for(int i = 0;i<=t;i++){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n][m];
		for(int i =0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
			// tim hang co tong cac phan tu lon nhat
			int res=-1e9,hang,cot;
			for(int i=0;i<n;i++){
				int sum=0;
				for(int j=0;j<m;j++){
					sum += a[i][j];
				}
				if(sum > res) {
					res = sum;
					hang = i;
				}
			}
			res=-1e9;
			for(int i=0;i<m;i++){
				int sum=0;
				for(int j=0;j<n;j++){
					if(j!=hang) sum += a[j][i];
				}
				if(sum > res){
					res = sum;
					cot = i;
				}
			}
			printf("#TC %d:\n",i);	
			for(int i=0;i<n;i++){
				if(i!=hang){
					for(int j=0;j<m;j++){
						if(j!=cot){
							printf("%d ",a[i][j]);
						}
					}
					printf("\n");
				}
			}
		}
	}
	return 0;
}




