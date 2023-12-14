#include <iostream>

using namespace std;

int main () {
struct dtmhs {
	char nim[9];
	char nama[15];
};

struct dtnl {
	float nil1;
	float nil2;
};

struct {
	struct dtmhs mhs;
	struct dtnl nil;
} nilai;
	
cout << "Masukkan NIM = " << endl;
cin >> nilai.mhs.nim;
cout << "Masukkan Nama = " << endl;
cin >> nilai.mhs.nama;
cout << "Masukkan Nilai UTS = " << endl;
cin >> nilai.nil.nil1;
cout << "Masukkan Nilai UAS = " << endl;
cin >> nilai.nil.nil2;
cout << endl;

cout << "NIM = " << nilai.mhs.nim;
cout << "Nama = " << nilai.mhs.nama;
cout << "Nilai UTS = " << nilai.nil.nil1;
cout << "Nilai UAS = " << nilai.nil.nil2;
cout << endl;


	return 0;
}
