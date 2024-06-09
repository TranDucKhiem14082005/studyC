#include<stdio.h>
#include<string.h>

void cap_up(char &s){
	if (s >= 'a' && s <= 'z')
		s -= 32;
}

void cap_down(char *s){
	for (int i = 1; i < strlen(s) - 1; i++){
		if (s[i] >= 'A' && s[i] <= 'Z')
			if (s[i - 1] != ' ')
				s[i] += 32;
	}
}

void cap(char *s){
	cap_down(s);
	cap_up(s[0]);
	for (int i = 1; i <= strlen(s); i++){
		if (s[i - 1] == ' ')
			cap_up(s[i]);
	}
}

void chuan_hoa(char *s){
	// Xoa khoang trang thua
	while(s[0] == ' '){
		strcpy(&s[0], &s[1]);
	}
	while(s[strlen(s) - 1] == ' '){
		s[strlen(s) - 1] = '\0';
	}
	for (int i = 0; i < strlen(s) - 1; i++){
		while(s[i] == ' ' && s[i+1] == ' '){
			strcpy(&s[i], &s[i+1]);
		}
	}
	cap(s);
}

int main(){
	char s[100];
	fgets(s, 99, stdin);
	chuan_hoa(s);
	puts(s);
}
