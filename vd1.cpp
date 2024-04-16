#include <stdio.h>
#include <math.h>
/* sang so nguyen to tren doan
int max(int a,int b){
//	if(a>b) return a;
//	return b;
//}
//void sang(int l, int r){
//	int prime[r-l+1];
//	for(int i = 0; i <=(r-l+1); i++){
//		prime[i] = 1;	
//	}
//	for(int i = 2;i <= sqrt(r); i++){
//		for(int j = max(i*i,(l+i-1)/i*i); j <=r;j +=i){ // o cho max j se chon 1 trong 2 so do la i*i hoac la phan con lai der chay.
//			prime[j - l] = 0;// luc nay xem j la right
//		}
//	}
//	for(int i = max(l,2); i<=r;i++){
//		if(prime[i-l]) //i la r
//			printf("%d ",i);
//	}
//}
*/
/* Sang so nguyen to voi nhieu test case
int prime[1000001];
void sang(){
	for(int i = 0; i<=1000001;i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(prime[i]){		
			for(int j= i*i; j<= 1000000;j+=i)
				prime[j] = 0;
		}
	}
	int main(){
		scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(prime[n]) printf("YES\n");
		else printf("NO\n");
	}
}
}*/  

int prime[1000001];
void sang(){
	for(int i = 0; i<=1000000;i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(prime[i]){		
			for(int j= i*i; j<= 1000000;j+=i)
				prime[j] = 0;
		}
	}
}
	
int tachSNT(int n){	
	while(n){
		int r = n % 10;
		if(r != 2 && r!= 3 && r!=5 && r!=7){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		int dem = 0;
		for(int i =a ; i<=b; i++){
			if(tachSNT(i) && prime[i])
				dem++;
		}
		printf("%d\n",dem);	
	}
	return 0;
}
