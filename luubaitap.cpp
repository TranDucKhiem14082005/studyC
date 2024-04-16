#include <stdio.h>
#include <math.h>

int prime [100001];

void sang(){
	for(int i = 1; i<=100000;i++){ // ban dau coi tat ca cac uoc cua no la chinh no.
		prime[i] = i;
	}
	for(int i = 2; i<=sqrt(100000);i++){
		if(prime[i] == i){ // chung to i la so nguyen to.
			for(int j = i*i; j<=100000;j+=i){
				if(prime[j] = j) // chung to la j chua duoc gan lan nao ca.
					prime[j] = i; // chung to boi nho nhat cua j la i.
			}
		}
	}
}

int main(){
	// dem so co 3 uoc so trong doan.
	/*int prime[1000001];

void sang(){
	for(int i = 0; i<=1000000;i++){
		prime[i] = 1;
	}
	prime[0] = prime [1] = 0;
	for(int i =2 ; i <=sqrt(1000000); i++){
		if(prime[i]){
			for(int j = i*i;j<=1000000;j+=i){
				prime[j] = 0;
			}
		}
	}
}

int main(){
	int t;
	scanf("%d",&t);
	sang();
	while(t--){
		long long n; // su dung kieu du lieu la long long de nhap input neu khong se bi trang so.
		scanf("%lld",&n);
		int cnt = 0;
		for(int i = 1; i<= sqrt(n);i++){
			if(prime[i])
				++cnt;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
*/
// de: uoc so nguyen to nho nhat cua 1 so (su dung sang)

	sang();
	int t;
	scanf("%d",&t);
	while(t--){
		int n; 
		scanf("%d",&n);
		for(int i = 1; i <= n; i++){
			printf("\n%d ",prime[i]);
		}
	}
	
//de: phan tich thua so nguyen to ket hop voi sang so nguyen to.
/*int prime[100001];

void sang(){
	for(int i =0; i<=100000;i++){
		prime[i] = i;//	ban dau coi tat ca cac uoc cua no la chinh no
	}
	for(int i = 2; i<=sqrt(100000);i++){
		if(prime[i]){
			for(int j = i*i;j<=100000;j+=i){
				if(prime[j] == j)
					prime[j] = i;
			}
		}
	}
}

void pt(int n){
	while(n!=1){
		int cnt= 0;
		int temp = prime[n]; //thua so nguyen to nho nhat hien tai cua n
		while(n%temp==0){
			++cnt;
			n/=temp;
		}
		printf("%d(%d) ",temp,cnt);
	}
	printf("\n");
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	for(int i = 1; i<=t;i++){
		int n;
		scanf("%d",&n);
		printf("#TC%d: ",i);
		pt(n);
	}
	
	return 0;
}
*/

/*//dem thua so nguyen to.

int prime[100001];

int dem(int n){
	int cnt =0;
	for(int i = 2; i<=sqrt(n);i++){
		if(n%i == 0){// thua so nguyen to cua n
			++cnt;// moi thua so nguyen to se dem la 1
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n!=1){
		++cnt;
	}
	return cnt;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",dem(n));
	}

	
	return 0;
}
*/

/*//de: bac cua so nguyen to trong n giai thua

// cach thong thuong
int dem(int n, int p){
	int ans = 0;
	for(int i = p;i<=n;i+=p){
		int temp = i;
		while(temp%p==0){//dem trong bien temp thi co bao nhieu lan xuat hien thang p
			++ans;
			temp/=p;
		}
	}
	return ans;
}
// dung cong thuc legendre
int dem2(int n,int p){
	int ans = 0;
	for(int i = p;i<=n;i*=p){ // voi buoc nhay la p thi tuc i se nhay so mu lan p. vd p, p^2,p^3,p^4,....
		ans+=n/i;
	}
	return ans;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1; i<=t;i++){
		int n,p;
		scanf("%d %d",&n,&p);
		printf("%d\n",dem2(n,p));
	}
	
	return 0;
}
*/
	return 0;
}
















