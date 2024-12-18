#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* left;
	struct node* right;
}node;

node* makeNode(int x) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

node* insert(node* root, int value) {
	if(root == NULL) return makeNode(value);
	if(value < root->data){
		root->left = insert(root->left,value);
	} else if(value > root->data) {
		root->right = insert(root->right, value);
	}
	return root;
}

void duyetCay(node* root) {
	duyetCay(root->left);
	printf("%d ",root->data);
	duyetCay(root->right);
}

double sumLessThan(node* root, double value) {
	int sum = 0;
	if(root == NULL) return 0;
	if(root->data < value) {
		sum += root->data;
		sum += sumLessThan(root->left,value);
		sum += sumLessThan(root->right,value);
	} else {
		sum += sumLessThan(root->left,value);
	}
	return sum;
}

int main() {
	return 0;
}
