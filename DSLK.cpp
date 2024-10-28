#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node {
	int data;
	struct node *next;
};

typedef struct node node;

node* makeNode(int x) {
	node *newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

int size(node *head){
   int cnt = 0;
   while(head != NULL){
      ++cnt;
      head = head->next;
   }
   return cnt;
}

void duyet(node *head) {
	while(head != NULL) {
		printf("%d ",head->data);
		head = head->next;
	}
}

int count(node *head) {
	int cnt = 0;
	while(head !=NULL) {
		++cnt;
		head = head->next;
	}
	return cnt;
}

//Them vao dau danh sach lien ket
void pushFront(node **head, int x) {
	node *newNode = makeNode(x);
	newNode->next = *head;
	*head = newNode;
}

//Them vao cuoi danh sach lien ket
void pushBack(node **head,int x) {
	node *temp = *head;
	node *newNode = makeNode(x);
	if(*head == NULL) {
		*head = newNode;
		return;
	}
	while(temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = newNode;
}

void insert(node **head,int k, int x) {
	int n = size(*head);
	if(k<1 || k > n+1) return;
	if(k == 1) {
		pushFront(head,x);
		return;
	}
	node *temp = *head;
	for(int i = 1; i <= k -2; i++) {
		temp = temp->next;
	}
	//temp: k-1
	node *newNode = makeNode(x);
	newNode->next = temp->next;
	temp->next = newNode;
}


int main() {
	node *head = NULL;
//	for(int i = 1; i <= 5;i++){
//		pushBack(&head,i);
//	}
//	duyet(head);
//	printf("\n%d",count(head));	
	while(1){
		printf("--------------------\n");
		printf("1. Them vao dau\n");
		printf("2. Them vao cuoi\n");
		printf("3. Them vao giua\n");
		printf("4. Duyet\n");
		printf("0. Thoat\n");
		printf("--------------------\n");
		int luachon;
		printf("nhap lua chon: ");
		scanf("%d",&luachon);
		if(luachon == 1) {
			int x;
			printf("nhap x: ");
			scanf("%d",&x);
			pushFront(&head,x);
		}
		else if(luachon == 2) {
			int x;
			printf("nhap x: ");
			scanf("%d",&x);
			pushBack(&head,x);
		}
		else if(luachon == 3) {
			int x;
			printf("nhap x: ");
			scanf("%d",&x);
			int k;
			printf("nhap vi tri chen: ");
			scanf("%d",&k);
			insert(&head,k,x);
		}
		else if(luachon == 4){
			duyet(head);
		}
		else {
			break;
		}
	}
	return 0;
}
