#include <stdio.h>
#include <stdlib.h>

#define maxc 100

void nhapMang(int a[], int &n) {
	do {
		printf("\nNhap vao n: ");
		scanf("%d",&n);
	}while(n <= 0);
	for(int i=0; i<n; i++) {
		printf("\na[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int n) {
	for(int i=0; i<n; i++) {
		printf("\na[%d] = %d",i,a[i]);
	}
}

void xuatFileTuMang(int a[], int n, char S[50]) {
	FILE *f;
	f = fopen(S,"w");
	if(f == NULL) {
		printf("khong the mo file");
		return;
	}
	fprintf(f, "%d\n",n);
	for(int i=0; i<n; i++) {
		fprintf(f,"%d\n",a[i]);
	}
	fclose(f);
}

void nhapFileVaoMang(int a[], int &n, char S[50]) {
	FILE *f;
	f = fopen(S,"r");
	if(f == NULL) {
		printf("khong the mo file");
		return;
	}
	fscanf(f,"%d",&n);
	printf("%d\n",n);
	for(int i=0; i<n; i++) {
		fscanf(f,"%d",&a[i]);
//		printf("%d\n",a[i]);
	}
	fclose(f);
}

void xuatFile2(int a[], int n, char S[50]) {
	FILE *f;
	f = fopen(S,"w");
	if(f == NULL) {
		printf("khong the mo file");
		return;
	}
	for(int i=0; i<n; i++) {
		fprintf(f,"%d\n",a[i]);
	}
	
	fclose(f);
}

void nhapFile2(int a[], int &n, char S[50]) {
	FILE *f;
	f = fopen(S,"r");
	if(f == NULL) {
		printf("Khong the mo file");
		return;
	}
	
	int i = 0;	
	while(!feof(f)) {
		fscanf(f,"%d",&a[i]);
		i++;
	}
	n = i;
	fclose(f);
}

int main() {
	int a[100], n;
//	nhapMang(a,n);
//	xuatFileTuMang(a,n,"test5_KTLT.out");
//	nhapFileVaoMang(a,n,"test5_KTLT.out");
//	xuatMang(a,n);
//	xuatFile2(a,n,"test5_2_KTLT.out");
	nhapFile2(a,n,"test5_2_KTLT.out");
	xuatMang(a,n);
	return 0;
}
