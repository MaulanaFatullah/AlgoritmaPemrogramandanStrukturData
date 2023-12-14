#include <iostream>
#include <string>

using namespace std;

int main (){
	
	int x;
	string y;
	char z[30]; 
	
	
//	cout << "Masukkan NPM anda :"; cin >> x;
	
//	cout << "Masukkan Alamat anda :"; cin >> z;
	cout << "Masukkan Nama anda :"; 
	getline (cin,y);
	
	
//	cout << "NPM anda adalah " << x <<endl;
	cout << "Nama anda adalah " << y <<endl;
//	cout << "Alamat anda adalah " << z <<endl;
	
	return 0;
	
}
