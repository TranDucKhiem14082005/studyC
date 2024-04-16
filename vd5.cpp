#include <stdio.h>
#include <math.h>

int prime[100001];

void sang(){
	for(int i =0; i<=100000;i++){
		prime[i] = i;//	ban dau coi tat ca cac uoc cua no la chinh no
	}
	for(int i = 2; i<=sqrt(100000);i++){
		if(prime[i]){
			for(int j = i*i;j<=100000;j+=i){
				if(prime[j] == j)
					prime[j] = i;
			}
		}
	}
}

void pt(int n){
	while(n!=1){
		int cnt= 0;
		int temp = prime[n]; //thua so nguyen to nho nhat hien tai cua n
		while(n%temp==0){
			++cnt;
			n/=temp;
		}
		printf("%d(%d) ",temp,cnt);
	}
	printf("\n");
}
int main(){
	
	
	return 0;
}
