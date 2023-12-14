#include <iostream>

using namespace std;

void siswa (string nama, string kelas) {
	cout << nama << " adalah siswa kelas " << kelas << endl;
}

//string siswi () {
//	string nama = "alexa";s
//	return nama;
//}

int main () {
	string nama, kelas;
	cout << "Masukkan nama : "; getline(cin, nama);
	cout << "Masukkan kelas : "; getline(cin, kelas);
	siswa(nama,kelas);
}
