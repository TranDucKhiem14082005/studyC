#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char data;
	struct node* next;
} node;

node* makeNode(char x) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

node* taoDanhSach(int n){
	node* head = NULL;
	node* current = NULL;
	for(int i = 0; i < n; i++){
		char value;
		printf("nhap ky tu thu %d: ",i+1);
		scanf(" %c", &value);
		node* newNode = makeNode(value);
		if(head == NULL){
			head = newNode;
		}else{
			current->next = newNode;
		}
		current = newNode;
	}
	return head;
}


int timKyTuACuoiCung(node* head) {
	int vitri = -1;
	int index = 0;
    node* current = head;
    while (current != NULL) {
    	index++;
        if (current->data  == 'A') {  
           vitri = index;     
        }
        current = current->next;  
    }
    return vitri; 
}
void duyet(node* head) {
	node* current = head;
	while(current != NULL){
		printf("%c ",current->data);
		current = current->next;
	}
}

int main() {
	int n;
	printf("Nhap so luong ki tu trong danh sach: ");
	scanf("%d",&n);
	node* head = taoDanhSach(n);
	duyet(head);
	printf("\n");
	int thuTu = timKyTuACuoiCung(head);
	printf("so luong ki tu A trong danh sach la: %d\n",thuTu);
	return 0;
}

