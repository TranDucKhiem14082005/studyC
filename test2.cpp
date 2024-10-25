#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *f;
	f = fopen("test1.txt","r");
	if(f == NULL) {
		printf("Khong mo duoc file");
		return 0;
	}
	int n;
	fscanf(f, "%d", &n);
	printf("\n gia tri cua n: %d",n);
	fclose(f);
	return 0;
}	
