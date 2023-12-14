#include <iostream>

using namespace std;

int main() {
	
	int x, y, Tambah, Kurang, Kali, Bagi;
	
	cout << "Masukkan bilangan pertama : ";
	cin  >> x;
	cout << "Masukkan bilangan kedua : ";
	cin >> y;
	
	Tambah = x + y;
	Kurang = x - y;
	Kali = x * y;
	Bagi = x / y;
	cout << "Jadi hasil penjumlahannya adalah : " << Tambah << endl;
	cout << "Jadi hasil pengurangannya adalah : " << Kurang << endl;
	cout << "Jadi hasil perkaliannya adalah : " << Kali << endl;
	cout << "Jadi hasil pembagiannya adalah : " << Bagi << endl;
	return 0;
}
