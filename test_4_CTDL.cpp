#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

typedef struct node node;

node *makeNode(int x) {
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

int dem(node *head) {
	int cnt = 0;
	while(head != NULL) {
		++cnt;
		head = head->next;
	}
	return cnt;
}

void pushFront(node **head,int x) {
	node *newNode = makeNode(x);
	newNode->next = *head;
	*head = newNode;
}

void pushBack(node **head, int x){
	node *newNode = makeNode(x);
	node *temp = *head;
	if(*head == NULL){
		*head = newNode;
		return;
	}
	while(temp->next != NULL) {
		temp = temp->next;
	}
	newNode->next = NULL;
	temp->next = newNode;
}

void insert(node **head, int k, int x) {
	node *temp = *head;
	node *newNode = makeNode(x);
	int n = dem(*head);
	if(k < 1 || k > n + 1) return;
	if(k == 1) {
		pushFront(head,x);
	}
	for(int i = 1; i <= k-2;i++) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

void popFront(node **head) {
	node *temp = *head;
	if(*head == NULL) return;
	(*head) = (*head)->next;
	free(temp);
}

void popBack(node **head) {
	node *temp = *head;
	if(*head == NULL) return;
	if(temp->next == NULL) {
		*head = NULL;
		free(temp);
		return;
	}
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	node *last = temp->next;
	temp->next = NULL;
	free(last);
}

void xoaGiua(node **head, int k){
	int n = dem(*head);
	if(k < 1 || k > n + 1){
		return;
	}
	if(k == 1){
		popFront(head);
		return;
	}
	else{
		node *temp = *head;
		for(int i = 1 ; i <= k-2 ;i++) {
			temp = temp->next;
		}
		node *kNode = temp->next;
		temp->next = kNode->next;
		free(kNode);
		return;
	}
}

int main() {
	node *head = NULL;
	for(int i = 1 ; i<= 10; i++){
//		pushFrontf(&head,i);
		pushBack(&head,i);
	}
	duyet(head);
	printf("\n");
	int k; printf("nhap vi tri can chen: "); scanf("%d",&k);
	int x; printf("nhap gia tri can chen: "); scanf("%d",&x);
	insert(&head,k,x);
	duyet(head);
	printf("\n");
	printf("xoa vi tri dau\n");
	popFront(&head);
	duyet(head);
	printf("\n");
	printf("xoa vi cuoi\n");
	popBack(&head);
	duyet(head);
	printf("\n");
	printf("xoa vi giua\n");
	printf("nhap vi tri muon xoa: "); scanf("%d",&k);
	xoaGiua(&head,k);
	duyet(head);
	return 0;
}
