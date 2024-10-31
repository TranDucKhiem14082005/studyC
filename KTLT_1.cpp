#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ghiSoVaoMaTran(int n) {
	FILE *f;
	f = fopen("GhiVaoMaTran.inp","w");
	if(f == NULL){
		printf("khong mo duoc file!");
		return;
	}
	fprintf(f,"kich thuoc cua ma tran la: %d X %d\n",n,n);
	srand(time(NULL)); // tao ra 1 so ngau nhien theo thoi gian
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) {
			int soNgauNhien = rand() % 1001; //lay SNN tu 0 dem 1000
			//vd lay so ngau nhien tu 0 dem 500 thi chia cho 501
			fprintf(f,"%d ",soNgauNhien);
			
		}
		fprintf(f,"\n");
	}
	fclose(f);
}

int main() {
	int n;
	printf("nhap kich thuoc cua ma tran: "); scanf("%d",&n);
	if( n < 2 || n > 30) {
		printf("Kich thuoc ma tran khong hop le!");
		exit(1);
	}
	ghiSoVaoMaTran(n);
	return 0;
}
