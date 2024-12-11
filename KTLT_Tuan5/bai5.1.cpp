#include <stdio.h>
#define SWAP(a,b,c) {c=a;a=b;b=c;}

float layHang(int n, float weight[], float value[], float capacity) {
	float ratio[100];
	int i,j;
	float temp;
	for(i = 0; i < n; i++){
		ratio[i] = value[i]/weight[i];
	}
	
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(ratio[i] < ratio[j]) {
				//Hoan doi don gia
				SWAP(ratio[i],ratio[j],temp);
				//Hoan doi khoi luong
				SWAP(weight[i],weight[j],temp);
				//Hoan doi gia tri
				SWAP(value[i],value[j],temp);
			}
		}
	}
	float total_value = 0;
	for(i = 0; i < n; i++) {
		if(capacity >= weight[i]) {
			total_value += value[i];
			capacity -= weight[i];
		} else{
			break;
		}
	}
	return total_value;
}

int main() {
	int n=3;
	float weight[] = {10, 20, 30};
	float value[] = {60,100,120};
	float capacity = 30;
	float max_value = layHang(n,weight,value,capacity);
	printf("Tong gia tri lon nhat: %.2f",max_value);
	return 0;
}
