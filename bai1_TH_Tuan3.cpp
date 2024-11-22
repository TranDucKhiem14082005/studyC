#include <stdio.h>
#include <stdlib.h>

int docFile (int a[], int *n, char *tenfile[]){
	FILE *f = fopen(tenfile,"r");
	if(f == NULL) {
		printf("khong the mo file!\n");
		return 0;
	}
	fscanf(f,"%d\n",n);
	for(int i = 0; i < *n; i++){
		fscanf(f,"%d ",&a[i]);
	}
	fclose(f);
	return 1;
}

void inMang(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(){
	int a[100], n;
	if(!docFile(a,&n,"Lab3.inp")){
		return 0;
	}
	inMang(a,n);
	return 0;
}


