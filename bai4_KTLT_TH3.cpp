#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int result[MAX]; 
int count = 0;  

void backtrack(int n, int start, int index) {
    
    if (n == 0) {
        FILE *output = fopen("Lab4_3.out", "a");
        for (int i = 0; i < index; i++) {
            fprintf(output, "%d", result[i]);
            if (i < index - 1) fprintf(output, " + ");
        }
        fprintf(output, "\n");
        fclose(output);
        count++;
        return;
    }

    
    for (int i = start; i <= n; i++) {
        result[index] = i;             
        backtrack(n - i, i, index + 1); 
    }
}

int main() {
    int n;

    
    printf("Nhap so nguyên duong n (0 < n < 20): ");
    scanf("%d", &n);

   
    if (n <= 0 || n >= 20) {
        printf("n khong hop le. Hay nhap lai.\n");
        return 1;
    }

    
    FILE *output = fopen("Lab4_3.out", "w");
    fclose(output);

    
    backtrack(n, 1, 0);

    
    if (count == 0) {
        output = fopen("Lab4_3.out", "w");
        fprintf(output, "-1\n");
        fclose(output);
    }

    return 0;
}

