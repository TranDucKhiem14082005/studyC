#include <stdio.h>

#define macro1(a,b) ((a) > (b) ? (a) : (b))

#define macro2(a) (a) % 2 == 0 ? (a) : 0

int main() {
	printf("so lon nhat: %d\n",macro1(4,5));
	
	printf("so lon nhat trong 4 so la: %d\n",macro1(macro1(4,5),macro1(6,8)));
	
	int n;
	scanf("%d",&n);
	
	if(macro2(n)){
		printf("%d la so chan",macro2(n));
	} else 
		printf("%d",macro2(n));
}
