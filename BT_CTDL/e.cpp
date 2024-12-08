
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
// Hàm tìm nút nh? nh?t trong cây con bên ph?i
node* findMin(node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Hàm xóa m?t nút trong cây nh? phân tìm ki?m
node* deleteNode(node* root, int value) {
    if (root == NULL) return NULL;

    // Duy?t tìm nút c?n xóa
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Ðã tìm th?y nút c?n xóa
        if (root->left == NULL) {
            node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            node* temp = root->left;
            free(root);
            return temp;
        }

        // Nút có 2 con: Tìm nút nh? nh?t ? cây con ph?i d? thay th?
        node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorderTraversal(node* root) {
    if (root == NULL) return; // N?u cây r?ng, không làm gì c?

    // G?i d? quy d? duy?t cây con bên trái
    inorderTraversal(root->left);

    // In giá tr? c?a nút g?c
    printf("%d ", root->data);

    // G?i d? quy d? duy?t cây con bên ph?i
    inorderTraversal(root->right);
}


// Hàm chính
int main() {
    node* intTree = NULL;

    // T?o cây v?i các giá tr?
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int i = 0; i < 7; i++) {
        intTree = insert(intTree, values[i]);
    }

    printf("Cây ban d?u (In-order): ");
    inorderTraversal(intTree);
    printf("\n");

    // Xóa m?t nút b?t k?
    int valueToDelete = 30;
    intTree = deleteNode(intTree, valueToDelete);

    printf("Cây sau khi xóa nút %d (In-order): ", valueToDelete);
    inorderTraversal(intTree);
    printf("\n");

    return 0;
}

