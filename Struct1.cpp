#include <iostream>

using namespace std;

int main () {
	
	struct {
		char nim[9];
		char nama[15];
		float nilai_akhir;
	}
	mahasiswa;
	
	cout << "Masukkan NIM = ";
	cin >> mahasiswa.nim;
	cout << "Masukkan Nama = ";
	cin >> mahasiswa.nama;
	cout << "Masukkan Nilai Akhir = ";
	cin >> mahasiswa.nilai_akhir;
	cout << "\n\nData yang di inputkan adalah : \n\n";
	cout << "NIM =" << mahasiswa.nim << endl;
	cout << "Nama =" << mahasiswa.nama << endl;
	cout << "Nilai Akhir =" << mahasiswa.nilai_akhir << endl;
	getchar();
	
	return 0;
}
