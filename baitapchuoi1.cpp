#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//cac ham thuong dung
	//int islower(char c)
	//int isupper(char c)
	//int isalpha(char c)
	//int isdigit(char c)
	//
	//char tolower(char c)
	//char toupper(char c)
	//
	//int strlen(char c) : tra ve chieu dai cua mot sau
	//int strcmp(char a[], b[]): so sanh 2 sau theo thu tu tu` diem
		//	a<b:-1
		//	a=b:0
		//	a>b:1
		//	char* strrev(char c[]): dao nguoc 1 chuoi ** no thay doi luon sau ban dau
	//	char* strlwr(char c[]): tat ca cac ki tu ve dang in thuong
	//	char* strupr(char c[]): tat ca cac ki tu ve dang in hoa
	//  char* strcpy(char c[], char d[]): coppy sau d vao sau c. ** sau code cuoi thi sau^ c se bi xoa het va thay hoan toan bang sau d
	//	char* strcat(char c[], char d[]): noi 2 sau lai voi nhau.
	//	int atoi(char c[]): tra ve so int ban dau
	//	int atoll(char a[]): tra ve so long long ban dau
int main(){
	
	char c[100],d[100];
	gets(c);
	printf("%s ",strrev(c));
	return 0;
}
