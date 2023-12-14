#include <iostream>
#include <string>
using namespace std;
int main () {

	string data_ayam[3][2] = {
		{"D", "Dada"},
		{"P", "Paha"},
		{"S", "Sayap"}};
	float harga_ayam[3] = {
		2500,
		2000,
		1500
	};

	cout << "GEROBAK FRIED CHICKEN";
	cout << endl;
	for (int i = 0; i <= 40; i++) cout << "-";
	cout << endl;
	cout << "Kode\tJenis\tHarga" ;
	cout << endl;
	for (int i = 0; i <= 40; i++) cout << "-";
	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << data_ayam[i][0] << "\t" << data_ayam[i][1] << "\t" << harga_ayam[i] << endl;
	}
	cout << endl;

	int banyak_jenis;
	
	cout << "Banyak Jenis : ";
	cin >> banyak_jenis;

	string jenis_potong[banyak_jenis];
	int banyak_potong[banyak_jenis];

	for (int i = 0; i < banyak_jenis; i++)
	{
		cout << "Jenis Ke - " << i+1 << endl ;
		cout << "Jenis Potong (D/P/S) : " ;
		cin >> jenis_potong[i];
		cout << "Banyak Potong : " ;
		cin >> banyak_potong[i];
	}
	cout << endl;
	cout << "\tGEROBAK FRIED CHICKEN";
	cout << endl;
	for (int i = 0; i <= 40; i++) cout << "-";
	cout << endl;
	cout << "No.\tJenis\tHarga\tBanyak\tJumlah" << endl;
	cout << "\tPotong\tSatuan\tBeli\tHarga";
	cout << endl;
	for (int i = 0; i <= 40; i++) cout << "-";
	cout << endl;

	float jumlah_harga[banyak_jenis], jumlah_bayar, pajak;
	for (int i = 0; i < banyak_jenis; i++)
	{
		cout << i + 1 << "\t" << jenis_potong[i] << "\t";
		if (jenis_potong[i] == "D" || jenis_potong[i] == "d")
		{
			cout << harga_ayam[0];
			jumlah_harga[i] = banyak_potong[i]*harga_ayam[0];
		} else if (jenis_potong[i] == "P" || jenis_potong[i] == "p")
		{
			cout << harga_ayam[1];
			jumlah_harga[i] = banyak_potong[i]*harga_ayam[1];

		} else if (jenis_potong[i] == "S" || jenis_potong[i] == "s")
		{
			cout << harga_ayam[2];
			jumlah_harga[i] = banyak_potong[i]*harga_ayam[2];

		}
		cout << "\t" << banyak_potong[i] << "\t" << "Rp. " << jumlah_harga[i] << endl;
		jumlah_bayar += jumlah_harga[i];
	}
	
	for (int i = 0; i <= 40; i++) cout << "-";
	cout << endl;
	pajak = jumlah_bayar * 0.1;
	cout << "\t\tJumlah Bayar\tRp. " << jumlah_bayar << endl;
	cout << "\t\tPajak 10%\tRp. " << pajak << endl;
	cout << "\t\tTotal Bayar\tRp. " << jumlah_bayar + pajak;
}

