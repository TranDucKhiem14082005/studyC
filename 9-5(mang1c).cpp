#include <stdio.h>
#include <math.h>

int gcd (int a, int b){
	if (b==0)
		return a;
	return gcd(b,a%b);
}

long long max(long long a, long long b){
	return a<b? b : a;
}

int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	//dem cap so nguyen to cung nhau
//	long long cnt = 0;
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(gcd(a[i],a[j])==1){
//				++cnt;
//			}
//		}
//
//	}
//	printf("\n%lld",cnt);

	//tich so lon nhat cua 2 so trong mang
	
//	int max1=-2e9,max2=-2e9,min1=2e9,min2=2e9;
//	for(int i=0;i<n;i++){
//		if(a[i]>max1){
//			max2=max1;
//			max1=a[i];
//		}else if(a[i] > max2){
//			max2=a[i];
//		}
//		if(a[i]<min1){
//			min2=min1;
//			min1=a[i];
//		}else if(a[i] < min2){
//			min2=a[i];
//		}
//	}
//	
//	long long res = max(1ll*max1*max2,1ll*min1*min2);
//	printf("%lld",res);

	//Tim day con lien tiep co cac phan tu lien ke khac nhau co do dai lon nhat
//	int res=0, cnt=1;
//	for(int i =1;i<n;i++){
//		if(a[i] != a[i-1]){ //day con co cac phan tu lien tiep ke nhau bang nhau 
//							//co do dai lon nhat thi hay != thanh ==
//			++cnt;
//		}
//		else {
//			cnt=1;
//		}
//		res = max(res,cnt);
//	}
	
	//tim day con lien tiep co 2 phan tu lien ke nhau trai dau cos do dai dai nhat
	int res = 0,cnt=1;
	for(int i=1;i<n;i++){
		if(a[i]*a[i-1]<0){
			++cnt;
		}
		else {
			cnt = 1;
		}
		res = max(res,cnt);
	}
	if(res == 1) {
		printf("0");
	} else
		printf("%d",res);
		
	//tim day con tang lien tiep co do dai lon nhat
		
	return 0;
}






