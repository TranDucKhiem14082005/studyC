#include <stdio.h>
#include <stdlib.h>

// xay dung ham de dung truyen tham chieu cho ham: pass-by-reference
void tang(int a) {
	a += 100;
}

void tang2(int *a) {
	*a += 100;
}

void swap(int *a, int *b) {
	int temp = *a; //luu gia tri cua bien ma con tro a dang tro toi
	*a = *b; //gan gtri cua bien ma con tro b dang tro toi cho gtri cua bien ma con tro a dang tro toi
	*b = temp; // gan bien temp cho gtri cua bien ma con tro b dang tro toi
}

int main() {
//	int a = 300;
//	int *ptr; //day la mot con tro kieu int: khai bao.
//	//Khoi tao gia tri cho con tro
//	ptr = &a; //&
//	printf("dia chi cua bien a: %d\n",&a);
//	printf("gia tri cua con ptr: %d\n",ptr);
//	//Toan tu giai tham chieu
//	printf("Gia tri cua bien a: %d\n",a);
//	printf("gia tri cua bien ma con tro ptr dang quan li: %d\n",*ptr);
//	
//	//co the thay doi bien a bang toan tu giai tham chieu
//	*ptr = 2005; // == a = 2005;
//	printf("gia tri cua bien a sau khi thay doi bang con tro ptr: %d\n",a);

//*****************************
//	
//	int a = 300;
//	tang(a);
//	printf("Gia tri cua bien a sau khi ham tang1 ket thuc: %d\n",a);
//
//	tang2(&a);
//	printf("Gia tri cua bien a sau khi ham tang2 ket thuc: %d\n",a);

//	int x = 100, y = 200;
//	swap(&x,&y);
//	printf("%d %d",x,y);  

	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%d\n",a);
	for(int i =0; i<10;i++) {
		printf("dia chi cua phan tu a[%d]: %d\n",i, &a[i]);
	}

	return 0;
}
