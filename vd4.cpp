#include <stdio.h>
#include <math.h>
//phan tich thua so nguyen to

void pt(int n){
	for(int i = 2; i<=sqrt(n);i++){
		while(n%i==0){//neu n bat gap mot thua so nguyen to i nao do thi no se kiem tra la chung nao bien n con chia het cho i
						// thi se~ in ra i
			printf("%d ",i);
			n/=i;	
		}
	}//sau vong lap for thi kiem tra xem n da bang 1 hay chua, neu chua thi hay in n vi no se~ la thua so nguyen to cuoi cung
	if(n!=1){
		printf("%d",n);
	}
}

//de: moi thua so nguyen to chi liet ke 1 lan
void pt1(int n){
	for(int i = 2; i<=sqrt(n);i++){
		if(n%i==0){
			printf("%d ",i);
			while(n%i==0){//nhiem vu cua vong lap while la lay n chia het cho i cho den khi nao nos khong chia het cho i thi thoi
				n/=i; 
			}
		}
	}
	if(n!=1){
		printf("%d",n);
	}
}

//de: thua so nguyen to duoc liet ke kem theo so mu. vd: 2(2) 3(1)

void pt2(int n){
	for(int i = 2; i<=sqrt(n);i++){
		if(n%i==0){
			int cnt = 0;
			while(n%i==0){
				++cnt;//so mu cua i
				n/=i;
			}
			printf("%d(%d) ",i,cnt);
		}
	}
	if(n!=1){
		printf("%d(1)",n);
	}
}

//de: them dau x vao giua cac thi so nguyen to

void pt3(int n){
	for(int i =2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				printf("%dx",i);
				n/=i;
			}
		}
	}
	if(n!=1){
		printf("%d",n);
	}
}

//de: vd 60 = 2^2 * 3^1 * 5^1
void pt4(int n){
	for(int i = 2; i<=sqrt(n);i++){
		if(n%i==0){
			int cnt = 0;
			while(n%i==0){
				++cnt;
				n/=i;
			}
			printf("%d^%d * ",i,cnt);
		}
	}
	if(n!=1){
		printf("%d^1",n);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	pt(n);
	printf("\n");
	pt1(n);
	printf("\n");
	pt2(n);
	printf("\n");
	pt3(n);
	printf("\n");
	pt4(n);
	return 0;
}





