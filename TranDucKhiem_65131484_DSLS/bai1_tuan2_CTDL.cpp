#include <stdio.h>
#include <limits>
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
	Node n1 = {-5.5 , NULL};
	Node n2 = {51, NULL};
	Node n3 = {2, NULL};
	n1.tiep = &n2;
	n2.tiep = &n3;
	Node* dau = &n1;
	
	float min = timSD(dau);
	
	if(min > 0) {
		printf("so duong nho nhat la: %f ", min);
	} 
	else printf("%f khong phai la so duong nho nhat!!",min);
	return 0;
}






