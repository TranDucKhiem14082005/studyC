#include <stdio.h>
#include <stdlib.h>

void readFromFile(const char* S, int a[], int *n) {
	FILE * f = fopen(S, "r");
	if(f == NULL) {
		printf("Khong the mo file!");
	}
	int i = 0;
	while(fscanf(f,"%d",&a[i]) != EOF) {
		i++;
	}
	*n = i;
	fclose(f);
}

void inMang(int a[], int n) {
	for(int i = 0 ; i < n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void selectionSort(int a[], int n) {
	for(int i = 0; i < n - 1; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

void insertSort(int a[], int n) {
	for(int i = 1; i < n; i++) {
		int key = a[i];
		int j = i - 1;
		while( j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}

void bubbleSort(int a[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main() {
	int a[100];
	int n;
	readFromFile("input.txt",a,&n);
	printf("Mang ban dau: ");
	inMang(a, n);
	selectionSort(a,n);
	printf("Mang su dung selectionSort: ");
	inMang(a, n);
	insertSort(a,n);
	printf("Mang su dung insertSort: ");
	inMang(a, n);
	bubbleSort(a,n);
	printf("Mang su dung bubbleSort: ");
	inMang(a, n);
	return 0;
}
