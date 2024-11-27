#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    float data;
    struct Node* next;
} Node;


Node* createNode(float value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


Node* taoDanhSach(int n) {
    Node* head = NULL;      
    Node* current = NULL;   
    for (int i = 0; i < n; i++) {
        float value;
        printf("nhap gia tri cho pt %d: ", i + 1);
        scanf("%f", &value);

        Node* newNode = createNode(value);  

        if (head == NULL) {
            head = newNode;
        } else {
             current->next = newNode;
        } 
        current = newNode;
    }

    return head;
}


float tongCacsSoAm(Node* head) {
    float sum = 0;
    Node* current = head;
    while (current != NULL) {
        if (current->data < 0) {
            sum += current->data;
        }
        current = current->next;
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap so luong phan tu trong danh sách: ");
    scanf("%d", &n);

  
    Node* head = taoDanhSach(n);

    
    float sum = tongCacsSoAm(head);
    printf("Tong cac so am: %.2f\n", sum);

    return 0;
}

