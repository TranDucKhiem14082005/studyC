#include <stdio.h>
#include <math.h>

//Bai 1
//Kiem tra xem co phai la mot tam giac ?
int check(int a, int b, int c) {
	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
			return 1;
	} else {
		return 0;
	}
}

//tinh Dien tich tam giac
float DTTG(float a, float b, float c) {
	float p = (a + b + c)/2;
	return  sqrt(p*(p-a)*(p-b)*(p-c));
}

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
	int m = n,s=0,dv;
	while(m) {
		dv = m % 10;
		s += pow(dv,3);
		m/10;
	}
	if(s == n) 
		return 1;
	else 
		return 0;
	
}

int main() {
	//Bai 1:
//	float a,b,c;
//	scanf("%f",&a);
//	scanf("%f",&b);
//	scanf("%f",&c);
//	if(check(a,b,c)) {
//		printf("Dien tich tam giac: %.2f\n",DTTG(a,b,c));
//	}else {
//		printf("a b c khong phai la mot tam giac\n");
//	}
//	

	
	return 0;
}
