#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	if(argc < 3){
		return 0;
	}
	int m = atoi(argv[1]);
	int n = atoi(argv[2]);
	int tong = 0;
	for(int i = m; i <= n; i++){
		if(i % 2 == 0){
			tong += i;
		}
	}
	printf("tong cac so chan tu m den n la: %d ",tong);
}
