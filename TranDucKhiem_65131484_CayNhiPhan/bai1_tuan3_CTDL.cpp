#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

typedef struct node node;

node *makeNode (int x) {
	node *newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->left = NULL;
	newNode->right = NULL;	
	return newNode;
}

node *insert(node *head, int x){
	node *newNode = makeNode(x);
	if(head == NULL) return newNode;
	if ((head)->data > x) {
		head->left = insert((head)->left, x);
	}else
		head->right = insert((head)->right,x);
	return head;
}

void duyetCay(node *head) {
	if(head != NULL) {
		duyetCay(head->left);
		printf("%d ",head->data);
		duyetCay(head->right);
	}
}

int main() {
	node *head = NULL;
	head = insert(head,50);
	insert(head,30);
	insert(head,40);
	insert(head,60);
	duyetCay(head);
	return 0;
}
