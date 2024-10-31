#include <stdio.h>
#include <stdlib.h>


void ghi(float a[] ,int n){
	FILE *f;
	f = fopen("dayso.inp","w");
	if(f == NULL) {
		printf("Khong the mo file!");
		return;
	}
	fprintf(f,"so phan tu: %d\n",n);
	for(int i = 0; i < n; i++){
		fprintf(f,"%.0f ",a[i]);
	}
	fclose(f);
}

void doc(){
	FILE *f;
	f = fopen("dayso.inp","r");
	if(f == NULL) {
		printf("Khong the mo file!");
		return;
	}
	int soPhanTu;
    fscanf(f, "so phan tu: %d", &soPhanTu);
	float soThuc;
	while(fscanf(f,"%f",&soThuc) != EOF){
		printf("%.2f ",soThuc);
	}
	fclose(f);
	printf("\n");
}


int main() {
	int n;
	printf("nhap so phan tu n: ");
	scanf("%d",&n);
	float a[n];
	for(int i = 0 ; i < n; i++) {
		printf("so thuc thu %d: ",i+1);
		scanf("%f",&a[i]);
	}
	ghi(a,n);
	doc();
	return 0;
}
