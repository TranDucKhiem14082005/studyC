#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    float data;
    struct node* left;
    struct node* right;
} node;


node* makeNode(float value) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}


node* insert(node* root, float value) {
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
        printf("%.2f ", root->data);  
        inorder(root->right);  
    }
}


int main() {
    node* root = NULL;

   
    root = insert(root, 50.5);
    root = insert(root, 30.3);
    root = insert(root, 70.7);
    root = insert(root, 20.2);
    root = insert(root, 40.4);
    root = insert(root, 60.6);
    root = insert(root, 80.8);

   
    printf("Duyet cay theo In-order: ");
    inorder(root);  
    printf("\n");

    return 0;
}

