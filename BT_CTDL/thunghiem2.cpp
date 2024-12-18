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

void duyetCay(node* root) {
	if(root != NULL) {
		duyetCay(root->left);
		printf("%d ",root->data);
		duyetCay(root->right);
	}
}

node* insert(node* root, int value) {
	if(root == NULL) return makeNode(value);
	if(value < root->data) {
		root->left = insert(root->left,value);
	} else if ( value > root->data) {
		root->right = insert(root->right,value);
	}
	return root;
}

// tim so 
node* findNode(node* root, int value) {
	if(root == 0 || root->data == value) {
		return root;
	}
	if(value < root->data) {
		return findNode(root->left,value);
	} else if(value > root->data){
		return findNode(root->right,value);
	}
}

// Muc cua mot nut 

int mucNode(node* root, int value, int level) {
	if(root == NULL) return -1;
	if(root->data == value) {
		return level;
	}
	int left = mucNode(root->left,value,level + 1);
	if(left != -1) {
		return left;
	}
	return mucNode(root->right,value,level+1);
}

// dem so nut la

int countLeafNode(node* root) {
	if(root == NULL) return 0;
	if(root->left == NULL && root->right == NULL) return 1;
	return countLeafNode(root->left) + countLeafNode(root->right);
}

//xoa nut va to chuc lai cay
Node* deleteNode(Node* root, int value) {
    if (root == NULL) {
        return root; // C�y r?ng
    }

    // T�m n�t c?n x�a
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Tru?ng h?p n�t c?n x�a t�m th?y

        // Tru?ng h?p 1: N�t c� m?t ho?c kh�ng c� con
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        // Tru?ng h?p 2: N�t c� c? hai con
        // T�m n�t k? ti?p (smallest in right subtree)
        Node* temp = findMin(root->right);

        // Thay gi� tr? n�t c?n x�a b?ng gi� tr? c?a n�t k? ti?p
        root->data = temp->data;

        // X�a n�t k? ti?p trong c�y con ph?i
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
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
	printf("Nhap gia tri ma ban muon tim: "); scanf("%d",&value);
	
	node* foundNode = findNode(root, value);
    if (foundNode != NULL) {
        printf("Nut co gia tri %d t�m thay!\n", value);

        // T�nh m?c c?a n�t
        int level = mucNode(root, value, 0);
        printf("Muc cua nut co gia tri %d l�: %d\n", value, level);

        // T�nh s? n�t l� trong c�y
        int leafCount = countLeafNode(root);
        printf("So nut la trong c�y l�: %d\n", leafCount);
    } else {
        printf("N�t c� gi� tr? %d kh�ng t�m thay!\n", value);
    }

	return 0;
}
