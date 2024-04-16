#include <stdio.h>
#include <math.h>
int pt(int n){
	int res;
	for(int i =2; i<=sqrt(n);i++){
		while(n%i==0){
			res=i;
			n/=i;
		}
	}
	if(n!=1)
		res = n;
	return res;
}


int main(){
	int t;
	scanf("%d",&t);
	for(int i =1;i<=t;i++){
		int n;
		scanf("%d",&n);
		printf("%d\n",pt(n));
	}
	return 0;
}
