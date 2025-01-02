#include <stdio.h>
#include <stdlib.h>

void readFromFile(const char* S, int a[], int *n) {
	FILE* f = fopen(S,"r");
	if(f == NULL) {
		printf("Khong the mo file!");
		return;
	}
	int i = 0;
	while(fscanf(f,"%d",&a[i]) != EOF) {
		i++;
	}
	*n = i;
	fclose(f);
}

void inMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
}

void selection(int a[], int n) {
	for(int i = 0; i < n-1; i++) {
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min] && a[min] % 2 != 0){
				min = j;
			}
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}



int main() {
	int a[100];
	int n;
	readFromFile("input.txt",a,&n);
	inMang(a,n);
	selection(a,n);
	inMang(a,n);
	return 0;
}
