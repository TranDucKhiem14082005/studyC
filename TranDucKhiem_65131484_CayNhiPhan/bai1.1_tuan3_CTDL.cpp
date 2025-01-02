#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;


node* makeNode(int value) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}


node* insert(node* root, int value) {
    if (root == NULL) {
        return makeNode(value);  
    }

    if (value < root->data) {
        root->left = insert(root->left, value);  
    } else {
        root->right = insert(root->right, value); 
    }

    return root;
}


void inorder(node* root) {
    if (root != NULL) {
        inorder(root->left);  
        printf("%d ", root->data);  
        inorder(root->right);  
    }
}


int main() {
    node* root = NULL;

    
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    
    printf("Duyet cay theo In-order: ");
    inorder(root);  
    printf("\n");

    return 0;
}

