#include <stdio.h>
#include <math.h>
//dem so luong uoc so cua mot so nguyen
int dem(int n){
	int cnt = 0;
	for(int i = 1; i<=sqrt(n);i++){
		if(n%i==0){
			if(i != n/i){ // kiem tra xem no cos phair la so chinh phuong khong ( n/i co = i )
				cnt += 2;
			}else ++cnt;
		}
	}
	return cnt;
}

int dem2(int n){
	int res = 1;
	for(int i = 2; i<= sqrt(n);i++){
		int cnt = 0;
		while(n%i==0){
			++cnt;
			n/=i;
		}
		res *=(cnt + 1);
	}
	if(n!=1){
		res*=2;
	}
	return res;
}


//tinh tong uoc cua mot so
int tong(int n){
	int sum = 0;
	for(int i =1 ;i<=sqrt(n);i++){
		if(n%i==0){
			if(i != n/i){
				sum += i + n/i;
			}else sum += i;
		}
	}	
	return sum;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",tong(n));
	}
	return 0;
}
