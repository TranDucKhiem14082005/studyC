#include <stdio.h>
#include <math.h>

int tinhtong(int n){
	int kq = 0;
	for(int i = 1; i<=n;i++){
		kq += n%10;
		n/=10;
	}
	return kq;
}

int smith(int n){
	int sum1 = tinhtong(n); // tinh tong cac chu so n
	int sum2=0; //tinh tong cac thua so cua cac thua so nguyen to cua n
	int temp = n;
	for(int i = 2;i<=sqrt(n);i++){
		while(n%i==0){
			sum2 += tinhtong(i); // tinh tong cac chu so cua thua so nguyen to i
			n/=i;
		}
	}
	if(temp == n) return 0;// tuc la neu ma het vong lap for ma khong tim thay uoc nguyen to nao het
	// thi n la so nguyen to.
	if(n!=1)
		sum2 +=tinhtong(n);
	return sum1 == sum2;
}


int main(){
	int n;
	scanf("%d",&n);
	if(smith(n)) printf("YES");
	else printf("NO");
	return 0;
}
