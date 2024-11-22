#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc < 4 || argc > 31) {
        printf("Nhap tu 3 den 30 so thuc.\n");
        return 1;
    }

    double sum = 0.0;

 
    for (int i = 1; i < argc; i++) {
        double num = atof(argv[i]);
        if (num > 0) {
            sum += num;
        }
    }
    printf("Sum: %.2f\n", sum);

    return 0;
}

