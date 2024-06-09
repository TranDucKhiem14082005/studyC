#include <stdio.h>
#include <string.h>

char* my_strrev(char c[]){
	int l = 0, r = strlen(c) - 1;
	while(l<r){
		char temp = c[l];
		c[l] = c[r];
		c[r] = temp;
		++l;--r;
	}
	return c;
}

int main(){
	char a[100];
	gets(a);
	printf("%s",my_strrev(a));
	return 0;
}
