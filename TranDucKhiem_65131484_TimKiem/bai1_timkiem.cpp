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

//Tim pt duong dau tien nen duyet tu 0 -> n, con cuoi cung thi nguoc lai.
//So am cung v
int findFirstPositive(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            return a[i];  
        }
    }
    return 0; 
}

int TimSoDuongDau(int a[], int n) {
	int left = 0;
	int right = n - 1;
	int result = -1;
	
	while(left <= right ) {
		int mid = left + (right - left) / 2;
		if(a[mid] > 0) {
			result = a[mid];
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return result;
}


int main() {
	int a[100];
	int n;
	readFile("input.txt",a,&n);
	printf("Mang ban dau la: ");
	inMang(a,n);
	int result = TimSoDuongDau(a,n);
	printf("%d ",result);
}
