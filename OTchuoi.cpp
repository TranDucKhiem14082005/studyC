#include <stdio.h>
#include <string.h>

int is_lower(char c){
	if(c >='a' && c<='z'){
		return 1;
	}
	return 0;
}

int is_upper(char c){
	if(c>='A' && c<='Z'){
		return 1;
	}
	return 0;
}

int is_alpha(char c){
	if((c>='a' && c<='z') || (c>='A' && c <='Z')){
		return 1;
	}
	return 0;
}

int is_digit(char c){
	if(c>='0' && c<='9'){
		return 1;
	}
	return 0;
}

char to_lower(char c){
	if(c >='A' && c <='Z'){
		c +=32;
	}
	return c;
}

char to_upper(char c){
	if(c >= 'A' && c <='Z'){
		c -= 32;
	}
	return c;
}

int my_strlen(char c[]){
	int cnt = 0;
	while(c[cnt] !='\0'){
		++cnt;
	}
	return cnt;
}

char* my_strlwr(char c[]){
	for(int i=0;i<my_strlen(c);i++){
		if(c[i] >='A' && c[i]<='Z'){
			c[i] += 32;
		}
	}
	return c;
}


char* my_strupr(char c[]){
	for(int i=0;i<my_strlen(c);i++){
		if(c[i]>='a' && c[i] <='z'){
			c[i] -= 32;
		}
	}
	return c;
}

char* strrev(char c[]){
	int l = 0, r = my_strlen(c) - 1;
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
	
int my_strcmp(char a[], char b[]){
	int n1=my_strlen(a);
	int n2=my_strlen(b);
	for(int i=0;i<min(n1,n2);i++){
		if(a[i] != b[i]){
			if(a[i]>b[i]) return 1;
			else return -1;
		}
	}	
	if(n1 == n2) return 0;
	else if(n1<n2) return -1;
	else return 1;
}

int strcmp(char a[],char b[]){
	int n1=my_strlen(a);
	int n2=my_strlen(b);
	my_strlwr(a);
	my_strlwr(b);
	for(int i=0;i<min(n1,n2);i++){
		if(a[i] != b[i]){
			if(a[i]>b[i]) return 1;
			else return -1;
		}
	}	
	if(n1 == n2) return 0;
	else if(n1<n2) return -1;
	else return 1;		
}


int main(){
	char c[100];
	gets(c);
	printf("%s",strrev(c));
}

















