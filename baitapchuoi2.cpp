#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//chuyen hoa thanh thuong
char*  to_strlwr(char c[]){
	for(int i = 0;i<strlen(c);i++){
		if(c[i] >= 'A' && c[i]<='Z'){
			c[i] += 32;
		}
	}
	return c;
}



int main(){
//	char c[1005];
//	gets(c);
//	to_strlwr(c);
//	printf("%s\n",c);
//	//dem cac ki tu trong sau
//	int cnt1 = 0,cnt2 = 0, cnt3 = 0;
//	for(int i = 0 ; i<strlen(c);i++){
//		if((c[i] >= 'A' && c[i] <='Z') || (c[i] >= 'a' && c[i] <= 'z'))
//			++cnt1;
//		else if(c[i] >= '0' && c[i] <= '9')
//			++cnt2;
//		else ++cnt3;
//	}
//	printf("%d %d %d\n",cnt1,cnt2,cnt3);

	//dem so luong cua cac ki tu co trong sau.
	
/*	char n[1005];
	scanf("%s",&n);
	/
	(1)
	a: 97 -> cnt 0
	b: 98 -> cnt 1
	c: 99 -> cnt 2
	...
	z: 122 --> cnt25
	
	muon luu vao mang cnt cua mot ki tu nao do: ap dung cong thuc cnt[c[i] - 97] ** nhin vao (1)
	
	/
	
	int cnt[26] = {0}; // dem tan suat cua 26 ki tu in thuong . tai sao lai 26 vi trong bang chu cai la 26 chu cai
	for(int i = 0; i< strlen(n);i++){
		cnt[n[i]-'a']++;
	}
	for(int i = 0 ; i<26;i++){
		if(cnt[i]!=0){
			printf("%c %d\n",(i+'a'),cnt[i]);
		}
	}

	*/
	/*
	// dem so so lan xuat hien cua ki tu trong bang mot chuoi gom co in thuong/hoa va hung ki tu dac biet khac
	char c[1005];
	gets(c);
	int cnt{256} = {0};
	for(int i = 0; i<strlen(n);i++){
		cnt(c[i])++;
	}
	for(int i = 0; i<256;i++){
		if(cnt[i] != 0){
			printf("%c %d\n",i,cnt[i])
		}
	}
	*/
	
	char c[1005];
	scanf("%s",&c);
	int cnt[26] = {0};
	for(int i = 0; i < strlen(c);i++){
		cnt[c[i]-'a']++;
	}
	
	for(int i = 0 ; i<strlen(c);i++){
		if(cnt[c[i] - 'a']){
			printf("%c %d\n",c[i],cnt[c[i]-'a']); // trong do c[i] la ca ki tu (dau tien ) , cnt[c[i] - 'a' la so lan xuat hien cua ki tu do
			cnt[c[i]-'a'] = 0;
		}
	}
	
	return 0;
}





