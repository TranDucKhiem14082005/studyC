#include <stdio.h>
#include <limits>
#include <stdlib.h>
struct Node {
	float giatri;
	Node* tiep;
};

//Tao danh sach lien ket don. tim so am lon trong danh sach lien ket don do

float am_max(Node *dau){
	Node *tam;
	tam=dau;
	float max=0;
	while(tam!=NULL){
		if(tam->giatri<0){
			max=tam->giatri;
			break;
		}
		tam=tam->tiep;
	}
	while(tam!=NULL){
		if(tam->giatri>max && tam->giatri<0){
			max=tam->giatri;
		}
		tam=tam->tiep;
	}
	return max;
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
	
	float tong = am_max(dau);
	
	if(tong < 0) {
		printf(" so am lon nhat  la: %.2f ", tong);
	} 
	else printf("Khong co so am trong danh sach lien ket!!!");
	return 0;
}






