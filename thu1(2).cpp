#include <stdio.h>
#include <string.h>

void chuan_hoa(char *s){
	while(s[0] == ' '){
		strcpy(&s[0],&s[1]);
	}
	while(s[strlen(s)-1] == ' '){
		s[strlen(s) - 1] = '\0';
	}
	for(int i = 0 ;i<strlen(s)-1;i++){
		while(s[i] == ' ' && s[i+1] == ' '){
			strcpy(&s[i],&s[i+1]);
		}
	}
}

int dem(char s[]){
	int cnt = 0;
	for(int i=0;i<strlen(s);i++){
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			cnt++;
		}
	}
	return cnt;
}

void intu(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i] != ' '){
			printf("%c",s[i]);
		}else
			printf("\n");
	}
}

void dodai(char s[]){
	int start = 0, end = 0, temp = 0, res = 0, dodaitu = 0;
	for(int i=0; i<=strlen(s);i++){
		if(i>0&&s[i-1] == ' '){
			temp = i;
		}
		if(s[i]  == ' ' || s[i] == '\0'){
		
			dodaitu = i - temp;
			if(dodaitu > res) {
				res = dodaitu;
				end = i-1;
				start = temp;
			}
		}
	}
	for(int i=start; i<=end;i++){
		printf("%c",s[i]);
	}
	printf("\n");
	printf("%d",res);
}

int main(){
	char s[100];
	gets(s);
	puts(s);
	printf("do dai cua chuoi la: %d\n",strlen(s));
	int soluong = dem(s);
	printf("so luong chu cai trong chuoi la: %d\n",soluong);
	chuan_hoa(s);
	intu(s);
	printf("\n");
	dodai(s);
	return 0;
}
