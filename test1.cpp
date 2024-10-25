#include <stdio.h>
#include <stdlib.h>
//ghi vào file
//1 yeu cau nhap 1 con so tu man hinh va ghi con so nay vao file
int main(){
	FILE *f;
	//1 tao file
	//2 mo file
	f = fopen("test1.txt","w");
	if(f == NULL) {
		printf("\n Loi tao hoac mo file");
		exit(1);
	}
	int n;
	printf("\n nhap vao so n: "); scanf("%d",&n);
	fprintf(f,"%d",n);
	//3 Doc hoac ghi
	
	//4 Dong file
	fclose(f);
	return 0;
}
