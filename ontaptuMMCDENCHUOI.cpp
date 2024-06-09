#include <stdio.h>
#include <math.h>

int snt(int n) {
	for(int i = 2 ; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n > 1;
}

int sole(int n) {
	while(n) {
		int r = n % 10;
		if(r%2==0) return 0;
		n/=10;
	}
	return 1;
}

int sodep(int n){
	int c1 = 0 , c9 = 0;
	while(n){
		int r = n % 10;
		if(r == 1) c1 = 1;
		if(r == 9) c9 = 1;
		n/=10;
	}
	return c1&&c9;
}

int doixung(int a[],int n){
	int l=0, r= n-1;
	while(l<r){
		if(a[l] != a[r])
			return 0;
		++l;--r;
	}
	return 1;	
}

int main () {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n ;i ++) {
		scanf("%d",&a[i]);
	}
	
	// tim min va max trong mang
//	int min=2e9, max=-2e9;
//	for(int i = 0 ; i < n; i++) {
//		if(a[i]  < min ) {
//			min = a[i];
//		}
//		if(a[i] > max ) {
//			max = a[i];
//		}
//	}
//	printf("%d %d", min , max);


	// dem so luong so chan, le trong mang
//	int chan = 0, le = 0;
//	for(int i = 0 ; i < n; i++) {
//		if(a[i] % 2 == 0) {
//			++chan;
//		}else ++le;
//	}	
//	printf("%d %d",chan,le);


	//liet ke cac so nguyen to trong mang
//	for(int i = 0; i<n; i++) {
//		if(snt(a[i])) {
//			printf("%d ",a[i]);
//		}
//	}
	
	
	//tim va in ra chi so cua so nho nhat ( lon nhat ) trong mang,neu co nhieu so co cung gia 
	//tri nho nhat ( lon nhat ) thi in ra chi so dau tien  ( cuoi cung ).
	
//	int res1= 2e9, index1, res2=-2e9, index2;
//	for(int i = 0; i<n;i++) {
//		if(a[i] < res1) { // bo dau = vao thi se lay chi so cuoi cung trong mang
//			res1 = a[i];
//			index1 = i;
//		}
//	}
//	for(int i = 0 ; i<n;i++){
//		if(a[i] > res2) {
//			res2= a[i];
//			index2 = i;
//		}
//	}
//	printf("%d %d",index1, index2);


	//tim va in ra so lon nhat va so lon thu 2 trong mang. ( lam them truong hop nho nhat va nho thu 2 trong mang ) 	
	// day so  lon nhat va so lon thu hai trong mang
//	int max1=-2e9, max2=-2e9;
//	for(int i = 0 ; i<n;i++){
//		if(a[i] > max1) {
//			max2 = max1;
//			max1 = a[i];
//		}else if( a[i] > max2) {
//			max2 = a[i];
//		}
//	}
//	
//	printf("%d %d", max1 ,max2);
//	
	//day la so nho nhat va nho thu hai trong mang
//	int min1=2e9,min2=2e9;
//	for(int i = 0 ; i < n ; i++) {
//		if(a[i] < min1){
//			min2 = min1;
//			min1=a[i];
//		}
//		else if (a[i] < min2) {
//			min2 = a[i];
//		}
//	}
//	printf("%d %d",min1,min2);
	
	//tim va in ra so lon nhat va lon thu 2 trong mang, 2 so nay la 2 so co gia tri khac nhau
	//neu khong co so lon thu 2 thi in ra -1 cho so thu 2 . Lam them nho hon

	//so lon nhat va so lon thu 2
//	int max1=-2e9, max2=-2e9;
//	for(int i=0;i<n;i++){
//		if(a[i] > max1) {
//			max2=max1;
//			max1=a[i];
//		}
//		else if(a[i] > max2 && a[i] != max1){
//			max2=a[i];
//		}
//	}
//	if(max2==-2e9) printf("%d %d",max1,-1);
//	else printf("%d %d",max1,max2);
	
	//so nho nhat va so nho thu 2
	
//	int min1=2e9, min2=2e9;
//	for(int i = 0 ; i<n;i++){
//		if(a[i] < min1) {
//			min2=min1;
//			min1=a[i];
//		}
//		else if(a[i] < min2 && a[i] != min1) {
//			min2 = a[i];
//		}
//	}
//	if(min2==2e9) printf("%d %d",min1,-1);
//	else printf("%d %d", min1 , min2);


	//dem va liet ke cac so toan chu so le trong mang
//	int cnt = 0;
//	for(int i = 0 ; i<n ;i++){
//		if(sole(a[i])) {
//			++cnt;
//		}
//	}
//	printf("%d\n",cnt);
//	for(int i = 0 ; i<n;i++){
//		if(sole(a[i])) {
//			printf("%d ",a[i]);
//		}
//	}

	//cho mang cac so nguyen khac nhau doi mot. liet ke cac phan tu trong mang co it nhat
	//2 phan tu khac lon hon no.
//	int max1=-2e9, max2=-2e9;
//	for(int  i = 0;i<n;i++){
//		if(a[i] > max1) {
//			max2 = max1;
//			max1 = a[i];
//		} else if (a[i] > max2 && a[i] != max1) {
//			max2 = a[i];
//		}
//	}
//	for(int i = 0 ; i < n ; i++){
//		if(a[i] < max2) {
//			printf("%d ", a[i]);
//		}
//	}

//	//tim so dem trong mang ( so dep la so co chu so 1 va chu so 9 ). neu khong co
//	//in ra -1
//	
//	int ok =0;
//	for(int i = 0 ; i <n;i++){
//		if(sodep(a[i])){
//			printf("%d ",a[i]);
//			ok = 1;
//		}
//	}
//	if( ok == 0) printf("-1");

	// cho mang 1 chieu cac so nguyen, liet ke cac phan tu co it nhat mot phan tu
	//lien ke trai dau voi no.
	
//	for(int i = 0; i < n;i++){
//		if(i==0 && a[0] * a[1] < 0) {
//			printf("%d", a[0]);
//		}
//		else if(i == n-1 && a[n-1] * a[n-2] < 0){
//			printf("%d ",a[n-1]);
//		}
//		else if ((a[i] * a[i-1] < 0) || (a[i] * a[i+1] < 0)){
//			printf("%d ",a[i]);
//		}
//	}

	//kiem tra mang co doi xung hay khong
	
//	if(doixung(a,n)) {
//		printf("YES\n");
//	}
//	else printf("NO");
	return 0;
}










