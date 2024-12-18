#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char data;
	struct node* next;
}node;

node* makeNode(int x) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void duyetCay(node* head) {
	while(head != NULL){
		printf("%c ", head->data);
		head = head->next;
	}
}

void pushBack(node** head, char data) {
	node* newNode = makeNode(data);
	if(*head == NULL){
		*head = newNode;
		return;
	}
	node* temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->next = NULL;
}

//Dem so ki tu A
int count(node* head) {
	int cnt = 0;
	node* temp = head;
	while(temp != NULL){
		if(temp->data == 'A'){
			++cnt;
		}
		temp = temp->next;
	}
	return cnt;
}

//Tim vi tri cuoi cung co chua ki tu A

int findA(node* head) {
	int vt = 0;
	int find = -1;
	node* temp = head;
	while(temp != NULL) {
		vt++;
		if(temp->data == 'A'){
			find = vt;
		}
		temp = temp->next;
	}
	return find;
}

int main() {
	node* head = NULL;
	pushBack(&head, 'A');
	pushBack(&head, 'A');
	pushBack(&head, 'a');
	pushBack(&head, 'b');
	int result = count(head);
	printf("So ki tu A trong danh sach lien ket la: %d",result);	
	int result2 = findA(head);
	printf("\nThu tu cua phan tu cuoi cung mang ky tu 'A' la: %d",result2);		
	return 0;
}
