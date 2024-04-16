#include <stdio.h>
#include <math.h>

int prime[1000001];

void sang(){
	for(int i = 0; i<= 1000000; i++){
		prime[i] = 1; // b1: coi tat ca cac phan tu cua i la so nguyen to
	}
	prime[0] = prime[1] = 0; //b2: loai bo so 0 va 1.
	
	for(int i = 2; i <= 1000; i++){ // b3 duyet cac so tu 2 den can bac 2 cua n va neu i(2) la so nguyen to
									// thi loai bo cac boi cua no.
		if(prime[i]){
			for(int j = i * i; j<= 1000000; j+=i) // b4: loai bo cac boi cua i khi i la so nguyen to
				prime[j] = 0;
		}
	}
}

int main(){
	sang();
	int n;
	scanf("%d",&n);
	for(int i =0;i <n ;i++){
		if(prime[i]) printf("%d ",i);
	}
}
