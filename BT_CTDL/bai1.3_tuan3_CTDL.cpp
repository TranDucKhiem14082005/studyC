#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    char data;
    struct node* left;
    struct node* right;
} node;


node* makeNode(char value) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}


node* insert(node* root, char value) {
    if (root == NULL) {
        return makeNode(value);  
    }

    if (value < root->data) {
        root->left = insert(root->left, value);  
        root->right = insert(root->right, value);
    }

    return root;
}


void inorder(node* root) {
    if (root != NULL) {
        inorder(root->left); 
        printf("%c ", root->data);  
        inorder(root->right);  
    }
}


int main() {
   node *root = NULL;
	int n, value;
	printf("Nhap so luong phan tu cua cay: ");
    scanf("%d", &n);
	for (int i = 0; i < n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &value);
        root = insert(root, value);
    }


    printf("Duyet cay theo In-order: ");
    inorder(root);  
    printf("\n");

    return 0;
}

