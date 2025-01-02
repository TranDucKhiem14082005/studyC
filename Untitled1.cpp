#include <stdio.h>

void selection(int a[], int n) {
	for(int i = 0; i < n- 1; i++){
		int min = i;
		for(int j = i+1; j < n; j++) {
			if(a[j] < a[min]){
				min = j;
			}
			
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

void insert(int a[], int n) {
	for(int i = 1; i < n; i++) {
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = key;
	}
}

void bubble(int a[], int n) {
	for(int i = n - 1; i > 0; i--){
		for(int j = 0; j < i;j++) {
			if(a[j] > a[i]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}



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

void heapSort1(int a[], int n) {
	for(int i = n/2-1;i>=0;i--) {
		heapify1(a,n,i);
	}
	for(int i = n -1; i >= 0; i--) {
		int temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		heapify1(a,i,0);
	}
}

void heapify2(int a[],int n, int i) {
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

void heapSort2(int a[], int n) {
	for(int i = n/2-1;i>=0;i--){
		heapify2(a,n,i);
	}
	for(int i = n-1; i >= 0; i--) {
		int temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		heapify2(a,i,0);
	}
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int a[], int low, int high) {
	int pivot = a[high];
	int i = low - 1;
	for(int j = low; j < high; j++) {
		if(a[j] <pivot) {
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[high]);
	return i+1;
}

void quickSort(int a[], int low, int high) {
	if(low < high) {
		int pi = partition(a,low,high);
		quickSort(a,low,pi-1);
		quickSort(a,pi+1,high);
	}
}

void inMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main() {
	int n = 5;
	int a[n] = {2, 5 ,1 ,4,3};
	printf("mang truoc khi sap xep la: ");
	inMang(a,n);
	printf("Mang sau khi sap xep la: ");
	bubble(a,n);
	inMang(a,n);
	return 0;
}
