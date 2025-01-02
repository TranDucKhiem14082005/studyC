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
	int n, value;
	printf("Nhap so luong phan tu cua cay: ");
    scanf("%d", &n);
	for (int i = 0; i < n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &value);
        head = insert(head, value);
    }
	duyetCay(head);
	return 0;
}
