#include <stdio.h>
#include <stdlib.h>

void readFile(const char *S, int *n, int *TongSoTien, int menhgia[]) {
	FILE * f = fopen(S,"r");
	if(f == NULL) {
		printf("Khong the mo file1!");
		return;
	}
	fscanf(f,"%d" "%d",n, TongSoTien);
	for(int i = 0; i < *n; i++){
		fscanf(f,"%d",&menhgia[i]);
	}
	fclose(f);
}

void writeFile(const char *S,int menhgia[], int counts[],int n) {
	FILE * f = fopen(S,"w");
	if(f == NULL) {
		printf("Khong the mo file2!");
		return;
	}
	for(int i =0;i<n;i++){
		if(counts[i]>0){
			fprintf(f,"Menh gia %d: %d to",menhgia[i],counts[i]);
		}
	}
	fclose(f);
}

void selectionSort(int a[], int n) {
	for(int i = 0; i < n - 1; i++){
		int max = i;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[max]){
				max = j;
			}
		}
		int temp = a[max];
		a[max] = a[i];
		a[i] = temp;
	}
}

int rutTien(int n, int S, int menhgia[], int counts[]) {
	selectionSort(menhgia,n);
	//Ban dau khong dung so to tien nao ca
	for(int i = 0; i < n; i++){
		counts[i] = 0;
	}	
	
	for(int i = 0; i < n; i++){
		if(S >= menhgia[i]) {
			counts[i] = S / menhgia[i];
			S -=counts[i] * menhgia[i];
		}
	}
	return (S==0);
}


int main() {
	int n, S;                 
    int denominations[30];     
    int counts[30];             

  
    readFile("ATM.inp", &n, &S, denominations);

   
    if (rutTien(n, S, denominations, counts)) {
        
        writeFile("ATM.out", denominations, counts, n);
    } else {
        FILE *file = fopen("ATM.out", "w");
        if (file != NULL) {
            fprintf(file, "Khong the rut dung so tien.\n");
            fclose(file);
        }
    }
	return 0;
}
