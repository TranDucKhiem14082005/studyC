#include <stdio.h>
#include <math.h>
//cach lam thong thuong.
int hh(long long n){
	long long sum = 1;
	for(int i = 2; i<= sqrt(n);i++){ // khong duyet tu 1 thi tinh ca uoc con lai la n/1 => la n
		if(n%i==0){
			if(i != n/i){
				sum += i+n/i;
			}else sum += i;
		}
	}
	return sum == n;
}

//cach lam thong cong thuc.

int nt(int n){
	for(int i = 2; i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}

int check(long long n){
	for(int i = 1;i<=32;i++){
		if(nt(i)){
			int temp = (int)pow(2,i)-1;
			if(nt(temp)){
				long long hh = temp * (int)pow(2,i-1);
				if(hh==n)
					return 1;
			}
		}
	}
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
