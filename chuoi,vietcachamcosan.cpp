#include <stdio.h>
#include <string.h>

//kiem tra co phai la ki tu in thuong
int is_lower(char c){
	if(c>='a' && c<='z')
		return 1;
	return 0;
}

//kiem tra co phai la ki tu in hoa
int is_upper(char c){
	if(c>='A' && c<='Z')
		return 1;
	return 0;
}


//kiem tra co phai la ki tu so
int is_digit(char c){
	if(c>='0' && c<='9'){
		return 1;
	}
	return 0;
}

//chuyen hoa sang thuong
char to_lower(char c){
	if(c>='A' && c <='Z'){
		c += 32;
	}
	return c;
}

//chuyen chu thuong sang hoa
char to_upper(char c){
	if(c>='a' && c<='z'){
		c -= 32;
	}
	return c;
}

//do dai cua chuoi
int my_strlen(char c[]){
	int cnt = 0;
	while(c[cnt] !='\0'){
		cnt++;
	}
	return cnt;
}

//chuyen chuoi thanh thuong het
char* my_strlwr(char c[]){
	for(int i=0;i<my_strlen(c);i++){
		if(c[i]>='A' && c[i] <='Z'){
			c[i]+=32;
		}
	}
	return c;
}

//chuyen chuoi thanh Hoa het
char* my_strupr(char c[]){
	for(int i=0;i<my_strlen(c);i++){
		if(c[i]>='a'&&c[i]<='z'){
			c[i] -= 32;
		}
	}
	return c;
}

//dao nguoc chuoi
char* my_strrev(char c[]){
	int l = 0, r = my_strlen(c)-1;
	while(l<r){
		char temp = c[l];
		c[l] = c[r];
		c[r] = temp;
		++l;--r;
	}
	return c;
}

int min(int a,int b){
	return a<b?a : b;
}
//so sanh 2 cho phan biet chu hoa chu thuong
int strcmp(char c[],char d[]){
	int n1= my_strlen(c);
	int n2= my_strlen(d);
	for(int i=0;i<min(n1,n2);i++){
		if(c[i] != d[i]){
			if(c[i] > d[i]) return 1;
			else return -1;
		}
	}
	if(n1 == n2) return 0;
	else if(n1 < n2) return -1;
	else return 1;
	 
}
//so sanh 2 chuoi khong phan biet chu hoa chu thuong
int strcmpi(char c[],char d[]){
	int n1=my_strlen(c);
	int n2=my_strlen(d);
	my_strlwr(c);
	my_strlwr(d);
	for(int i=0;i<min(n1,n2);i++){
		if(c[i] != d[i]){
			if(c[i] > d[i]) return 1;
			else return -1;
		}
	}
	if(n1==n2) return 0;
	else if(n1<n2) return -1;
	else return 1;
}

int main(){
	char c[100], d[100];
	gets(c);
	printf("%s",my_strrev(c));





}
