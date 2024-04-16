#include <stdio.h>
#include <math.h>
int prime[1000001];

void sang(){
	int j;
	for(int i = 0; i<= 1000000; i++)
		prime[i] = 1;
	prime[0] = prime [1] = 0;
	for(int i = 2; i <= 1000;i++){ // kiem tra so nguyen to
		if(prime[i]){// neu i la so nguyen to thi
			for( j= i*i;j<=1000000;j+=i);//duyet  j chay tu boi cua j nhung bat dau bang i binh khong phai la so nguyen to
				prime[j]=0;
		}
	}
}

int main(){
	sang();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(prime[n]){
			printf("YES\n");	
		}else printf("NO\n");
	}
	return 0;
}
