#include <stdio.h>
#include <math.h>
//cach 1
int check(long long n){
	int cnt = 0;
	for(int i = 1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i != n/i) cnt +=2;
			else ++cnt;
		}
	}
	if(cnt % 2 == 1){ //kiem tra xem uoc cua so da nhap co phai la mot so le hay khong
		return 1;
	}
	return 0;
}
//cach 2
// tuc la so ma co so luong uoc le la mot so chinh phuong, chung ta chi can di ktra so do co phai la so chinh phuong hay ko.
int cp(long long n){
	int can = sqrt(n);
	if(1ll * can *can == n){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(cp(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
