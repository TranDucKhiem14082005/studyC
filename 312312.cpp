#include <stdio.h>
#define Swrap(x,y) int tam = x; x = y; y = tam;

int main() {
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d",Swarp(x,y));
	return 0;
}
