#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	if (argc == 4) {
		int a = atoi(argv[1]);
		char c = *argv[2];
		int b = atoi(argv[3]);
		switch(c) {
			case '+':
				printf("%d + %d la %d",a,b,a+b);
				break;
			case '-':
				printf("%d - %d la %d",a,b,a-b);
				break;
			case '*':
				printf("%d * %d la %d",a,b,a*b);
				break;
			case '/':
				if(b!=0) {
					printf("%d / %d la %d",a,b,a/b);
				break;
				}
				
		}
	} else printf("Du lieu khong hop le");
	
	
	if(argc >= 2) {
		float s=0;
		for(int i = 1; i< argc;i++) {
			s +=atof(argv[i]);
		}
		printf("TBC: %.3f",s/(argc-1));
	}
	
	return 0;
}
