#include <iostream>

using namespace std;

int main () {
	char band_metal[] = "SEPULTURA";
	char *band_punk = "RANCID";
	cout << "Nama band metal = " << band_metal << endl;
	cout << "Nama band punk = " << band_punk;
	band_punk +=3;
	cout << "Nama band metal = " << band_metal << endl;
	cout << "Nama band punk = " << band_punk;
	getchar();
	return 0;
}
