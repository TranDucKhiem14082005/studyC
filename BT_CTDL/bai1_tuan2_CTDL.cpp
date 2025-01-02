#include <stdio.h>
#include <limits>
#include <stdlib.h>>
struct Node {
	float giatri;
	Node* tiep;
};

//Tao danh sach lien ket don. Tim so duong nho nhat trong danh sach lien ket do


float timSD(Node*dau){
	Node*tam;
	float le = 1;
	tam = dau;
	int a = (5%2);
	if(dau == NULL) return le;
	while((tam!=NULL && (tam->giatri <= 0))) {
		tam = tam->tiep;
	}
	if (tam  == NULL) return le;
	le = tam->giatri;
	
	while(tam != NULL) {
		if(tam->giatri > 0 && tam->giatri < le && tam->giatri == a) {
			le = tam->giatri;
		}
		tam = tam->tiep;
	}
	return le;
}

int main() {
	int n;
    printf("Nhap so luong phan tu trong danh sach: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Danh sach khong hop le.\n");
        return 0;
    }
    
    Node* dau = NULL;
    Node* cuoi = NULL;
    
   
    for (int i = 0; i < n; i++) {
        float gia_tri;
        printf("Nhap gia tri phan tu %d: ", i + 1);
        scanf("%f", &gia_tri);
        
        Node* moi = (Node*)malloc(sizeof(Node));
        moi->giatri = gia_tri;
        moi->tiep = NULL;
        
        if (dau == NULL) {
            dau = moi;  
            cuoi = dau;
        } else {
            cuoi->tiep = moi;  
            cuoi = moi;
        }
    }
	
	float min = timSD(dau);
	
	if(min > 0) {
		printf("so duong nho nhat la: %.2f ", min);
	} 
	else printf("%.2f khong phai la so duong nho nhat!!",min);
	return 0;
}






