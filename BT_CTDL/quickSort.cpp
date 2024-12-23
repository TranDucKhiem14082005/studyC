#include <stdio.h>

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

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high) {
    int pivot = a[high]; // dung de phan chia ra 2 nhanh, mot nhanh nho hon thi ben trai, con nhanh lon hon thi ben phai.
    int i = low - 1;     
    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) { 
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]); 
    return i + 1;
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high); 
        quicksort(a, low, pi - 1);        
        quicksort(a, pi + 1, high);      
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[100];
	int n;
	readFile("input.txt",a,&n);
	printf("Mang ban dau la: ");
	inMang(a,n);

    quicksort(a, 0, n - 1);

    printf("Mang sau khi sap xep: ");
    inMang(a, n);

    return 0;
}

