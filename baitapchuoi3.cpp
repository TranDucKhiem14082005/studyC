#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(){
	char c[5005];
	gets(c);
	int cnt[256] = {0};
	for(int i = 0; i<strlen(c);i++){
		cnt[c[i]]++; 
	}
	int res =0;// luu xem tan suat xuat hien la bao nhieu
	char kitu; //de luu ki tu co so lan xuat hien nhieu nhaats
	for(int i=0;i<255;i++){
		if(cnt[i]){
			if(cnt[i]>=res){ 
				res=cnt[i];
				kitu =(char)(i);
			}
		}
	}
	printf("%c",kitu);

	char c1[1000],c2[1000];
	gets(c1);
	gets(c2);
	int cnt[256] = {0};
	for(int i = 0;i<strlen(c1);i++){
		cnt[c1[i]] = 1;
	}
	for(int i = 0 ; i< strlen(c2);i++){
		if(cnt[c2[i]]){ // dieu nay chung to la ki tu minh dang xet mo da o trong sau c1
			cnt[c2[i]] = 2;
		}
	}
	for(int i = 0 ;i<256;i++){
		if(cnt[i] == 2){
			printf("%c",i);
		}
	}
	return 0;
}





