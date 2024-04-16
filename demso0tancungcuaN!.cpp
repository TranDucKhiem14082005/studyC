#include <stdio.h>
#include <math.h>
// cach lam thong thuong ==> phu thuoc vao viec trong tich do co bao nhieu so 10 ( 5*2 ) ==> chi can dem la so 5
//xuat hien bao nhieu lan trong cai tich do. boi vi sao khong den so 2. vi so luon luon xuat hien nhieu nhon so 5.
//neu du so 2 ma het so 5 thi dau con so 5 nao de nhan cho 2 ra 10.
int dem(int n){
	int res = 0;
	for(int i = 5; i<=n;i+=5){
		int temp = i;
		while(temp%5 == 0){
			++res;
			temp/=5;
		}
	}
	return res;
}

int dem2(int n){
	int res = 0;
	for(int i = 5; i<=n;i*=5){
		res += n/i;
	}
	return res;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1; i<=t;i++){
		int n;
		scanf("%d",&n);
		printf("%d %d\n",dem(n),dem2(n));
	}
	return 0;
}
