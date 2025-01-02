#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;              
    struct Node* next;     
} Node;


Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Node* taoDanhSach(int n) {
    Node* head = NULL;
    Node* current = NULL;

    for (int i = 0; i < n; i++) {
        int value;
        printf("nhap gia tri cho pt  %d: ", i + 1);
        scanf("%d", &value);

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

int timSoLeDauTien(Node* head) {
    Node* current = head;
    while (current != NULL) {
        if (current->data % 2 != 0) {  
            return current->data;     
        }
        current = current->next;  
    }
    return -1; 
}

int main() {
    int n;
    printf("Nhap so luong phan tu trong danh sách: ");
    scanf("%d", &n);

    
    Node* head = taoDanhSach(n);

    
    int result = timSoLeDauTien(head);
    if (result != -1) {
        printf("So le dau tien trong danh sach la: %d\n", result);
    } else {
        printf("Khong co so le nao trong danh sach\n");
    }

    return 0;
}

