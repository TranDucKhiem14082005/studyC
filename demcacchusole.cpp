#include <stdio.h>
#include <math.h>

//int check(int n){
//	while(n){
//		int r = n % 10;
//		if(r % 2 == 0) return 0;
//		n/=10;
//	}
//	return 1;
//}
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i = 0; i<n; i++){
//		scanf("%d",&a[i]);
//	}
//	int cnt = 0;
//	for(int i = 0; i<n;i++){
//		if(check(a[i])) ++cnt;
//	}
//	printf("%d\n",cnt);
//	for(int i = 0; i<n;i++){
//		if(check(a[i])) printf("%d ",a[i]);
//	}
//	return 0;
//}


// liet ke cac so  co it nhat 2 phan tu lon hon no

//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i = 0; i<n; i++){
//		scanf("%d",&a[i]);
//	}
//	int max1=-2e9-1,max2= -2e9-1;
//	for(int i = 0; i<n;i++){
//		if(a[i]>max1){
//			max2=max1;
//			max1=a[i];
//		}else if(a[i] > max2){
//			max2 = a[i];
//		}
//	}
//	for(int i=0; i<n;i++){
//		if(a[i] < max2) printf("%d ",a[i]);
//	}
//	return 0;
//}


//in ra cac so dep trong mang ( so dep la so co chu so 1 va chu so 9 ). neu mang khong ton tai so den thi in ra ( - 1 )

//#include <stdio.h>
//#include <math.h>
//
//
//int sodep(int n){
//	int c1 = 0, c2 = 0;
//	while(n){
//		if(n%10==1) c1 = 1;
//		if(n%10==9) c2 = 1;
//		n/=10;
//	}
//	return c1 && c2;
//}
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i = 0; i<n; i++){
//		scanf("%d",&a[i]);
//	}
//	int ok = 0; // de check xem trong mang a[] co so dep khong
//	for(int i = 0; i<n;i++){
//		if(sodep(a[i])){
//			printf("%d ",a[i]);
//			ok = 1; // so dep da duoc tim thay
//		}
//	}
//	if(ok == 0){ // ok == 0 thi tuc la trong mang a[] khong co so dep
//		printf("-1");
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i = 0; i<n; i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(i==0 && a[0] * a[1] < 0)
//			printf("%d ",a[0]);
//		else if(i==n-1 && a[n-1] * a[n-2]<0){
//			printf("%d ",a[n-1]);
//		}
//		if(a[i]*a[i-1<0 && a[i] * a[i-2] < 0){
//			printf("%d ",a[i]);
//		}
//	}
//	return 0;
//}


//kiem tra 1 mang co doi xung hay khong

#include <stdio.h>
#include <math.h>

int dx(int a[], int n){
	int l = 0, r = n-1; // luc dau cho l co di chi a[0], r co dia chi la [n-1] (* tu hieu tinh chat cua mang )
	while(l<r){ // lap lai cho toi khi nao no sai so voi dieu kien l<r
		if(a[l] != a[r]) return 0; //cu lay l ss voi r neu ma l khac r thi no khong phai la mot mang doi xung
		++l; --r; // con ma r = l cho toi het pt(trung tam) thi cu tang l va tiep tuc giam r de so sanh.
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}
	if(dx(a,n)) printf("YES\n");
	else printf("NO\n");
}










