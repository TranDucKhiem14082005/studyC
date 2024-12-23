#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_length 20

typedef struct node {
    char data[max_length + 1];
    struct node* next;        
} node;


node* makeNode(char x[]) {
    node* newNode = (node*)malloc(sizeof(node));
    strcpy(newNode->data, x);  
    newNode->next = NULL;
    return newNode;
}

node* taoDanhSachKyTu(int n) {
    node* head = NULL;
    node* current = NULL;
    for (int i = 0; i < n; i++) {
        char value[max_length + 1];
        printf("Nhap chuoi ky tu thu %d : ", i + 1);
        scanf("%s", value);  
        node* newNode = makeNode(value);
        if (head == NULL) {
            head = newNode;  
        } else {
            current->next = newNode; 
        }
        current = newNode;  
    }
    return head;
}

void timChuoiDaiNhat(node* head) {
    if (head == NULL) {
        printf("Danh sach lien ket rong.\n");
        return;
    }

    node* current = head;
    char* chuoiDaiNhat = head->data;
    while (current != NULL) {
        if (strlen(current->data) > strlen(chuoiDaiNhat)) {
            chuoiDaiNhat = current->data; 
        }
        current = current->next;
    }

    printf("Chuoi ky tu dai nhat: %s\n", chuoiDaiNhat);
}


void duyet(node* head) {
    while (head != NULL) {
        printf("%s -> ", head->data);  
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    int n;
    printf("Nhap so luong chuoi ky tu trong danh sach: ");
    scanf("%d", &n);


    node* head = taoDanhSachKyTu(n);

    duyet(head);

    timChuoiDaiNhat(head);

    return 0;
}

