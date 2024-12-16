#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int timKiemTuanTu(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return i; // Tr? v? v? tr� t�m th?y
    }
    return -1; // Kh�ng t�m th?y
}


int timKiemNhiPhan(int a[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x) return mid; // Tr? v? v? tr� t�m th?y
        if (a[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // Kh�ng t�m th?y
}


// C?u tr�c danh s�ch li�n k?t cho b?ng bam
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Kh?i t?o b?ng bam
Node* hashTable[SIZE];

// H�m bam
int hashFunction(int key) {
    return key % SIZE;
}

// Ch�n ph?n t? v�o b?ng bam
void insertHash(int key) {
    int index = hashFunction(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = key;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

// T�m ki?m ph?n t? trong b?ng bam
int searchHash(int key) {
    int index = hashFunction(key);
    Node* current = hashTable[index];
    while (current != NULL) {
        if (current->data == key) return 1; // T�m th?y
        current = current->next;
    }
    return 0; // Kh�ng t�m th?y
}

// H�m in b?ng bam
void printHashTable() {
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: ", i);
        Node* current = hashTable[i];
        while (current != NULL) {
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
    }
}

