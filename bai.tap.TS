#include <stdio.h>

int mark[1000001]={0};// xem phan tu nao do duoc in ra chua
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	//liet ke cac gia tri da xuat hien trong mang, moi gia tri xuat hien chi liet ke
	//mot lan va nhung gia tri do phai sap xep giong trong mang
	
	for(int i=0;i<n;i++){
		if(mark[a[i]] == 0){
			printf("%d ",a[i]);
			mark[a[i]] = 1; // phan tu do da in ra r
		}
	}
	
	return 0;
}
