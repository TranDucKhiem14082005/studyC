#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;             
    struct Node* next;    
};


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


void insertNode(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;  
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next; 
        }
        temp->next = newNode;  
    }
}


int findFirstOdd(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data % 2 != 0) {
            return temp->data;  // 
        }
        temp = temp->next;
    }
    return -1; 
}

// Hàm in danh sách
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL; 

    
    insertNode(&head, 4);
    insertNode(&head, 8);
    insertNode(&head, 10);
    insertNode(&head, 7);  // S? l? d?u tiên
    insertNode(&head, 12);
    insertNode(&head, 9);

    
    printf("Danh sách các s? nguyên: ");
    printList(head);

    // Tìm và in s? l? d?u tiên
    int firstOdd = findFirstOdd(head);
    if (firstOdd != -1) {
        printf("S? l? d?u tiên trong danh sách: %d\n", firstOdd);
    } else {
        printf("Không có s? l? nào trong danh sách.\n");
    }

    // Gi?i phóng b? nh?
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

