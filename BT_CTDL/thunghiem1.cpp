#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* left;
	struct node* right;
}node;

node* makeNode(int data) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

node* insert(node* root, int value) {
	if(root == NULL) return makeNode(value);
	if(value < root->data) {
		root->left = insert(root->left,value);
	}else if( value > root->data) {
		root->right = insert(root->right, value);
	}
	return root;
}

void duyetCay(node* root) {
	if(root != NULL) {
		duyetCay(root->left);
		printf("%d ",root->data);
		duyetCay(root->right);
	}
}

int demSoNut(node* root) {
	if(root == NULL) return 0;
	int cnt = 0;
	if((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL)) {
		cnt = 1;
	}
	return 1 + demSoNut(root->left) + demSoNut(root->right);
}

int chieuCaoCuaCay(node* root) {
	if(root == NULL) return -1;
	int leftHeight = chieuCaoCuaCay(root->left);
	int rightHeight = chieuCaoCuaCay(root->right);
	return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

int main() {
	node* root = NULL;
	int n,value;
	printf("nhap so luong phan tu trong cay: "); scanf("%d",&n);
	for(int i = 0 ; i < n; i++) {
		printf("phan tu %d: ",i + 1);
		scanf("%d",&value);
		root = insert(root,value);
	} 
	printf("Cac phan tu trong cay duoc sap xep theo thu tu tang dan: ");
	duyetCay(root);
	int result = demSoNut(root);
	printf("\n%d ", result);
	
	int heightTree = chieuCaoCuaCay(root);
	printf("\nChieu cao cua cay la: %d",heightTree);
	
	return 0;
}
