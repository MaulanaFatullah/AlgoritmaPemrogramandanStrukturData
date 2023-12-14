#include <iostream>

using namespace std;

int main () {
	int ilham, amir, *raka;
	ilham = 75;
	amir = ilham;
	raka = &ilham;
	
	cout << "Nilai ILHAM " << ilham << endl;
	cout << "Nilai AMIR " << amir << endl;
	cout << "Nilai RAKA " << raka << endl;
	getchar();
	return 0;
}
