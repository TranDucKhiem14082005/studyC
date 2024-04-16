#include <stdio.h>
#include <math.h>

// so co 3 uoc so la binh phuong cua mot so nguyen to

//de bai la tu 1 den 10e6 => chi can duyet tu 1 den can cua 10e6 la du

int prime[1001];

void sang(){
	for(int i = 1; i<=1000;i++){
		prime[i] = 1;
	}
	prime[0] = prime [1] = 0;
	for(int i = 2;i<=sqrt(1000);i++){
		if(prime[i]){
			for(int j = i*i;j<=1000;j+=i){
				prime[j] = 0;
			}
		}
	}
}


int main(){
	int t;
	scanf("%d",&t);
	sang();
	while(t--){
		int n;
		scanf("%d",&n);
		
		for(int i = 1; i <= sqrt(n);i++){
			if(prime[i])
				printf("%d ",i*i);
		}
		printf("\n");
	}
	return 0;
}
