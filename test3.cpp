#include <stdio.h>
#include <stdlib.h>

struct NgaySinh {
	int ngay,thang,nam;
};


int main() {
	FILE *f;
	
	f = fopen("test3.bin","wb");
	if(f == NULL){ 
		printf("LOI!");
		exit(1);
	}
	//ghi du lieu
	NgaySinh n1;
	n1.ngay = 1;
	n1.thang = 1;
	n1.nam = 2025;
	fwrite(&n1,sizeof(struct NgaySinh),1,f);
	fclose(f); 
	
	return 0;
}
