#include <stdio.h>
#include <math.h>
// cach lam thong thuong
int socp(int n){ // kiem tra 1 so co phai la so chinh phuong hay khong
	int can = sqrt(n);
	if(can * can == n)
		return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		// cach 2;
		int c1 = sqrt(a), c2 = sqrt(b);
		if(c1 * c1 != a)
			++c1;
		for(int i = c1; i<= c2; i++){
			printf("%d ",i*i);
		}
	}
}
