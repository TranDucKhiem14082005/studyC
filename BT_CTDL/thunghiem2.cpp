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
        return root; // Cây r?ng
    }

    // Tìm nút c?n xóa
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Tru?ng h?p nút c?n xóa tìm th?y

        // Tru?ng h?p 1: Nút có m?t ho?c không có con
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

        // Tru?ng h?p 2: Nút có c? hai con
        // Tìm nút k? ti?p (smallest in right subtree)
        Node* temp = findMin(root->right);

        // Thay giá tr? nút c?n xóa b?ng giá tr? c?a nút k? ti?p
        root->data = temp->data;

        // Xóa nút k? ti?p trong cây con ph?i
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
        printf("Nut co gia tri %d tìm thay!\n", value);

        // Tính m?c c?a nút
        int level = mucNode(root, value, 0);
        printf("Muc cua nut co gia tri %d là: %d\n", value, level);

        // Tính s? nút lá trong cây
        int leafCount = countLeafNode(root);
        printf("So nut la trong cây là: %d\n", leafCount);
    } else {
        printf("Nút có giá tr? %d không tìm thay!\n", value);
    }

	return 0;
}
