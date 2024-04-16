#include <stdio.h>
#include <math.h>

int solve(long long n){
	if(n == 0 || n == 1) 
		return 1;
	long long fn2 = 0, fn1 = 1; // fn2 tuc la fn - 2; fn1 tuc la fn - 1.
	for(int i = 3; i<=93;i++){
		long long fn = fn1 + fn2;
		if(fn == n) // kiem tra xem n co phai la so fibonacci hay khong. (fn luc nay da la so fibonacci)
			return 1;
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}

long long fb[100];
void init(){
	fb[0] = 0;
	fb[1] = 1;
	for(int i =2;i<=92;i++){
		fb[i] = fb[i - 1] + fb[i-2];
	}
}

int main(){
	init();
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		int ok = 0;
		for(int i=0;i<=92;i++){
			if(fb[i] == n){	
				ok = 1; break;
			}
			
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
