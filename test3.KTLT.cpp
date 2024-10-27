#include <stdio.h>
#include <stdlib.h>
struct Ngaysinh {
	int ngay;
	int thang;
	int nam;
};

int main() {
	FILE *f;
	f = fopen("test3_KTLT.bin","wb");
	if(f == NULL) {
		printf("khong the mo file");
		return 0;
	}
	Ngaysinh n1;
	n1.ngay = 14;
	n1.thang = 8;
	n1.nam = 2005;
	
	fwrite(&n1,sizeof(struct Ngaysinh),1,f);
		
	fclose(f);
	
	return 0;
}
