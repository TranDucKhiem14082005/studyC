#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char maHocPhan[10];
    char tenHocPhan[50];
    int soTinChi;
} HocPhan;


void ghiHocPhanVaoFile(int n) {
    FILE *file = fopen("HocPhan.txt", "w");
    if (file == NULL) {
        printf("khong the mo file HocPhan.txt\n");
        return;
    }

    HocPhan hp;
    printf("hay nhap thong tin %d khoa hoc:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Course %d:\n", i + 1);
        printf("Course ID: ");
        scanf("%s", hp.maHocPhan);
        printf("Course Name: ");
        getchar(); 
        fgets(hp.tenHocPhan, sizeof(hp.tenHocPhan), stdin);
        hp.tenHocPhan[strcspn(hp.tenHocPhan, "\n")] = '\0'; 
        printf("Credits: ");
        scanf("%d", &hp.soTinChi);

      
        fprintf(file, "%s\n%s\n%d\n", hp.maHocPhan, hp.tenHocPhan, hp.soTinChi);
    }

    fclose(file); 
   
}


int docHocPhanTuFile(HocPhan hocPhan[], int *n) {
    FILE *file = fopen("HocPhan.txt", "r"); 
    if (file == NULL) {
        printf("khong the mo file  HocPhan.txt\n");
        return 0;
    }

    *n = 0;
    while (fscanf(file, "%s", hocPhan[*n].maHocPhan) != EOF) {
        fgetc(file); 
        fgets(hocPhan[*n].tenHocPhan, sizeof(hocPhan[*n].tenHocPhan), file);
        hocPhan[*n].tenHocPhan[strcspn(hocPhan[*n].tenHocPhan, "\n")] = '\0'; 
        fscanf(file, "%d", &hocPhan[*n].soTinChi);
        fgetc(file); 
        (*n)++;
    }

    fclose(file); 
    return 1;
}


void xuatDanhSachHocPhan(HocPhan hocPhan[], int n) {
    printf("\nCourse list:\n");
    for (int i = 0; i < n; i++) {
        printf("Course %d:\n", i + 1);
        printf("  Course ID: %s\n", hocPhan[i].maHocPhan);
        printf("  Course Name: %s\n", hocPhan[i].tenHocPhan);
        printf("  Credits: %d\n", hocPhan[i].soTinChi);
    }
}

int main() {
    HocPhan hocPhan[50];
    int n;


    printf("nhap so khoa hoc (2 <= n < 50): ");
    scanf("%d", &n);
    if (n < 2 || n >= 50) {
        printf("Invalid number of courses.\n");
        return 1;
    }
    ghiHocPhanVaoFile(n);


    if (docHocPhanTuFile(hocPhan, &n)) {

        xuatDanhSachHocPhan(hocPhan, n);
    }

    return 0;
}

