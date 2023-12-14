#include <iostream>

using namespace std;
struct Mahasiswa {
	string nama;
	int umur;
	float ipk;
};
float hitungRataRataIPK(Mahasiswa mahasiswa[], int jumlahMahasiswa) {
	float total = 0;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		total += mahasiswa[i].ipk;
	}
	return total / jumlahMahasiswa;
}

int main () {
	
	const int jumlahMahasiswa = 3;
	Mahasiswa DaftarMahasiswa[jumlahMahasiswa];
	
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "Masukkan Nama Mahasiswa " << i + 1 << ": ";
		cin >> DaftarMahasiswa[i].nama;

		cout << "Masukkan Umur Mahasiswa " << i + 1 << ": ";
		cin >> DaftarMahasiswa[i].umur;	
		
		cout << "Masukkan IPK Mahasiswa " << i + 1 << ": ";
		cin >> DaftarMahasiswa[i].ipk;
		cout << endl;
	}
	
	cout << "\nData Mahasiswa:\n";
	
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "Mahasiswa " << i + 1 << ":" << endl;
		cout << " Nama: " << DaftarMahasiswa[i].nama << endl;
		cout << " Umur: " << DaftarMahasiswa[i].umur << endl;
		cout << " IPK: " << DaftarMahasiswa[i].ipk << endl;
	}
	
	float rataRata = hitungRataRataIPK(DaftarMahasiswa,jumlahMahasiswa);
	cout << "\nRata-rata IPK:" << rataRata << endl;
	return 0;
}
