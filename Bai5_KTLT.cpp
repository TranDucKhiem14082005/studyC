#include <stdio.h>
#include <math.h>
//Tich hai so
inline double tich(float a, float b) {
	return a * b;
}

//Tinh tien dien

double tienDien(float kw, float nuoc,int dien = 4,int gianuoc = 10) {
	return kw * dien + nuoc * gianuoc;
}

//Ham luy thua

double myPower(int a) {
	return a * a;
}

double myPower(int a,  int b) {
	int S = 1;
	for(int i = 1; i <= b; i++) {
		S *=a;
	}
	return S;
}


//Ham chong nhau

double tinhDT(float a, float r) {
	return a * r;
}

double tinhDT(float r) {
	return 3.14 * r * r;
}

int main() {
	float a, b;
	scanf("%f",&a);
	scanf("%f",&b);
	//Ham noi tuyen
	double result = tich(a,b);
	printf("tich cua hai so %f va %f = %.2lf\n",a,b,result);
	//Ham mac dinh
	printf("tien dien + nuoc mot phong tro: %lf\n",tienDien(a,b));
	printf("nhap so a: ");
	scanf("%f",&a);
	printf("nhap so mu: ");
	scanf("%f",&b);
	printf("luy thua cua %f va %f la: %lf\n",a,b,myPower(a,b));
	printf("nhap so a khi khong co mu: ");
	scanf("%f",&a);
	printf("Binh phuong cua %f la: %lf\n",a,myPower(a));
	//Ham chong nhau
	//Dien tich hinh chu nhat
	printf("nhap chieu dai HCN: ");
	scanf("%f",&a);
	printf("nhap chieu rong HCN: ");
	scanf("%f",&b);
	printf("Dien tich hinh chu nhat la: %lf\n",tinhDT(a,b));
	printf("nhap ban kinh hinh tron: ");
	scanf("%f",&a);
	printf("Dien tich hinh tron la: %lf\n",tinhDT(a));
	
}




