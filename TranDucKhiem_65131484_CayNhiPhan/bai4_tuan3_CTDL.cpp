#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* left;
	struct node* right;
}node;

node* makeNode(int x){
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

node* insert(node* root,int value) {
	if(root == NULL){
		return makeNode(value);
	}
	if(value < root->data) {
		root->left = insert(root->left,value);
	}else {
		root->right = insert(root->right,value);
	}
	return root;
}

int chieuCao(node* root) {
	if(root == NULL) return 0;
	int leftHeight = chieuCao(root->left);
	int rightHeight = chieuCao(root->right);
	return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}


int main() {
	node* intTree = NULL;
	int values[] = {50,30,20,10,60};
	for(int i = 0; i < 5; i++){
		intTree = insert(intTree,values[i]);
	}
	
	int result = chieuCao(intTree);
	printf("Chieu cao cua cay la: %d",result);
	
	return 0;
}
