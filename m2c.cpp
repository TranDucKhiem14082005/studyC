#include <stdio.h>
#include <math.h>

#define maxc 101

void nhap(int a[][maxc], int &n){
	do{
		printf("nhap so luong hang va cot: ");
		scanf("%d",&n);
	}while (n<2 && n <maxc);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}

void xuat(int a[][maxc],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int snt(int n){
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main() {
//	int n,a[maxc][maxc];
//	nhap(a,n);
//	xuat(a,n);

	//tinh tong cac phan tu tren hang
//	for(int i=0;i<n;i++){
//		int sum = 0;
//		for(int j=0;j<m;j++){
//			sum += a[i][j];
//		}
//			printf("%d\n",sum);
//	}
	//tinh tong cac phan tu tren cot
//	for(int j=0;j<m;j++){
//		int sum1=0;
//		for(int i=0;i<n;i++){
//			sum1 += a[i][j];
//		}
//		printf("%d\n",sum1);
//	}
	//hang co nhieu so nguyen to nhat
//	int res = 0,hang;
//	for(int i=0;i<n;i++){
//		int cnt = 0;
//		for(int j=0;j<m;j++){
//			if(snt(a[i][j])){
//				++cnt;
//			}
//		}
//		if(cnt > res){
//			res = cnt;
//			hang = i;
//		}
//	}
//	printf("%d\n",hang+1);
//	for(int j=0;j<m;j++){
//		if(snt(a[hang][j])){
//			printf("%d ",a[hang][j]);
//		}
//		
//	}
	
	
	//cot co nhieu so nguyen to nhat
//	int res = 0, cot;
//	for(int j=0;j<m;j++){
//		int cnt = 0;
//		for(int i=0;i<n;i++){
//			if(snt(a[i][j])){
//				++cnt;
//			}
//		}
//		if(cnt > res){
//			res = cnt;
//			cot = j;
//		}
//	}
//	printf("%d\n",cot+1);
//	for(int i=0;i<n;i++){
//		if(snt(a[i][cot])){
//			printf("%d ",a[i][cot]);
//		}
//	}

	//loai hang va cot co tong lon nhat ra khoi mang 2 chieu
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n,m;
		scanf("%d %d",&n,&m);
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		//tim hang co tong cac phan tu lon nhat
		int res=-1e9,hang,cot;
		for(int i=0;i<n;i++){
			int sum = 0;
			for(int j=0;j<m;j++) sum +=a[i][j];
			if(sum > res){
				res = sum;
				hang = i;
			}
		}
		//tim cot co tong cac phan tu lon nhat
		res = -1e9;
		for(int j=0;j<m;j++){
			int sum=0;
			for(int i=0;i<n;i++) sum += a[i][j]; // muon giong bai 2 thi truoc sum
			//if(i!= hang) sum+=a[i][j];
			if(sum>res){
				res = sum;
				cot = j;
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
	
	return 0;
}












