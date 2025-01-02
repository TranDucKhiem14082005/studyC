#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;

	struct node *next;
};

typedef struct node node;

node *makeNode (int x) {
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

//Them phan tu vao vi tri dau tien
void pushFront(node **head,int x) {
	node *newNode = makeNode(x);
	newNode->next = *head;
	*head = newNode;
}

void pushBack(node **head,int x) {
	
}

int main() {
	node *head = NULL;
	for(int i = 1; i <= 5; i++) {
		pushFront(&head,i);
	}
	duyet(head);
	
	return 0;
}
