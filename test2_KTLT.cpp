#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *f;
	f = fopen("dayso.txt","r");
	if(f == NULL) {
		printf("khong the mo file");
		return 0;
	}
	
	int n;
	fscanf(f,"%d",&n);
	printf("\nGia tri cua n la :%d",n);
	fclose(f);
	
	return 0;
}
