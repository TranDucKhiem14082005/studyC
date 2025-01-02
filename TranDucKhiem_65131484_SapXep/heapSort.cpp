#include <stdio.h>
#include <stdlib.h>

void readFile(const char *s, int a[], int *n) {
	FILE* f=fopen(s,"r");
	if(f == NULL) {
		printf("khong the mo file");
		return;
	}
	int i =0;
	while(fscanf(f,"%d",&a[i]) != EOF){
		i++;
	}
	*n = i;
//	for(int i = 0 ; i < *n; i++){
//		fscanf(f,"%d",&a[i]);
//	}
	fclose(f);
}

void inMang(int a[], int n) {
	for(int i =0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void heapify(int a[], int n, int i) {
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

void heapsort(int a[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--) { // n / 2 - 1: la nut cha o cuoi cung
    //luc nay minh se cho chay tu nut cha cuoi len goc sau do minh sap xep lai cay
        heapify(a, n, i);
    }

    
    for (int i = n - 1; i > 0; i--) {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0); //sap xep lai mang giam dan
    }
}


int main() {
    int a[100] ;
    int n;
	readFile("input.txt",a,&n);
    printf("Mang ban dau: ");
    inMang(a, n);

    heapsort(a, n);

    printf("Mang sau khi sap xep: ");
    inMang(a, n);

    return 0;
}

