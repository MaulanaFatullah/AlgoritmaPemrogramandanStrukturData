#include <iostream>

using namespace std;

int main () {
	int i, nilai[5], *ptrnilai;
	
	ptrnilai = nilai;
	
	for(i = 1; i <= 5; i++) {
		cout << "Masukkan nilai elemen ke-" << i << " = ";
		cin >> nilai[i];
	}	
	cout << endl ;
	cout << "Hasil pengaksesan elemen array lewat Pointer" << endl << endl;
	
	for(i = 1; i <= 5; i++) {
		cout << "Elemen " << i << ", nilai "<< nilai[i] << endl;
		
	}
	getchar();
	return 0;
}
