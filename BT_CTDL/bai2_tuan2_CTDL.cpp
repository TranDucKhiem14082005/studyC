#include <stdio.h>
#include <limits>
#include <stdlib.h>
struct Node {
	float giatri;
	Node* tiep;
};

//Tao danh sach lien ket don. tim so am lon nhat trong danh sach lien ket don do


float timSA(Node*dau){
	Node*tam;
	float max = 1;
	tam = dau;
	if(dau == NULL) return max;
	while((tam!=NULL && (tam->giatri > 0))) {
		tam = tam->tiep;
	}
	if (tam  == NULL) return max;
	max = tam->giatri;
	while(tam != NULL) {
		if(tam->giatri < 0 && tam->giatri > max) {
			max = tam->giatri;
		}
		tam = tam->tiep;
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
	
	float max = timSA(dau);
	
	if(max < 0) {
		printf("so am lon nhat la: %.2f ", max);
	} 
	else printf("%.2f khong phai la so am lon nhat!!",max);
	return 0;
}






