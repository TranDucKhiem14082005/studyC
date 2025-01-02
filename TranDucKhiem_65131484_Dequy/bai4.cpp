#include <stdio.h>

long long giaithua(int n) {
	long long s = 1;
	for(int i = 1; i <= n; i++){
		s*=i;
	}
	return s;
}

long long s4(int n){
	if(n == 1 || n == 0) return 1;
	else return s4(n-1) + giaithua(n) ;
	
}



int main() {
	int n;
	scanf("%d",&n);
	long long result = s4(n);
	printf("%lld",result);
	return 0;
}
