#include <iostream>

using namespace std;

int main () {
	int ilham, *raka, **amir;
	
	ilham = 75;
	cout << "Nilai ILHAM " << ilham << endl;
	raka = &ilham;
	amir = &raka;
	
	cout << "Nilai RAKA hasil mengakses ILHAM " << *raka << endl;
	cout << "Nilai AMIR hasil mengakses ILHAM " << **amir << endl;	
	getchar();
	return 0;
}
