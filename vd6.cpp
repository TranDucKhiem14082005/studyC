#include <stdio.h>
#include <math.h>
//de: bac cua so nguyen to trong n giai thua

// cach thong thuong
int dem(int n, int p){
	int ans = 0;
	for(int i = p;i<=n;i+=p){
		int temp = i;
		while(temp%p==0){//dem trong bien temp thi co bao nhieu lan xuat hien thang p
			++ans;
			temp/=p;
		}
	}
	return ans;
}
// dung cong thuc legendre
int dem2(int n,int p){
	int ans = 0;
	for(int i = p;i<=n;i*=p){ // voi buoc nhay la p thi tuc i se nhay so mu lan p. vd p, p^2,p^3,p^4,....
		ans+=n/i;
	}
	return ans;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1; i<=t;i++){
		int n,p;
		scanf("%d %d",&n,&p);
		printf("%d\n",dem2(n,p));
	}
	
	return 0;
}
