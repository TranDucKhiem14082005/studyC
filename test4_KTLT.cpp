#include <stdio.h>
#include <stdlib.h>

struct Ngaysinh {
	int ngay;
	int thang;
	int nam;
};

int main() {
	FILE *f;
	f = fopen("test3_KTLT.bin","rb");
	if(f == NULL) {
		printf("Khong the mo file!");
		return 0;
	}
	
	Ngaysinh n;

	fread(&n,sizeof(struct Ngaysinh),1,f);
	
	printf("%d %d %d",n.ngay,n.thang,n.nam);
	
	fclose(f);
	
	return 0;
}

