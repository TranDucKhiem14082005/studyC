#include <stdio.h>
#include <stdlib.h>

void ghi(int n) {
	FILE *f;
	f = fopen("daySoNguyen.inp","w");
	if(f == NULL) {
		printf("khong mo duoc file!");
		return;
	}
	int so;
	for(int i = 0; i < n; i++) {
		printf("phan tu thu %d: ", i+1);
		scanf("%d",&so);
		fprintf(f,"%d\n",so);
	}
	fclose(f);
}

int main() {
	int n;
	printf("nhap so luong phan tu: "); scanf("%d",&n);
	ghi(n);
	return 0;
}
