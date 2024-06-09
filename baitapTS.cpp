#include <stdio.h>

int mark[1000001]={0};// xem phan tu nao do duoc in ra chua
int cnt[1000001]={0};
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	//liet ke cac gia tri da xuat hien trong mang, moi gia tri xuat hien chi liet ke
	//mot lan va nhung gia tri do phai sap xep giong trong mang
	//cach 1
//	for(int i=0;i<n;i++){
//		if(mark[a[i]] == 0){
//			printf("%d ",a[i]);
//			mark[a[i]] = 1; // phan tu do da in ra r
//		}
//	}
//	
//	//cach 2
//	for(int i=0;i<n;i++){
//		int ok=1;
//		for(int j=0;j<i;j++){
//			if(a[i] == a[j]){
//				ok = 0; break;
//			}
//		}
//		if (ok) printf("%d ",a[i]);
//	}

	//tim so  co so lan xuat hien nhieu nhat trong mang. trong th co nhieu so co cung so
	//lan xuat hien thi lay so co gia tri nho hon.
	//cach 1
//	for(int i=0;i<n;i++){
//		cnt[a[i]]++;
//	}
//	int dem=0, res; //dem: ki luc xuat hien, res: luu thang co so lan xuat hien nhieu nhat
//	for(int i= 0 ;i<n;i++){
//		if(cnt[a[i]]>dem){
//			dem = cnt[a[i]];
//			res = a[i];
//		}
//		else if(cnt[a[i]] == dem){
//			if(res > a[i]) res = a[i];
//		}
//	}
	//	cach2
//	int res,dem =0;
//	for(int i=0;i<n;i++){
//		int cnt = 1;
//		for(int j=0;j<i;j++){
//			if(a[i] == a[j]){
//				cnt++;
//			}
//		}
//		if(cnt > dem){
//			dem = cnt;
//			res = a[i];
//		}
//		else if(cnt == dem){
//			if(res > a[i]) res = a[i];
//		}
//	}
//	printf("%d %d",res,dem);
	
	//tim so co so lan xuat hien lon nhat trong mang, trong th co nhieu so co cung so
	//lan xuat hien thi in ra so dung truoc.
	//cach 1
//	for(int i=0;i<n;i++){
//		cnt[a[i]]++;
//	}
//	int res, dem = 0;
//	for(int i=0;i<n;i++){
//		if(cnt[a[i]]>dem){
//			dem = cnt[a[i]];
//			res = a[i];
//		}
//	}
//	printf("%d %d",res,dem);
	
	//cach 2
//	int res, dem = 0;
//	for(int i=0;i<n;i++){
//		int cnt = 1;
//		for(int j=0;j<i;j++){
//			if(a[i] == a[j]){
//				cnt++;
//			}
//		}
//		if(cnt > dem ){
//			dem = cnt;
//			res = a[i];
//		}
//	}
//	printf("%d %d",res,dem);

	//thuc hien liet ke cac gia tri trong mang va so lan xuat hien cua no.
//	for(int i=0;i<n;i++){
//		cnt[a[i]]++;
//	}
//	for(int i=0;i<n;i++){
//		if(cnt[a[i]] != 0){
//			printf("%d %d\n",a[i],cnt[a[i]]);
//			cnt[a[i]] = 0;
//		}
//	}

	//liet ke cac so chi xuat hien trong mang 1 lan.
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]] == 1){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
















