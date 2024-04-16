#include <stdio.h>
#include <math.h>

//cach khai bao mang hai chieu
//datatype arrayNam[x][y]; .trong do x la hang, y la cot.
//tury cap vao chi so hang truoc va chi so cot sai.
//chi so hang chay tu 0 -> x-1, chi so cot chay tu 0 -> y-1
void nhapmang2D(int a[][],int &n,int &m){
	for(int i = 0; i<n;i++){
		for(int j=0;j<m;j++){
			printf("nhap gia tri cho phan tu o hang %d, cot %d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void xuatmang2D(int a[][],int n, int m){
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}


int main(){
	int n,m;
	scanf("%d %d",&n,&m)
	int a[n][m];
	nhapmang2D(a,n,m);
	xuatmang2D(a,n,m);
	
	
	
	return 0;
}
