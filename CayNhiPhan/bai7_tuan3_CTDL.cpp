#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	float data;
	struct node* left;
	struct node* right;
}node;

node* makeNode(float x) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

node* insert(node* root, float value) {
	if( root == NULL){
		return makeNode(value);
	}
	if(value < root->data) {
		root->left = insert(root->left,value);
	}else if(value > root->data) {
		root->right = insert(root->right,value);
	}
	return root;
}

float sumNodeNho(node* root, float value) {
	if(root == NULL) return 0;
	float sum = 0;
	if(root->data < value) {
		sum += root->data;
	}
	sum += sumNodeNho(root->left,value);
	sum += sumNodeNho(root->right,value);
	return sum;
}

void duyetCay(node* root) {
	if(root == NULL) return;
	duyetCay(root->left);
	printf("%.2f ",root->data);
	return duyetCay(root->right);
}

int main() {
	 node* floatTree = NULL;

 
    float values[] = {50.2, 30.9, 70.4, 20.6, 40.2, 60.6, 80.1};
    for (int i = 0; i < 7; i++) {
        floatTree = insert(floatTree, values[i]);
    }
	duyetCay(floatTree);
	int temp = 50.0;
	float result = sumNodeNho(floatTree,temp);
	printf("tong cac node co gia tri nho hon %.2f la: %.2f\n",temp,result);
	return 0;
}
