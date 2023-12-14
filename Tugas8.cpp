#include <iostream>

using namespace std;

int main () {
	int jumlah_barang;
	
	cout << "Masukkan jumlah barang : ";
	cin >> jumlah_barang;
	cout << endl;
	
	string nama_barang [jumlah_barang];
	int tahun_penjualan [jumlah_barang][jumlah_barang];
	
	for (int i = 0; i < jumlah_barang; i++) {
			cout << "Masukkan nama barang : ";
			cin >> nama_barang[i];
			
			cout << "Masukkan jumlah barang di tahun 2001 : ";
			cin >> tahun_penjualan[i][0];
			
			
			cout << "Masukkan jumlah barang di tahun 2002 : ";
			cin >> tahun_penjualan[i][1];
			
			cout << "Masukkan jumlah barang di tahun 2003 : ";
			cin >> tahun_penjualan[i][2];
			
			cout << endl;
	}	
	
	cout << "Hasil Penjualan Barang" << endl;
	for (int i = 0; i <= 60; i++) cout << "=";
	
	cout << "\nNomor\tNama Barang\t2001\t2002\t2003" << endl;
	
	for (int i = 0; i <= 60; i++) cout << "=";
	cout << endl;
	
	for (int i = 0; i < jumlah_barang; i++) {
			cout << i+1 << "\t" << nama_barang[i] << "\t\t" << tahun_penjualan[i][0] << "\t" << tahun_penjualan[i][1] << "\t" << tahun_penjualan[i][2];
		cout << endl;
	}
	
	for (int i = 0; i <= 60; i++) cout << "=";
        
        
        
}

