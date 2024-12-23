#include <stdio.h>
#include <limits>
struct Node {
	float giatri;
	Node* tiep;
};

//tinh tong cac so duong trong danh sach lien ket


float tongDuong(Node*dau){
	Node*tam;
	float tong = 0;
	tam = dau;
	if(dau == NULL) return tong;
	while((tam!=NULL && (tam->giatri <= 0))) {
		tam = tam->tiep;
	}
	if (tam  == NULL) return tong;
	tong = tam->giatri;
	while(tam != NULL) {
		if(tam->giatri > 0 && tam->giatri < tong) {
			tong += tam->giatri;
		}
		tam = tam->tiep;
	}
	return tong;
}

int main() {
	Node n1 = {-5.5 , NULL};
	Node n2 = {2.4, NULL};
	Node n3 = {1, NULL};
	Node n4 = {3, NULL};
	n1.tiep = &n2;
	n2.tiep = &n3;
	n3.tiep = &n4;
	Node* dau = &n1;
	
	float tong = tongDuong(dau);
	
	if(tong > 0) {
		printf("Tong cac so duong trong danh sach lien ket: %.2f ", tong);
	} 
	else printf("Khong co so duong trong danh sach lien ket!!!");
	return 0;
}






