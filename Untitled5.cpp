#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	float data;
	struct node* next;
}node;

node* makeNode(float x) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void pushBack(node** head,float x) {
	node* newNode = makeNode(x);
	if(*head == NULL) {
		*head = newNode;
		return;
	}
	node* temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

float tongDuong(node* head) {
	float sum = 0;
	while(head != NULL) {
		if(head->data > 0) {
			sum += head->data;
		}
		head = head->next;
	}
	return sum;
}

float tongAm(node* head) {
	float sum = 0;
	while(head !=NULL) {
		if(head->data < 0) {
			sum += head->data;
		}
		head = head->next;
	}
	return sum;
}

float finMin(node* head) {
	float min = -1;
	while(head != NULL){
		if(head->data > 0 && (min == -1 || head->data < min)){
			min = head->data;
		}
		head= head->next;
	}
	return min;
}

float finMax(node* head) {
	float max = -10000;
	int co = 0;
	while(head != NULL) {
		if(head->data < 0 && (co == 0 || head->data > max)) {
			max = head->data;
			co = 1;
		}
		head = head->next;
	}
	if(!co) return 0;
	return max;
}

int leDau(node* head) {
	while(head != NULL){
		if(head->data % 2 != 0){
			return head->data;
		}
		head = head->next;
	}
	return head->data;
}

int chanCuoi(node* head) {
	int ptcuoi = -1;
	while(head != NULL){
		if(head->data % 2 == 0){
			ptcuoi = head->data;
		}
		head = head->data;
	}
	return ptcuoi;
}

void duyetCay(node* head) {
	while(head != NULL) {
		printf("%.2f -> ",head->data);
		head = head->next;
	}
}

int main() {
	node* head = NULL;
	for(int i = 1; i <= 5; i++) {
		pushBack(&head,i);
	}
	duyetCay(head);
	float min = finMin(head);
	if(min!=-1){
		printf("so duong nho nhat trong danh sach: %.2f\n",min);
	}
	float max = finMax(head);
	printf("%.2f\n",max);
	float result1 =tongDuong(head);
	printf("Tong cac so duong trong danh sach lien ket la: %.2f\n",result1);
	float result2 =tongAm(head);
	printf("Tong cac so duong trong danh sach lien ket la: %.2f\n",result2);
	printf("phan tu chan cuoi cung la: %.2f",chanCuoi(head));
	return 0;
}
