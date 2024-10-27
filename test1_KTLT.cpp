#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *f;
	f = fopen("dayso.txt","w"); 
	if(f == NULL) {
		printf("khong the mo file!");
		return 0;
	}
	int n;
	printf("\n nhap vao so n: "); scanf("%d",&n);
	
	fprintf(f,"%d",n);
	
	fclose(f);
	return 0;
}
