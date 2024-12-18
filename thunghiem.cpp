#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node {
	char data[21];
	struct node* next;
}node;

node* makeNode(const char* data) {
	node* newNode = (node*)malloc(sizeof(node));
	strncpy(newNode->data, data, 20);
	newNode->data[20] = '\0';
	newNode->next = NULL;
	return newNode;
}

void pushBack(node** head,const char* data) {
	node* newNode = makeNode(data);
	if(*head == NULL){
		*head = newNode;
		return;
	}
	node* temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

//Ham tim vi tri cua phan tu có chuoi ngan nhat

int findShort(node* head) {
	int vt = 0;
	int minlength = 21;
	int find = -1;
	node* temp = head;
	while(temp != NULL) {
		vt++;
		int length = strlen(temp->data);
		if(length < minlength) {
			minlength = length;
			find = vt;
		}
		temp = temp->next;
	}
	return find;
}

//In ra phan tu co do dai chuoi dai nhat

char* findLong(node* head) {
	if(head == NULL) return NULL;
	node* longNode = head;
	node* temp = head;
	while(temp != NULL) {	
		if(strlen(temp->data) > strlen(longNode->data)){
			longNode = temp;
		}
		temp = temp->next;
	}
	return longNode->data;
}

int main() {
	
	node* head = NULL;
	pushBack(&head, "Adadas");
	pushBack(&head, "AA");
	pushBack(&head, "adavFG");
	pushBack(&head, "bfsafbbADF");
	
	int result = findShort(head);
	if(result != -1){
		printf("vi tri cua pt co chuoi ngan nhat la: %d\n",result);
	}else{
		printf("Danh sach rong");
	}
	
	char* result2 = findLong(head);
	printf("phan tu co chuoi dai nhat la: %s",result2);
	
	return 0;
}
