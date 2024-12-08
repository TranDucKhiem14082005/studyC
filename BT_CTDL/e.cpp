
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

typedef struct node node;

node *makeNode (int x) {
	node *newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->left = NULL;
	newNode->right = NULL;	
	return newNode;
}

node *insert(node *head, int x){
	node *newNode = makeNode(x);
	if(head == NULL) return newNode;
	if ((head)->data > x) {
		head->left = insert((head)->left, x);
	}else
		head->right = insert((head)->right,x);
	return head;
}
// H�m t�m n�t nh? nh?t trong c�y con b�n ph?i
node* findMin(node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// H�m x�a m?t n�t trong c�y nh? ph�n t�m ki?m
node* deleteNode(node* root, int value) {
    if (root == NULL) return NULL;

    // Duy?t t�m n�t c?n x�a
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // �� t�m th?y n�t c?n x�a
        if (root->left == NULL) {
            node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            node* temp = root->left;
            free(root);
            return temp;
        }

        // N�t c� 2 con: T�m n�t nh? nh?t ? c�y con ph?i d? thay th?
        node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorderTraversal(node* root) {
    if (root == NULL) return; // N?u c�y r?ng, kh�ng l�m g� c?

    // G?i d? quy d? duy?t c�y con b�n tr�i
    inorderTraversal(root->left);

    // In gi� tr? c?a n�t g?c
    printf("%d ", root->data);

    // G?i d? quy d? duy?t c�y con b�n ph?i
    inorderTraversal(root->right);
}


// H�m ch�nh
int main() {
    node* intTree = NULL;

    // T?o c�y v?i c�c gi� tr?
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int i = 0; i < 7; i++) {
        intTree = insert(intTree, values[i]);
    }

    printf("C�y ban d?u (In-order): ");
    inorderTraversal(intTree);
    printf("\n");

    // X�a m?t n�t b?t k?
    int valueToDelete = 30;
    intTree = deleteNode(intTree, valueToDelete);

    printf("C�y sau khi x�a n�t %d (In-order): ", valueToDelete);
    inorderTraversal(intTree);
    printf("\n");

    return 0;
}

