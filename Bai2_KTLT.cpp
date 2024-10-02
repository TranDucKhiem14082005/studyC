#include <stdio.h>
#include <math.h>

//Bai 2: 
//Kiem tra SNT
int SNT(int n) {
	for(int i = 2; i<=sqrt(n);i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return n>1;
}	
//UCLN cua 2 so nguyen

int UCLN(int a, int b){
	if(a == b)
		return a;
	else if(a > b) {
		return UCLN(b,a-b);
	}else
		return UCLN(a,b-a);
}

int armstrong(int n) {
	int m = n,s=0;
	while(m!=0) {
		s += pow(m%10,3);
		m/=10;
	}
	if(s == n) 
		return 1;
	else 
		return 0;
	
}

int main() {
	//	Bai 2:
	// Kiem tra so nguyen to
	int n;
	scanf("%d",&n);
	if(SNT(n)) {
		printf("%d la SNT\n",n);
	}else{
		printf("%d khong phai la SNT\n",n);
	}
	// Tim UCLN cua hai so
//	int s1,s2;
//	scanf("%d",&s1);
//	scanf("%d",&s2);
//	int result = UCLN(s1,s2);
//	printf("UCLN cua %d va %d la: %d",s1,s2,result);
	
	// Kiem tra xem co phai la so armstrong?
	
	if(armstrong(n) == 1) {
		printf("%d la so armstrong",n);
	}else
		printf("%d khong phai la so armstrong",n);
	return 0;
}
