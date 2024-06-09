#include<stdio.h>
#include<string.h>


void countCharacters(const char *str) {
	int uppercase[26] = {0}; //mang dem tan suat xuat hien cua cac ki tu in hoa
	int lowercase[26] = {0}; // mang dem tan suat xuat hien cua cac ki tu in thuong
	int digits[10] = {0};     //  mang dem tan suat xuat hien cua cac ki tu 0 - 9
	int specials[128] = {0};  //  mang dem tan suat xuat hien cua cac ki tu dac biet
	
	int len = strlen(str);
	for (int i = 0; i < len; ++i) {
		char ch = str[i];
		if (ch >= 'A' && ch <= 'Z')
			uppercase[ch - 'A']++;
		else if (ch >= 'a' && ch <= 'z')
			lowercase[ch - 'a']++;
		else if (ch >= '0' && ch <= '9')
			digits[ch - '0']++;
		else
			specials[ch]++;
	}
	
	printf("Cac ky tu hoa (A-Z):\n");
	for (int i = 0; i < 26; ++i) {
		if (uppercase[i] > 0)
			printf("%c: %d\n", 'A' + i, uppercase[i]);
	}
	
	printf("\nCac ky tu thuong (a-z):\n");
	for (int i = 0; i < 26; ++i) {
		if (lowercase[i] > 0)
			printf("%c: %d\n", 'a' + i, lowercase[i]);
	}
	
	printf("\nCac chu so (0-9):\n");
	for (int i = 0; i < 10; ++i) {
		if (digits[i] > 0)
			printf("%d: %d\n", i, digits[i]);
	}
	
	printf("\nCac ky tu dac biet:\n");
	for (int i = 0; i < 128; ++i) {
		if (specials[i] > 0 && i != ' ')
			printf("%c: %d\n", i, specials[i]);
	}
}

int main() {
	char s[100];
	
	printf("Nhap vao mot chuoi: ");
	fgets(s, 99, stdin);
	
	if (s[strlen(s) - 1] == '\n')
		s[strlen(s) - 1] = '\0';
	
	countCharacters(s);
}
