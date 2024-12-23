#include <stdio.h>
#include <stdlib.h>

void readFile(const char *s, int a[], int *n) {
	FILE* f=fopen(s,"r");
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

void selectionSort(int a[], int n) {
	for(int i = 0; i < n-1; i++) {
		int min = i;
		for(int j= i + 1; j < n; j++) {
			if(a[j] < a[min]){
				min = j;
			}
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}
void selectionSort2(int a[], int n) {
	for(int i = 0; i < n-1; i++) {
		int max = i;
		for(int j= i + 1; j < n; j++) {
			if(a[j] > a[max]){
				max = j;
			}
		}
		int temp = a[i];
		a[i] = a[max];
		a[max] = temp;
	}
}

void insertSort(int a[], int n) {
	for(int i = 1; i < n; i++){
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key) {
			a[j+1] = a[j];
		}
		a[j+1] = key;
	}
}
void insertSort2(int a[], int n) {
	for(int i = 1; i < n; i++){
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] < key) {
			a[j+1] = a[j];
		}
		a[j+1] = key;
	}
}

void bubble(int a[], int n) {
	for(int i = 0 ; i < n; i++) {
		for(int j = 0; j < n; j++){
			if(a[j+1] > a[j]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j] = temp;
			}
		}
	}
}
void bubble2(int a[], int n) {
	for(int i = 0 ; i < n; i++) {
		for(int j = 0; j < n; j++){
			if(a[j+1] < a[j]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j] = temp;
			}
		}
	}
}

// Heap Sort

//Tang dan
void heapify1(int a[], int n, int i) {
	int largest = i;
	int left = 2*i+1;
	int right = 2*i+2;
	
	if(left < n && a[left] > a[largest]) {
		largest = left;
	}
	if(right < n && a[right] > a[largest]) {
		largest = right;
	}
	
	if(largest != i) {
		int temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;
		
		heapify1(a,n,largest);
	}
}


void heapSort1(int a[], int n)  {
	for(int i = n/2 - 1; i >=0; i--) {
		heapify1(a,n,i);
	}
	
	for(int i = n-1; i>=0;i--){
		int temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		heapify1(a,i,0);
	}
}

//giam dan
void heapify2(int a[], int n, int i) {
	int smallest = i;
	int left = 2*i+1;
	int right = 2*i+2;
	
	if(left < n && a[left] < a[smallest]) {
		smallest = left;
	}
	if(right < n && a[right] < a[smallest]) {
		smallest = right;
	}
	
	if(smallest != i) {
		int temp = a[i];
		a[i] = a[smallest];
		a[smallest] = temp;
		
		heapify2(a,n,smallest);
	}
}

void heapSort2(int a[], int n)  {
	for(int i = n/2 - 1; i >=0; i--) {
		heapify2(a,n,i);
	}
	
	for(int i = n-1; i>0;i--){
		int temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		heapify2(a,i,0);
	}
}


int main() {
	int a[100];
	int n;
	readFile("input.txt",a,&n);
	printf("Mang ban dau la: ");
	inMang(a,n);
	printf("Mang su dung selectionSort de sap xep tang dan: ");
	selectionSort(a,n);
	inMang(a,n);
	printf("Mang su dung insertSort de sap xep tang dan: ");
	insertSort(a,n);
	inMang(a,n);
	printf("Mang su dung bubble de sap xep tang dan: ");
	bubble(a,n);
	inMang(a,n);
	
	printf("Mang su dung selectionSort2 de sap xep tang dan: ");
	selectionSort2(a,n);
	inMang(a,n);
	printf("Mang su dung insertSort2 de sap xep tang dan: ");
	insertSort2(a,n);
	inMang(a,n);
	printf("Mang su dung bubble2 de sap xep tang dan: ");
	bubble2(a,n);
	inMang(a,n);
	
	
	printf("Mang su dung heapSort1 de sap xep tang dan: ");
	heapSort1(a,n);
	inMang(a,n);
	printf("Mang su dung heapSort2 de sap xep tang dan: ");
	heapSort2(a,n);
	inMang(a,n);
	return 0;
}
