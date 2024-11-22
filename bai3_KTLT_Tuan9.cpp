#include <stdio.h>
#include <stdlib.h>


int readArrayFromFile(const char *filename, int *arr, int *n, int *x) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Không the mo file.\n");
        return 0;
    }
    fscanf(file, "%d %d", n, x);
    
   
    for (int i = 0; i < *n; i++) {
        fscanf(file, "%d", &arr[i]);
    }
    
    fclose(file);
    return 1;
}


void printArray(const int *arr, int n) {
    printf("Dãy s?: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int isDivisor(int a, int x) {
    return (a > 0 && x % a == 0);
}

//De quy
int countDivisorsRecursive(const int *arr, int n, int x) {
    if (n == 0) return 0;
    return isDivisor(arr[n - 1], x) + countDivisorsRecursive(arr, n - 1, x);
}

//Vong lap 
int countDivisorsIterative(const int *arr, int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isDivisor(arr[i], x)) {
            count++;
        }
    }
    return count;
}


void writeResultToFile(const char *filename, int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Không the mo file de ghi.\n");
        return;
    }
    
    fprintf(file, "So luong so nguyen duong la uoc so cua x: %d\n", count);
    fclose(file);
}

int main() {
    const char *inputFile = "input.txt";
    const char *outputFile = "output.txt";
    int n, x;
    int arr[50];


    if (!readArrayFromFile(inputFile, arr, &n, &x)) {
        return 1;
    }


    printArray(arr, n);


    int countRecursive = countDivisorsRecursive(arr, n, x);
    printf("So luong so nguyên duong là uoc so cua x (de quy): %d\n", countRecursive);

   
    int countIterative = countDivisorsIterative(arr, n, x);
    printf("So luong so nguyên duong là uoc so cua x (Vong lap): %d\n", countIterative);

    
    writeResultToFile(outputFile, countRecursive);

    return 0;
}

