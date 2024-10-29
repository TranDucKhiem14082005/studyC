#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
};

node*makeNode(int x) {
	node *newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void duyet(node *head) {
	while(head != NULL) {
		printf("%d ",head->data);
		head = head->next;
	}
}

int count(node *head) {
	int cnt = 0;
	while(head != NULL) {
		++cnt;
		head=head->next;
	}
	return cnt;
}

//them vao dau danh sach lien ket

void pushFront(node **head, int x) {
	node *newNode = makeNode(x);
	newNode->next = *head;
	*head = newNode;
}

//Them vao cuoi danh sach lien ket

void pushBack(node **head, int x) {
	node *newNode = makeNode(x);
	node *temp = *head;
	if(*head == NULL) {
		*head = newNode;
		return;
	}
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}

void insert(node **head, int k, int x) {
	node *newNode = makeNode(x);
	int n = count(*head);
	if(k < 1 || k > n+1) return;
	if(k == 1) {
		pushFront(head,x);
		return;
	}
	node *temp = *head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

int main() {
	node *head = NULL;
	for(int i = 1; i<=5; i++){
		pushFront(&head,i);
	}
	duyet(head);
	printf("\n%d",count(head));
//	printf("\n");
//	for(int i = 1; i<=5; i++){
//		pushBack(&head,i);
//	}
//	duyet(head);
//	printf("\n%d",count(head));
	return 0;
}
