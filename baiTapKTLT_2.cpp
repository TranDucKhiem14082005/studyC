#include <stdio.h>
#include <stdlib.h>

void xuatMang(int a[30][30], int n) {
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int docMaTran(int a[30][30], int *n, char *tenFile){
	FILE *f;
	f = fopen(tenFile,"r");
	if(f == NULL) {
		printf("khong mo duoc file");
		return 0;
	}
	fscanf(f,"%d",n);
//	printf("so phan tu: %d\n", n);
	for(int i=0;i<*n;i++){
		for(int j=0;j<*n;j++){
			fscanf(f,"%d",&a[i][j]);
		}	
	}
	fclose(f);
	return 1;
}


int main() {
	int a[30][30], n;
	if(!docMaTran(a,&n,"MaTran.inp")) return 1;
	xuatMang(a,n);
	return 0;
}
