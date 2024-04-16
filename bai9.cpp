#include <stdio.h>
#include <math.h>
#define maxh 5
#define maxc 5

void nhapmang(int a[maxh][maxc], int &m, int &n){
	do{
		printf("hay nhap so dong va so cot: "); scanf("%d %d",&m,&n);
	}while(m<2 ||m>5 || n<2 || n>5);
	for(int i = 0;i<m;i++)
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
}

void xuatmang(int a[maxh][maxc],int &m, int &n){
	for(int i=0;i<m;i++){
		for(int j= 0; j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}

int tongpt_Duong_DongDau(int a[maxh][maxc],int n){
	int tong = 0;
	for(int j = 0; j<n;j++){
		if(a[0][j]>0)
		tong += a[0][j];
	}	
	return tong;
}

void indong(int a[maxh][maxc],int n, int i){
	printf("cac phan tu cua dong %d la: ",i);
	for(int j = 0;j<n;j++){
		printf("%d ",a[i][j]);
	}
	printf("\n");
}

void hoanvi(int a[maxh][maxc],int m, int n){
	for(int j = 0; j< n; ++j){
		for(int i = 0; i < m; ++i){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	int a[maxh][maxc],n,m;
	nhapmang(a,m,n);
	xuatmang(a,m,n);
	printf("tong cac phan tu duong nam o dong dau la: %d ",tongpt_Duong_DongDau(a,n));
	int dong;
	printf("\nhay nhap dong ma ban muon in: "); scanf("%d",&dong);
	if(dong<0 || dong >= m){
		printf("dong ban nhap khong hop le!!!"); 
	}else indong(a,n,dong);
	printf("ma tran sau khi hoan vi la:\n");
	hoanvi(a,m,n);
	return 0;
}
