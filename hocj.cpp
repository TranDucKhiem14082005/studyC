#include <stdio.h>
#include <math.h>
int nt(int n){
	for(int i = 2; i<= sqrt(n);i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int n;
	printf("nhap so luong phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	printf("gia tri cua phan tu trong mang la: ");
	for(int i =0; i<n;i++){
		scanf("%d",&a[i]);
	}
	
	//tim va in ra chi so cua so nho nhat ( lon nhat ) trong mang, neu co nhieu so co cung gia tri nho nhat ( lon nhat ) thi
	//in ra chi so dau tien ( cuoi cung )
	// cach giai: dung 2 bien, 1 bien dung de luu ki luc cua chi so do, va 1 bien la lua  chi so cua bien do
	int res = -1e9 - 1, index;
	for(int i = 0; i<n;i++){ // tim chu so nho nhat trong mang va in ra chi so dau tien cua so do neu co cung gia tri
		if(a[i] >= res){ // tuc la luc nay gia tri ki luc cua no dang hien tai la a[i].
		 // co dau bang thi in ra chi so cuoi cung cua so nho nhat khi co nhieu chu so khac cos cung gia tri
			res = a[i];
			index = i;
		}
	}
	printf("%d ", index);
	
	
	return 0;
}



