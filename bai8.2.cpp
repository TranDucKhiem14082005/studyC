#include <stdio.h>
#include <math.h>
#define maxc 101

void nhapmang(int a[][maxc],int &m, int &n){
	printf("nhap so dong va so cot cua ma tran: "); scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j = 0; j <n; j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatmang(int a[][maxc],int &m, int &n){
	for(int i =0; i < m; i++){
		for(int j = 0; j<n;j++){
			printf("%d ",a[i][j]);
		}
			printf("\n");
	}
}

int TongTDCChinh(int a[][maxc],int n){
	int i;
	int tong = 0;
	for( i = 0; i< n; i++)
		tong += a[i][i];
	return tong;
}

int TongChan(int a[][maxc],int m, int n){
	int tong = 0;
	for(int i = 0; i<m;i++)
		for(int j=0;j<n;j++){
			if(a[i][j] % 2 ==0) tong += a[i][j];
		}
	return tong;
}

int tongpt_DC_CL(int a[][maxc],int m, int n){
	int tong = 0;
	for(int i = 0; i<m;i+=2)
		for(int j=1;j<n;j+=2){
			tong += a[i][j];
		}
	return tong;
}

int lsnt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

void SNT_TGD(int a[][maxc],int m, int n){
	for(int i = 0; i< m; i++)
		for(int j = 0; j<n;j++){
			if((i>j)&&(lsnt(a[i][j])))
				printf("%d ",a[i][j]);
		}
}
int main(){
	int a[maxc][maxc],m,n;
	nhapmang(a,m,n);
	xuatmang(a,m,n);
	printf("tong cac phan tu tren duong cheo chinh la: %d ",TongTDCChinh(a,n));
	printf("\ntong cac phan tu chan trong ma tran la: %d",TongChan(a,m,n));
	printf("\ntong cac phan tu dong chan cot le la: %d ",tongpt_DC_CL(a,m,n));
	printf("\ncac so nguyen to nam o tam giac duoi la: ");
	SNT_TGD(a,m,n);
	return 0;
}
