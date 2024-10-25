#include <stdio.h>
#include <stdlib.h>

void NhapDaySo(int n){
	int a[n];
	FILE *f;
	f = fopen("Dayso.inp","w");
	if(f == NULL){
		printf("loi!");
		return;
	}
	printf("%d",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		fprintf(f,"%d",a[i]);		
	}

	fclose(f);
}


int main() {
	int n;
	printf("nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	NhapDaySo(n);

	return 0;
}
