#include <stdio.h>
#include <stdlib.h>

struct NgaySinh {
	int ngay,thang,nam;
};

int main() {
	FILE *f;
	f = fopen("test3.bin","rb");
	if(f == NULL) {
		printf("LOI!");
		exit(1);
	}
	//DOC DULIEU
	
	NgaySinh n1;
	fread(&n1,sizeof(struct NgaySinh),1,f);
	printf("\n Ngay sinh: %d %d %d",n1.ngay,n1.thang,n1.nam);
	fclose(f);
	
	return 0;
}
