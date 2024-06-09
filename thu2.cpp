#include <stdio.h>
#include <string.h>

#define maxc 100

void nhap(int a[][maxc],int &n){
	do{
		printf("so luong hang va so luong cot: ");
		scanf("%d",&n);
	}while (n<2 && n < maxc);
	
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

float tbc_chan_dcc(int a[][maxc],int n){
	long long tong = 0;
	int cnt = 0;
	
	for(int i = 0; i<n;i++){
		if(a[i][i] % 2 == 0){
			cnt++;
			tong += a[i][i];
	
		} 
	}

	return (float)tong/cnt;
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

void shh(int a[][maxc],int n){
	for(int i = 0 ;i<n;i++){
		for(int j=0;j<n;j++){
			if(check(a[i][j])){
				printf("%d ",a[i][j]);
			}
		}
	}
}

int sonhonhat(int a[][maxc],int n){
	int min = 2e9+1;
	for(int i=0;i<n;i+=2){
		for(int j=1;j<n;j+=2){
			if(a[i][j] < min) {
				min = a[i][j];
			}
		}
	}
	return min;
}

int main(){
	int n, a[maxc][maxc];
	nhap(a,n);
	xuat(a,n);
	float tongchan = tbc_chan_dcc(a,n);
	printf("%.1f\n",tongchan);
	shh(a,n);
	printf("\n");
	int snn = sonhonhat(a,n);
	printf("%d",snn);
	return 0;
}
