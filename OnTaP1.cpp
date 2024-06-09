#include <stdio.h>
#include <math.h>

int mangtang(int a[],int n){
	for(int i=0;i<n-1;i++){
		if(a[i] >=a[i+1])
			return 0;
	}
	return 1;
}

int gcd(int a, int b){
	if (b == 0){
		return a;
	}
	return gcd(b,a%b);
}

long long max(long long a, long long b){
	return a<b? b : a;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	//kiem tra xem co phai mang tang hay khong
//	if(mangtang(a,n))
//		printf("YES\n");
//	else printf("NO\n");
//	
	//so khong nho hon so dung truoc, tu la so dung sau luon luon lon hon tat ca cac so
	//dung truoc (tinh ca phan tu dau tien)
//	int max = a[0];
//	for(int i = 0;i<n;i++){
//		if(a[i] >=max){
//			printf("%d ",a[i]);
//		}
//		if(a[i] > max) max = a[i];
//	}
	//kiem tra u
//	long long cnt = 0;
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(gcd(a[i],a[j]) == 1) ++cnt; //kiem tra xem uoc chung cua a[i] va a[j] 
//			//co bang 1 hay khong
//		}
//	}
//	printf("%d\n",cnt);
	
	//tich lon nhat cua 2 so trong mang
	int min1= 2e9,min2=2e9, max1=-2e9,max2=-2e9;
	for(int i =0 ; i < n ; i++){
		if (a[i]> max1){
			max2 = max1;
			max1 = a[i];
		} else if ( a[i] > max2){
			max2 = a[i];
		}
		if(a[i] < min1){
			min2= min1;
			min1=a[i];
		}else if(a[i]>min2){
			min2=a[i];
		}
	}
	long long res=max(1ll*max1*max2,1ll*min1*min2);
	printf("%lld",res);
	
	return 0;
}
