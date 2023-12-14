#include <iostream>

using namespace std;

int main() {
	
	int l,a,t;
	
	cout << "Menghitung Luas Segitiga\n";
	cout << "--------------------------\n";
	cout << "Masukkan Alas : "; cin >> a;
	cout << "Masukkan Tinggi : "; cin >> t;
	cout << "Luas Segitiga yang diketahui adalah :";
	cout << "Luas Alas : " << a << endl;
	cout << "Luas Tinggi : " << t << endl;
	l = a * t / 2;
	cout << "Hasil dari Luas Segitiga adalah :" << l;
}
