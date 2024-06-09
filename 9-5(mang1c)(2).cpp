#include <stdio.h>
#include <math.h>

int mark[1000001] = {0};
int cnt[1000001] = {0};
int main () {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i<n;i++){
		scanf("%d",&a[i]);
	}
	
	//liet ke cac gia tri xuat hien trong mang	theo thu tu xuat hien, moi gia tri xuat hien chi
	//chi liet ke 1 lan
	//cach1
//	for(int i = 0;i <n;i++){
//		if(mark[a[i]] == 0) {
//			printf("%d ",a[i]);
//			mark[a[i]] = 1;
//		}
//	}

	//cach2
//	
//	for(int i =0;i<n;i++){
//		int ok =1;
//		for(int j=0;j<i;j++){
//			if(a[i] == a[j]){
//				ok = 0; break;
//			}
//		}
//		if(ok) printf("%d ",a[i]);
//	}


	//tim so co so lan xuat hien nhieu nhat trong mang va neu trong mang co nhieeu so
	//co cung so lan xuat hien thi lay so cos gia tri nho nhat
//	for(int i=0;i<n;i++){
//		cnt[a[i]]++;
//	}
//	int dem=0,res;
//	for (int i=0;i<n;i++){
//		if(cnt[a[i]]>dem){
//			dem=cnt[a[i]];
//			res=a[i];
//		}
//		else if(cnt[a[i]]=dem){
//			if(res > a[i]) res = a[i];
//		}
//	}
//	printf("%d %d",res,dem);
	
		//tim so co so lan xuat hien nhieu nhat trong mang va neu trong mang co nhieeu so
	//co cung so lan xuat hien thi lay so co xuat hien truoc nhat trong mang
	//cach1
//	for(int i=0;i<n;i++){
//		cnt[a[i]]++;
//	}
//	int dem=0,res;
//	for (int i=0;i<n;i++){
//		if(cnt[a[i]]>dem){
//			dem=cnt[a[i]];
//			res=a[i];
//		}
//	}
//	printf("%d %d",res,dem);
    
	//cach2
//	int dem=0,res;
//	for(int i =0;i<n;i++){
//		int cnt = 1; //chinh la thang a[i] ( theo cach khac: dung de danh dau cac ptu trong
//					// mang vi cac phan tu trong mang luon duoc xuat hien it nhat mot lan,
//					//tuc la dung de danh dau phan tu do cos trong mang r.
//		for(int j=i+1;j<n;j++){
//			if(a[i]==a[j]) ++cnt;
//		}
//		if(dem<cnt){
//			dem= cnt;
//			res=a[i];
//		}
//	}
//	printf("%d %d",res,dem);

	//cho mang cac so snguyen khong am, thuc hien liet ke cac gia tri trong mang va so lan xuat hien
//	for(int i=0;i<n;i++){
//		cnt[a[i]]++;
//	}
//	for(int i=0;i<n;i++){
//		if(cnt[a[i]] !=0) {
//			printf("%d %d\n",a[i],cnt[a[i]]);
//			cnt[a[i]] = 0;
//		}
//	}

	//cach 2
//	int dem = 0;
//	for(int i = 0;i<n;i++){
//		int cnt = 1;
//		for(int j=i+1;j<i;j++){
//			if(a[i] == a[j]) ++cnt;
//		}
//		if(cnt != 0){
//			dem= cnt;
//			cnt = 0;
//		}
//		printf("%d %d\n",a[i],dem);
//	}

	//liet ke cac so chi xuat hien trong mang mot lan
//	for(int i=0;i<n;i++){
//		cnt[a[i]]++;
//	}
//	for(int i=0;i<n;i++){
//		if(cnt[a[i]] == 1){
//			printf("%d\n",a[i]);
//		}
//	}

	for(int i=0;i<n;i++){
		int cnt=1;
		for(int j=i+1;j<n;j++){
			++cnt;
		}
		if(cnt){
			printf("%d ",a[i]);
		}
	}
	return 0;
}



