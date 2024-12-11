#include <stdio.h>
#include <limits.h>

#define MAX_CITIES 30
#define INF INT_MAX

int C[MAX_CITIES][MAX_CITIES]; // Ma tr?n chi ph�
int visited[MAX_CITIES];        // M?ng d�nh d?u c�c th�nh ph? d� tham
int n;                          // S? lu?ng th�nh ph?

// H�m d?c d? li?u t? file
void read_input(char *filename) {
    FILE *file = fopen(filename, "r");
    fscanf(file, "%d", &n);  // �?c s? lu?ng th�nh ph?
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(file, "%d", &C[i][j]);  // �?c ma tr?n chi ph�
        }
    }
    fclose(file);
}

// H�m t�m h�nh tr�nh tham lam
void find_tour(char *output_filename) {
    int total_cost = 0;
    int current_city = 0; // B?t d?u t? th�nh ph? 1 (index 0)
    visited[current_city] = 1; // ��nh d?u th�nh ph? d� tham

    FILE *output_file = fopen(output_filename, "w");
    
    fprintf(output_file, "TP1-> "); // In th�nh ph? 1 l� di?m xu?t ph�t

    for (int i = 1; i < n; i++) {
        int next_city = -1;
        int min_cost = INF;

        // T�m th�nh ph? chua tham c� chi ph� th?p nh?t
        for (int j = 0; j < n; j++) {
            if (!visited[j] && C[current_city][j] < min_cost) {
                next_city = j;
                min_cost = C[current_city][j];
            }
        }

        if (next_city == -1) {
            fprintf(output_file, "-1\n");  // N?u kh�ng t�m th?y du?ng di h?p l?
            fclose(output_file);
            return;
        }

        // C?p nh?t chi ph� v� tr?ng th�i
        total_cost += min_cost;
        visited[next_city] = 1; // ��nh d?u th�nh ph? d� tham
        current_city = next_city; // Di chuy?n d?n th�nh ph? m?i
        fprintf(output_file, " TP%d->", current_city + 1); // In th�nh ph? di d?n
    }

    // Cu?i c�ng, quay l?i th�nh ph? 1
    total_cost += C[current_city][0];
    fprintf(output_file, "TP1\n");
    fprintf(output_file, "Total cost: %d\n", total_cost); // In chi ph� t?ng
    fclose(output_file);
}



int main() {
    int a[maxc][maxc];
    
    // �?c d? li?u t? file
    readFromFile("dulich.inp", a, &n);
    
    // In ma tr?n chi ph�
    inMang(a, n);

    // Kh?i t?o m?ng visited v?i gi� tr? 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // T�m h�nh tr�nh v� luu k?t qu? v�o file 'dulich_out'
    find_tour("dulich_out");

    return 0;
}



