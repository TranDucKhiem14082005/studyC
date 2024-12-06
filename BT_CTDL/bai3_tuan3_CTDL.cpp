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

node* insert(node* root, int value){
	if(root == NULL) {
		return makeNode(value);
	}
	if(value < root->data) {
		root->left = insert(root->left,value);
	}else{
		root->right = insert(root->right,value);
	}
	return root;
}

void duyetCay(node* root) {
	if(root == NULL) return;
	duyetCay(root->left);
	printf("%d ",root->data);
	duyetCay(root->right);
}

int countOneChildNodes(node* root) {
	if(root == NULL) return 0;
	int count = ((root->left == NULL && root->right != NULL) ||
	 (root->left != NULL && root->right == NULL)) ? 1 : 0;
	return count + countOneChildNodes(root->left) + countOneChildNodes(root->right);
}


int main(){
	node* intTree = NULL;
	int values[] = {50,30,20,10,60};
	for(int i = 0; i < 5; i++){
		intTree = insert(intTree,values[i]);
	}
	
	int result = countOneChildNodes(intTree);
	printf("So nut chi co 1 nhanh: %d ",result);
	
	return 0;
}
