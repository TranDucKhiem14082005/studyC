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

node* insert(node* root,int value) {
	if(root == NULL) {
		return makeNode(value);
	}
	if(value < root->data) {
		root->left = insert(root->left,value);
	}else {
		root->right = insert(root->right,value);
	}
	return root;
}

void duyetCay(node* root) {
	if(root == NULL) return;
	duyetCay(root->left);
	printf("%d ",root->data);
	return duyetCay(root->right);
}

int demNodeChan(node* root) {
	if(root == NULL) return 0;
	int count = (root->data % 2 == 0) ? 1 : 0;
	return count + demNodeChan(root->left) + demNodeChan(root->right);
}

int main() {
	node* intTree = NULL;
	int values[] = {50,30,20,10,41};
	for(int i = 0; i < 5; i++){
		intTree = insert(intTree,values[i]);
	}
	printf("Cay ban dau: ");
	duyetCay(intTree);
	printf("\n");
	int result = demNodeChan(intTree);
	printf("so node co gtri chan trong cay la: %d",result);
	return 0;
}
