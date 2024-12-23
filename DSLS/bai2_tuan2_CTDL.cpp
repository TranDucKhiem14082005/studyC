#include <stdio.h>
#include <limits>
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
	Node n1 = {-5.5 , NULL};
	Node n2 = {2.4, NULL};
	Node n3 = {1, NULL};
	n1.tiep = &n2;
	n2.tiep = &n3;
	Node* dau = &n1;
	
	float max = timSA(dau);
	
	if(max < 0) {
		printf("so am lon nhat la: %.2f ", max);
	} 
	else printf("%f khong phai la so am lon nhat!!",max);
	return 0;
}






