#include <iostream>

using namespace std;

void penjumlahan (int &total) {
	total = total+1;
}

void nama (string *x) {
	cout << "Alamat nama : " << x << endl;
	cout << "Nama saya adalah " << *x ;
}

int main () {
	int hitung = 20;

	penjumlahan(hitung);
	cout << "---Pass by Reference---" << endl;
	cout << "total = ";
	cout << hitung << endl;

	string y;
	cout << "Masukkan nama : ";
	getline (cin, y);
	nama(&y);
	return 0;
}
