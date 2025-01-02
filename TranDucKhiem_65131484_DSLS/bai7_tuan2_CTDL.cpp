#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
} node;

node* makeNode(int x) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

node* taoDanhSach(int n) {
	node* head = NULL;
	node* current = NULL;
	for(int i = 0; i < n; i++){
		int value;
		printf("nhap gia tri cua phan tu %d: ",i+1);
		scanf("%d",&value);
		node* newNode = makeNode(value);
		if(head == NULL){
			head = newNode;
		}else {
			current->next = newNode;
		}
		current = newNode;
	}
	return head;
}

int timSoChanCuoiCung(node* head) {
	int soChanCuoiCung = -1;
    node* current = head;
    while (current != NULL) {
        if (current->data % 2 == 0) {  
           soChanCuoiCung = current->data;     
        }
        current = current->next;  
    }
    return soChanCuoiCung; 
}

int main() {
	int n;
    printf("Nhap so luong phan tu trong danh sách: ");
    scanf("%d", &n);

    
    node* head = taoDanhSach(n);

    
    int result = timSoChanCuoiCung(head);
    if (result != -1) {
        printf("So chan cuoi cung trong danh sach la: %d\n", result);
    } else {
        printf("Khong co so chan nao trong danh sach\n");
    }

	return 0;
}
