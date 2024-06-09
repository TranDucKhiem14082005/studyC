#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// XAU PANGRAM: tuc la xau ma chua tat ca cac ki tu tu` a->z. mot hay nhieu lan dieu duoc
// Xau Pangram 1
int pangram(char c[]){
	
	int cnt[26] = {0};
	for(int i = 0 ; i < strlen(c); i++){
		cnt[c[i] - 'a'] = 1;
	}
	for(int i = 0 ; i < 26; i++){
		if(cnt[i] == 0) return 0;
	}
	return 1;
}

//Xau Pangram 2: khong phan biet in hoa 
char* to_strlwr(char c[]){
	for(int i = 0 ; i < strlen(c); i++){
		if(c[i] >='A' && c[i] <= 'Z'){
			c[i] += 32;
		}
	}
	return c;
}

int pangram2(char c[]){
	to_strlwr(c);
	int cnt[26] = {0};
	for(int i = 0; i< strlen(c);i++){
		cnt[c[i] - 'a'] = 1;
	}
	for(int i = 0 ; i < 26; i++){
		if(cnt[i] == 0) return 0;
	}
	return 1;
}

int main(){
	//xau pangram 1
/*	char c1[1000], c2[1000];
	scanf("%s",&c1);
	if(pangram(c1)) printf("YES\n");
	else printf("NO\n");*/
	
	// xau pangram 2
	
	char c[1000];
	scanf("%s",&c);
	if(pangram2(c)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
