#include <iostream>

using namespace std;
struct siswa {
	int no_induk;
	string nama;
	float nilai;
};

int main () {
	siswa Jery =  {1, "Jery Januar", 85.5};
	siswa tono =  {2, "Tono Laksono", 89.9};
	
	cout << Jery.nama << " mendapatkan nilai " << Jery.nilai << endl;
	cout << tono.nama << " mendapatkan nilai " << tono.nilai << endl;
	return 0;
}
