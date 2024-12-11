#include <stdio.h>
#include <limits.h>

#define MAX_CITIES 30
#define INF INT_MAX

int C[MAX_CITIES][MAX_CITIES]; // Ma tr?n chi phí
int visited[MAX_CITIES];        // M?ng dánh d?u các thành ph? dã tham
int n;                          // S? lu?ng thành ph?

// Hàm d?c d? li?u t? file
void read_input(char *filename) {
    FILE *file = fopen(filename, "r");
    fscanf(file, "%d", &n);  // Ð?c s? lu?ng thành ph?
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(file, "%d", &C[i][j]);  // Ð?c ma tr?n chi phí
        }
    }
    fclose(file);
}

// Hàm tìm hành trình tham lam
void find_tour(char *output_filename) {
    int total_cost = 0;
    int current_city = 0; // B?t d?u t? thành ph? 1 (index 0)
    visited[current_city] = 1; // Ðánh d?u thành ph? dã tham

    FILE *output_file = fopen(output_filename, "w");
    
    fprintf(output_file, "TP1-> "); // In thành ph? 1 là di?m xu?t phát

    for (int i = 1; i < n; i++) {
        int next_city = -1;
        int min_cost = INF;

        // Tìm thành ph? chua tham có chi phí th?p nh?t
        for (int j = 0; j < n; j++) {
            if (!visited[j] && C[current_city][j] < min_cost) {
                next_city = j;
                min_cost = C[current_city][j];
            }
        }

        if (next_city == -1) {
            fprintf(output_file, "-1\n");  // N?u không tìm th?y du?ng di h?p l?
            fclose(output_file);
            return;
        }

        // C?p nh?t chi phí và tr?ng thái
        total_cost += min_cost;
        visited[next_city] = 1; // Ðánh d?u thành ph? dã tham
        current_city = next_city; // Di chuy?n d?n thành ph? m?i
        fprintf(output_file, " TP%d->", current_city + 1); // In thành ph? di d?n
    }

    // Cu?i cùng, quay l?i thành ph? 1
    total_cost += C[current_city][0];
    fprintf(output_file, "TP1\n");
    fprintf(output_file, "Total cost: %d\n", total_cost); // In chi phí t?ng
    fclose(output_file);
}



int main() {
    int a[maxc][maxc];
    
    // Ð?c d? li?u t? file
    readFromFile("dulich.inp", a, &n);
    
    // In ma tr?n chi phí
    inMang(a, n);

    // Kh?i t?o m?ng visited v?i giá tr? 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Tìm hành trình và luu k?t qu? vào file 'dulich_out'
    find_tour("dulich_out");

    return 0;
}



