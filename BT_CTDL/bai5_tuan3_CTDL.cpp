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

int findLevel(node* root, int value, int level) {
	if(root == NULL) return -1;
	if(root->data == value) return level;
	
	int leftLevel = findLevel(root->left, value, level + 1);
	if(leftLevel != -1) return leftLevel;
	return findLevel(root->right, value, level + 1);
}

int soNutLa(node* root) {
	if(root == NULL) return 0;
	if(root->left == NULL && root->right == NULL) return 1;
	return soNutLa(root->left) + soNutLa(root->right);
}

int main() {
	node* intTree = NULL;
	int n;
	printf("Nhap so luong phan tu trong cay: ");
	scanf("%d",&n);
	int values[n];
	for(int i = 0; i < n; i++) {
		scanf("%d",&values[i]);
	}
	for(int i = 0; i < n; i++){
		intTree = insert(intTree,values[i]);
	}
	
	int target;
	printf("Nhap so muon tim kiem: ");
	scanf("%d",&target);
	int level = findLevel(intTree, target, 1);
	int result = soNutLa(intTree);
	printf("Muc cua gia tri %d: %d\n",target,level);
	printf("so la cua cay con: %d\n",result);
	
	return 0;
}
