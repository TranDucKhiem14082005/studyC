#include <stdio.h>
#include <math.h>
#include <string.h>
int cnt[1000001] = {0};

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		//cho mang cac so nguyen. Tim phan tu lap dau tien trong mang
		int ok=0;
		for(int i=0;i<n;i++){
			if(cnt[a[i]] == 1){
				printf("%d\n",a[i]);
				ok = 1;
				break;
			}
			cnt[a[i]] = 1;
		}
		if(ok==0) {
			printf("-1");
		}
//		memset(cnt,0,sizeof(cnt));
		for(int i =0;i<1000000;i++){
			cnt[i] = 0;
		}	
	}
	return 0;
}
