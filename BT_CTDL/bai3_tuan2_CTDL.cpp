#include <stdio.h>
#include <limits>
#include <stdlib.h>
struct Node {
	float giatri;
	Node* tiep;
};

//tinh tong cac so duong trong danh sach lien ket

float tong_duong(Node *dau){
	Node *tam;
	tam=dau;
	float tong=0;
	while(tam!=NULL){
		if(tam->giatri>0){
			tong=tong + tam->giatri;
		}
		tam=tam->tiep;
	}
	return tong;
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
	
	float tong = tong_duong(dau);
	
	if(tong > 0) {
		printf("Tong cac so duong trong danh sach lien ket: %.2f ", tong);
	} 
	else printf("Khong co so duong trong danh sach lien ket!!!");
	return 0;
}






