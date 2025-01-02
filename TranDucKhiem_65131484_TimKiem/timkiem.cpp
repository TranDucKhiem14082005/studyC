#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int timKiemTuanTu(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return i; 
    }
    return -1; 
}


int timKiemNhiPhan(int a[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x) return mid; 
        if (a[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1; 
}

int timkiemnhiphan(int a[], int n, int x){
	int left = 0, right = n-1;
	while(left<=right) {
		int mid = (left + right) / 2;
		if(a[mid] == x) return mid;
		if(a[mid] < x) left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}



typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* hashTable[SIZE];


int hashFunction(int key) {
    return key % SIZE;
}


void insert(int key) {
    int index = hashFunction(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = key;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}


int search(int key) {
    int index = hashFunction(key);
    Node* current = hashTable[index];
    while (current != NULL) {
        if (current->data == key) return 1; 
        current = current->next;
    }
    return 0;
}


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

