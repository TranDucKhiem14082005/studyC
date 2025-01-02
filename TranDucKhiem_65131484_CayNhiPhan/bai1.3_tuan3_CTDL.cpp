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
    node* root = NULL;

    
    root = insert(root, 'F');
    root = insert(root, 'B');
    root = insert(root, 'G');
    root = insert(root, 'A');
    root = insert(root, 'D');
    root = insert(root, 'I');
    root = insert(root, 'H');


    printf("Duyet cay theo In-order: ");
    inorder(root);  
    printf("\n");

    return 0;
}

