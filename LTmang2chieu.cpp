#include <stdio.h>
#include <math.h>
# define maxc 101
//cach khai bao mang hai chieu
//datatype arrayNam[x][y]; .trong do x la hang, y la cot.
//tury cap vao chi so hang truoc va chi so cot sai.
//chi so hang chay tu 0 -> x-1, chi so cot chay tu 0 -> y-1


/*
	* mot so bai tap vef mang 2 chieu
	+kiem tra tinh chat cua cac phan tu trong mang hai chieu
	+lam viec voi cac phan tu tren hang, cot
	+lam viec voi tam giac tren, tam giac duoi, duong cheo chinh, duong cheo phu
	+ma tran xoay oc,...
	+tong, hieu, tich,....
*/
void nhap(int a[][maxc],int &n, int &m){
	for(int i=0;i<n;i++){
		for(int j = 0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}

void xuatmang(int a[][maxc],int n,int m){
	for(int i = 0 ; i < n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int nt(int n){
	for(int i = 2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n,m,a[maxc][maxc];
	scanf("%d %d",&n,&m);
	nhap(a,n,m);
	xuatmang(a,n,m);
	int sum = 0;
	for(int i = 0; i<n;i++){
		for(int j = 0;j<m;j++){
			if(nt(a[i][j])){
				printf("%d ",a[i][j]);
				sum += a[i][j];
			}
		}
	}
	printf("\n");
	printf("%d\n",sum);
	return 0;
}
