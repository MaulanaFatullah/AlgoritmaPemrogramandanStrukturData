#include <iostream>

using namespace std;

int main() {
	
	float a, b, x, y, p, q, k, l, penjumlahan, pengurangan, perkalian, pembagian;
	cout << "1). Penjumlahan\n";
	cout << "Masukkan Nilai A : "; cin >> a;
	cout << "Masukkan Nilai B : "; cin >> b;
	
	penjumlahan = a + b;
	cout << "Hasil penjumlahan dari " << a << " + " << b << " adalah " << penjumlahan <<endl;
	
	cout << "------------------------------------------------------\n";
	cout << "2). Pengurangan\n";
	cout << "Masukkan Nilai X : "; cin >> x;
	cout << "Masukkan Nilai Y : "; cin >> y;
	
	pengurangan = x - y;
	cout << "Hasil pengurangan dari " << x << " - " << y << " adalah " << pengurangan <<endl;
	
	cout << "------------------------------------------------------\n";
	cout << "3). Perkalian\n";
	cout << "Masukkan Nilai P : "; cin >> p;
	cout << "Masukkan Nilai Q : "; cin >> q;
	
	perkalian = p * q;
	cout << "Hasil perkalian dari " << p << " x " << q << " adalah " << perkalian <<endl;
	
	cout << "------------------------------------------------------\n";
	cout << "4). Pembagian\n";
	cout << "Masukkan Nilai K : "; cin >> k;
	cout << "Masukkan Nilai L : "; cin >> l;
	
	pembagian = k / l;
	cout << "Hasil perkalian dari " << k << " / " << l << " adalah " << pembagian <<endl;
	
	return 0;
}
