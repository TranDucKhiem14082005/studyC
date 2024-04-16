#include <stdio.h>
#include <math.h>

int ktr(int n){
	int res = 0; // so luong thua so nguyen to xuat hien trong n.
	for(int i = 2; i<= sqrt(n); i++){
		int cnt = 0; // so mu cua thua so nguyen to xuat hien trong n.
		while(n%i==0){
			++cnt;
			n/=i;
		}
		if(cnt >=2) return 0; // luc nay neu so mu cua thua so nguyen to lon hon 1 thi no khong phai la so sphenic
		if(cnt == 1) ++res; // neu cnt = 1 thi no tiep tuc tang 1 thua so nguyen to len de xet xem n con chia het cho i khong. roi
		// tiep tuc kiem tra la so mu cua thua so nguyen to do co lon hon 1 khong.
	}
	if(n!=1){//thua so nguyen to cuoi cung
		++res;
	}
	return res == 3; // dinh nghia cua so sphenic la so duoc phan tich duy nhat duoi dang tich cua 3 so khac nhau
	// luc nay thi res se la 3 so khac nhau neu khong phai 3 so khac nhau thi khong phai la so sphenic
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i =1; i<=t;i++){
		int n;
		scanf("%d",&n);
		printf("%d\n",ktr(n));
	}
	return 0;
}
