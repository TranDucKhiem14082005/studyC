#include <stdio.h>
int main() {
	int nums[] = {1, 2, 3, -999999}; // lính canh
	int count = 0;
	for (int i = 0; nums[i] != -9999999; i++)
		count++;
	printf("S? ph?n t? tru?c lính canh: %d\n", count);
	return 0;
}
