#include <stdio.h>

long long max(long long a, long long b){
	return a<b? b : a;
}

int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//day con lien tiep cac phan tu lien ke nhau co do dai lon nhat.
//	int res=0,cnt=1;
//	for(int i=1;i<n;i++){
//		if(a[i] != a[i-1]){
//			++cnt;
//		}else{
//			cnt = 1;
//		}
//		res = max(res,cnt);
//	}
//	printf("%d",res); 
	
	//tim day con lien tiep co cac phan tu giong nhau co do dai dai` nhat
//	int res=0,cnt=1;
//	for(int i=1;i<n;i++){
//		if(a[i] == a[i-1]){
//			++cnt;
//		}else{
//			cnt = 1;
//		}
//		res = max(res,cnt);
//	}
//	printf("%d",res);
	
	//tim day con lien tiep co 2 pt lien ke trai dau co do dai dai` nhat
//	int res=0,cnt=1;
//	for(int i=1;i<n;i++){
//		if(a[i] * a[i-1] < 0){
//			++cnt;
//		}else{
//			cnt = 1;
//		}
//		res = max(res,cnt);
//	}
//	if(res == 1)
//		printf("0");
//	else
//		printf("%d",res);
	
	//tim va in ra day con lien tiep co do dai lon nhat,neu co nhieu day con co cung
	//chieu dai lon nhat thi in ra dau tien (cuoi cung)
//	int res=0,cnt=1,index;
//	for(int i=1;i<n;i++){
//		if(a[i] > a[i-1]){
//			++cnt;
//		}else{
//			cnt = 1;
//		}
//		if(cnt > res){
//			res = cnt;
//			index = i-res+1;
//		}
//	
//	}
//	printf("%d\n",res);
//	for(int i=0;i<res;i++){
//		printf("%d",a[index+i]);
//	}
	
	//liet ke cac doan day con tang lien tiep ma co so phan tu lon nhat
	int res=0,cnt = 0, b[n], dem = 1;
	for(int i=1;i<n;i++){
		if(a[i] > a[i-1]) ++dem;
		else dem = 1;
		if(dem > res){
			res = dem;
			b[0] = i - res + 1;
			cnt = 1;
		}
		else if (dem == res) {
			b[cnt] = i-res+1;
			++cnt;
		}
	}
	printf("%d\n",res);
	for(int i=0;i<cnt;i++){
		for(int j=0;j<res;j++){
			printf("%d ",a[b[i]+j]);
		}
		printf("\n");
	}
	
	
	return 0;
} 









