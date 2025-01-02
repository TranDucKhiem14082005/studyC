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
	if(root->data > value) {
		root->left = insert(root->left,value);
	}else {
		root->right = insert(root->right,value);
	}
	return root;
}

node* findMin(node* root) {
	while(root->left != NULL) {
		root = root->left;
	}
	return root;
}

node* deleteNode(node* root, int value) {
	if(root == NULL) return NULL;
	if(value < root->data) {
		root->left = deleteNode(root->left, value);
	}else if(value > root->data) {
		root->right = deleteNode(root->right,value);
	}else {
		if(root->left == NULL) {
			node* temp = root->right;
			free(root);
			return temp;
		}else if(root->right == NULL){
			node* temp = root->left;
			free(root);
			return temp;
		}
		node* temp = findMin(root->right);
		root->data = temp->data; //dua gtri nho nhat thanh gtri tri cua nut can xoa
		root->right = deleteNode(root->right,temp->data); // xoa nut phai co gtri thay the
	}
	return root;
}

void duyetCay(node *root) {
	if(root != NULL) {
		duyetCay(root->left);
		printf("%d ",root->data);
		duyetCay(root->right);
	}
}

int main() {
	node* intTree = NULL;
	int values[] = {50,30,20,10,60};
	for(int i = 0; i < 5; i++){
		intTree = insert(intTree,values[i]);
	}
	printf("Cay ban dau: ");
	duyetCay(intTree);
	printf("\n");
	int nodeDelete = 30;
	intTree = deleteNode(intTree, nodeDelete);
	printf("Cay sau khi xoa nut %d: ",nodeDelete);
	duyetCay(intTree);
	printf("\n");
	return 0;
}
