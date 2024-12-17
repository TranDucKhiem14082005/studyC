#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}node;

node* makeNode(int x) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

int count(node* head) {
	int cnt = 0;
	while(head!=NULL){
		++cnt;
		head = head->next;
	}
	return cnt;
}

void pushFront(node** head, int x){
	node* newNode = makeNode(x);
	newNode->next = *head;
	*head = newNode;
}

void pushEnd(node** head, int x) {
	node* newNode = makeNode(x);
	node* temp = *head;
	if(*head == NULL){
		*head = newNode;
		return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

void insert(node** head, int k, int x) {
	int n = count(*head);
	node* newNode = makeNode(x);
	if(k < 1 || k > n + 1) return;
	if(k == 1) {
		pushFront(head,x);
		return;
	}
	node* temp = *head;
	for(int i = 1; i < k - 2; i++) {
		temp = temp->next;
	}
	
	newNode->next = temp->next;
	temp->next = newNode;
	
}

void popFront(node** head) {
	if(*head == NULL) return;
	node* temp = *head;
	(*head) = (*head)->next;
	free(temp);
}


void popBack(node** head) {
	if(*head == NULL) {
		return;
	}
	node* temp = *head;
	if(temp->next == NULL){
		head = NULL;
		free(temp);
		return;
	}
	while(temp->next->next == NULL) {
		temp = temp->next;
	}
	
	node* last = temp->next;
	temp->next = NULL;
	free(last);
	
}

void erase(node** head, int k) {
	int n = count(*head);
	if( k <  1 || k > n) {
		return;
	}
	if(k == 1){
		popFront(head);
		return;
	}
	else {
		node* temp = *head;
		for(int i = 1; i < k - 2; i++) {
			temp = temp->next;
		}
		node* KNode = temp->next;
		temp->next = KNode->next;
		free(KNode);
	}
}

void duyetCay(node* head){
	while(head != NULL){
		printf("%d ",head->data);
		head = head->next;
	}
}

int main() {
	node* head = NULL;
	for(int i = 1; i <= 5; i++){
		pushEnd(&head,i);
	}
	duyetCay(head);
	popFront(&head);
	printf("\n");
	duyetCay(head);
	return 0;
}
