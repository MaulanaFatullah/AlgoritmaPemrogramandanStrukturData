#include <iostream>

using namespace std;

int main() {
	
	char pilihan;
	string jenis;
	
	cout << "Pilih salah satu :";
	cout << "\nA. Laki-laki \nB. Perempuan";
	cout << "";
	cin >> pilihan;
	
	switch(pilihan) {
		case 'A':
			jenis = "Laki-laki";
		break;
		case 'N':
			jenis = "Perempuan";
		break;
		
		default:
			jenis = "Lu saapa ?";
	}
	cout << "Jenis kelamin kalian adalah" << jenis;
}
