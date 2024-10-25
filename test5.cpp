#include <stdio.h>
#include <stdlib.h>

void nhapMang(int a[], int &n) {
	do{
		printf("nhap vao n: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i =0; i<n; i++) {
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int n) {
	for(int i =0; i<n; i++) {
		printf("a[%d]= %d ",i,a[i]);
		
	}
}

void xuatFile(int a[], int n, char tenFile[50]){
	FILE *f;
	f = fopen(tenFile,"w");
	if(f == NULL) {
		printf("loi!");
		return;
	}
	fprintf(f, "%d\n",n);
	for(int i = 0 ; i < n; i++){
		fprintf(f,"%d",a[i]);
	}
	fclose(f); 
}

void xuatFile2(int a[], int n, char tenFile[50]){
	FILE *f;
	f = fopen(tenFile,"w");
	if(f == NULL) {
		printf("loi!");
		return;
	}
	for(int i = 0 ; i< n; i++){
		fprintf(f,"%d\n",a[i]);
	}
	fclose(f);
}

void nhapFile(int a[], int &n, char tenFile[50]) {
	FILE *f;
	f = fopen(tenFile, "r");
	if(f == NULL) {
		printf("loi!");
	}
	fscanf(f,"%d",&n);
	printf("%d",n);
	for(int i=0;i<n;i++){
		fscanf(f,"%d",&a[i]);
	}
	fclose(f);
}

void nhapFile2(int a[], int &n, char tenFile[50]) {
	FILE *f;
	f = fopen(tenFile, "r");
	if(f == NULL) {
		printf("loi!");
		return;
	}
	int i = 0;
	while(!feof(f)){
		fscanf(f,"%d",&a[i]);
		i++;
	}
	n = i;
	
	fclose(f);
}

int main() {
	int a[100];
	int n;
//	nhapMang(a,n);
//	xuatMang(a,n);
//	xuatFile(a,n,"test4.out");
//	xuatFile2(a,n,"test4_2.out");
//	nhapFile(a,n,"test4.out");
//	xuatMang(a,n);
	nhapFile2(a,n,"test4_2.out");
	xuatMang(a,n);
	return 0;
}
