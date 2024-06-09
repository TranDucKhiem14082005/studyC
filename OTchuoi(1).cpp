#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
	char c[1005];
//	gets(c);
	//chuyen cac ki thu thanh in thuong
//	for(int i=0;i<strlen(c);i++){
//		if(c[i] >='A' && c[i] <='Z'){
//			c[i] += 32;
//		}
//	}
//	printf("%s\n",c);
//	//dem so luong chu cai, chu so , ki tu dac biet trong sau
//	int cnt1 = 0, cnt2 =0,cnt3 = 0;
//	for(int i=0;i<strlen(c);i++){
////		if((c[i] >='A' && c[i] <='Z') || (c[i]>='a' && c[i] <='z')){
////			++cnt1;
////		}
////		else if(c[i] >= '0' && c[i] <='9'){
////			++cnt2;
////		} else ++cnt3;
//		if(isalpha(c[i])) ++cnt1;
//		else if(isdigit(c[i])) ++cnt2;
//	}
//	printf("%d %d %d",cnt1,cnt2,strlen(c)-cnt1-cnt2);
//	
	
	//dem so lan xuat hien o trong sau
	scanf("%s",c);
	int cnt[26] = {0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i] -'a']++;
	}
	for(int i=0;i<26;i++){
		if(cnt[i]!=0){
			printf("%c %d\n",(i+'a'),cnt[i]);
		}
	}
}
