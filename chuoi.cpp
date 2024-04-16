#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
//truy cap ki tu cua xau thong qua chi so
//length();
//size();
//cin , getline

//	int n;
//	cin >> n; // van con phim enter . cin khi gap enter thi se dung --> sau s se~ la sau rong
//	// cach khac phuc la:
//	// sa
//	cin.ignore(); //co the truyen 1 hoac 2 vao ( de xoa ki tu )
//	string s;
//	getline(cin,s);
//	cout << s << endl;

	// chi su dung dau + khong duoc su dung '-'
	//ky thuat noi hai chuoi lai voi nhau --> co the su dung dau + : noi hai chuoi lai voi nhau
//	string a = "python ";
//	string b = "java";
//	string c = a + b; // noi dung cua sau b se noi vao dang sau noi dung cua sau a.
//	cout << c << endl; 
//	
	//co the cong truc tiep sau b vao sau a;
//	a += b;
//	cout << a << endl; // noi dung cua sau b cung duoc noi vao sau a.

//so sanh giua cac sau voi nhau cung dung cac phep so sanh nhu so sanh giua cac so voi nhau

//	//so sanh hai sau voi nhau. --> so sanh theo thu tu tu` dien so cang lon thi cang lon
//	string a= "abc";
//	string b= "def";
//	if(a>b){
//		cout << " sau a lon hon sau b"<< endl;
//	}else cout << " sau a nho hon sau b" << endl;
////	--> luc nay no se in ra "sau a nho hon sau b" vi` thu tu tu` dien cua abc nho hon thu tu tu` dien cua def

//substr();

//stoi: chuyen 1 sau toan so thanh nhung so tu nhin int
//stoll: chuyen 1 chuoi so thanh so long long
//to_string: chuyen 1 day so thanh 1 day ki tu so
//stringstream: tac cac tu trong choi
int main(){
	string s = " java python php lap trinh";
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		cout << tmp << endl;
	}
	return 0;
}







