#include <stdio.h>
#include <math.h>

#define max 100

void nhap(int a[],int &n){
	do{
		printf("nhap so luong phan tu:");
		scanf("%d",&n);
	}while(n<2 && n<max);
	for(int i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

float tbc(int a[],int n){
	float sum, cnt;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cnt++;
			sum+=a[i];
		}
	}
	return sum/cnt;
}

int check(int n){
	int sum = 0;
	for(int i =1;i<=n/2;i++){
		if(n%i==0){
			sum += i;
		}
	}
	return sum == n;
}

void shh(int a[],int n){
	for(int i = 0;i<n;i++){
		if(check(a[i])){
			printf("%d ",a[i]);
		}
	}
}

void xoa(int a[],int &n, int &vt){
	if(vt >= 0 && vt<n){
		for(int i=vt;i<n-1;i++){
			a[i] = a[i+1];	
		}
		n--;
		vt--;
	}
}

void xshh(int a[],int &n){
	for(int i = 0 ; i < n;i++){
		if(check(a[i])){
			xoa(a,n,i);
		}
	}
}

int main(){
	int a[max],n;
	nhap(a,n);
	xuat(a,n);
	printf("trung binh cong cua cac so chan trong mang la: %.1f\n",tbc(a,n));
	printf("cac so hoan hao trong mang la: ");
	shh(a,n);
	printf("\n");
	xshh(a,n);
	printf("cac phan tu sau khi xoa cac phan tu la so hoan hao la : ");

	xuat(a,n);
	return 0;
}
