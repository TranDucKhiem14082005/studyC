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

int demKyTuA(node* head){
	node* current = head;
	int count = 0;
	while(current != NULL){
		if(current->data == 'A'){
			count++;
		}
		current = current->next;
	}
	return count;
}

void duyet(node* head) {
	node* current = head;
	while(current != NULL){
		printf("%c ",current->data);
		current = current->next;
	}
}

int main(){
	int n;
	printf("Nhap so luong ki tu trong danh sach: ");
	scanf("%d",&n);
	node* head = taoDanhSach(n);
	duyet(head);
	printf("\n");
	int soKyTuA = demKyTuA(head);
	printf("so luong ki tu A trong danh sach la: %d\n",soKyTuA);
	return 0;
}
