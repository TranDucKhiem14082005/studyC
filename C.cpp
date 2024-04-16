#include <iostream>
#include <iomanip> 	// fixed and setprecision thuoc thu vien iomanip!!!
using namespace std;

// mang 1 chieu
/*
kieu_duieu tenmang[so luong phan tu cua mang];
tenmang[index]
chi so bat dau tu 0


*/
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n; i++){
		cin >> a[i]; // nhap gia tri cho phan tu o chi so i
	}
	int sum = 0;
	for(int i = 0; i<n; i++){
		cout << a[i] << " " ; // endl khi ket thuc 1 cau lenh thi no se xuong dong !!!!
		sum += a[i];
	}
	cout << sum;

	
	return 0;
}

