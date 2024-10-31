#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ghiMaTranNgayNhienVaoFile(int n) {
	FILE *f;
	f = fopen("MaTran.inp","w");
	if(f == NULL) {
		printf("khong the mo file!");
		return;
	}
	
	srand(time(NULL));//khoi tao seed cho ham rand dua vao thoi gian hien tai
	fprintf(f,"phan tu cua ma tran la: %d\n",n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int soNgauNhien = rand() % 1001;
			fprintf(f, "%d ",soNgauNhien);
		}
		fprintf(f,"\n");
	}
	fclose(f);
}

int main() {
	int n;
	printf("nhap kich thuoc cua ma tran: "); scanf("%d",&n);
	if(n<2 || n > 30){
		printf("kich thuoc khong hop le!");
		exit(1);
	}
	ghiMaTranNgayNhienVaoFile(n);
	return 0;
}
