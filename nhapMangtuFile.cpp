#include <stdio.h>
int main() {
	int nums[] = {1, 2, 3, -999999}; // l�nh canh
	int count = 0;
	for (int i = 0; nums[i] != -9999999; i++)
		count++;
	printf("S? ph?n t? tru?c l�nh canh: %d\n", count);
	return 0;
}
