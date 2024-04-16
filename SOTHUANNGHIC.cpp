#include <stdio.h>
#include <math.h>

int sotn(int n){
	int res = n;
	int res1 = 0;
	while(n){
		res1 = res1 * 10 + n%10;
		n/=10;
	}
	if(res == res1) return 1;
	else return 0;
}

int sotn2(int n){
	int res = n;
	int res1 = 0;
	for(int i=1; i<=n;i++){
		res1 = res1 * 10 + n*i;
		n/=10;
	}
	
	if(res == res1 ) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(sotn2(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
