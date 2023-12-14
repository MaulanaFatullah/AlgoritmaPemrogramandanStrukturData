#include <iostream>

using namespace std;

int main () {
	int yofrie = 93;
	int *hadiansyah;
	
	cout << "Nilai awal yofrie " << yofrie << endl;
	hadiansyah = &yofrie;
	cout << "Nilai hadiansyah sekarang " << *hadiansyah << endl;
	*hadiansyah = 50;
	cout << "Nilai hadiansyah sekarang " << *hadiansyah;
	getchar();
	return 0;
}
