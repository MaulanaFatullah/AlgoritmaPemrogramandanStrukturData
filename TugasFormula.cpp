#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	
	string cm = "cm";
	double luas, pi = 3.14;
	//Luas Segitiga
	for (int i = 1; i <= 2; i++)
	{
		double a, t;
		cout << "\n\tMenghitung Luas Segitiga ke-" << i << endl;
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
		cout << "| Masukkan Nilai Alas : ";
		cin >> a;
		cout << "| Masukkan Nilai Tinggi : ";
		cin >> t;

		cout << "\n| - Luas Segitiga yang diketahui" << endl;
		cout << "| Alas : " << a << cm << endl;
		cout << "| Tinggi : " << t << cm << endl;

		cout << "\n| - Rumus" << endl;
		luas = a * t / 2;
		cout << "| L = (a x t)/2" << endl;
		cout << "| L = "  << "(" << a << "x" << t << ")/2" << endl;
		cout << "| L = "  << luas << cm << endl;
		cout << "| Jadi, Luas Segitiga adalah " << luas << cm << endl;
		cout << "============================================" << endl;

		cout << "\nTekan tombol keyboard untuk melanjutkan\n";
		getch();
		cout << "////////////////////////////////////////////////" << endl;

	}

	// //Luas Lingkaran
	for (int i = 1; i <= 2; i++)
	{
		double r;
		cout << "\n\tMenghitung Luas Lingkaran ke-" << i << endl;
		cout << "ooooooooooooooooooooooooooooooooooooooooooooooo\n";
		cout << "| Masukkan Nilai Jari-jari : ";
		cin >> r;


		cout << "\n| - Luas Lingkaran yang diketahui" << endl;
		cout << "| Jari-jari : " << r << cm << endl;

		cout << "\n| - Rumus" << endl;
		luas = pi * r * r;
		cout << "| L = pi x r x r" << endl;
		cout << "| L = " << pi << " x " << r << " x " << r << endl;
		cout << "| Jadi, Luas Lingkaran adalah " << luas << cm << "^2" << endl;
		cout << "============================================" << endl;

		cout << "\nTekan tombol keyboard untuk melanjutkan\n";
		getch();
		cout << "////////////////////////////////////////////////" << endl;

	}

	//Volume Tabung
	for (int i = 1; i <= 2; i++)
	{
		double volume, r, t;
		cout << "\n\tMenghitung Volume Tabung ke-" << i << endl;
		cout << "(==)(==)(==)(==)(==)(==)(==)(==)(==)(==)(==)\n";
		cout << "| Masukkan Nilai Jari-jari : ";
		cin >> r;
		cout << "| Masukkan Nilai Tinggi : ";
		cin >> t;


		cout << "\n| - Volume Tabung yang diketahui" << endl;
		cout << "| Jari-jari : " << r << cm << endl;
		cout << "| Tinggi : " << t << cm << endl;

		cout << "\n| - Rumus" << endl;
		volume = pi * r * r * t;
		cout << "| V = pi x r x r x t" << endl;
		cout << "| V = " << pi << " x " << r << " x " << r << " x " << t << endl;
		cout << "| Jadi, Volume Tabung adalah " << volume << cm << "^3" << endl;
		cout << "============================================" << endl;

		cout << "\nTekan tombol keyboard untuk melanjutkan\n";
		getch();
		cout << "////////////////////////////////////////////////" << endl;

	}
	
	//Volume Balok
	for (int i = 1; i <= 2; i++)
	{
		double volume, p, l , t;
		cout << "\n\tMenghitung Volume Balok ke-" << i << endl;
		cout << "(==)(==)(==)(==)(==)(==)(==)(==)(==)(==)(==)\n";
		cout << "| Masukkan Nilai Panjang : ";
		cin >> p;
		cout << "| Masukkan Nilai Lebar : ";
		cin >> l;
		cout << "| Masukkan Nilai Tinggi : ";
		cin >> t;


		cout << "\n| - Lebar Lingkaran yang diketahui" << endl;
		cout << "| Panjang : " << p << cm << endl;
		cout << "| Lebar : " << l << cm << endl;
		cout << "| Tinggi : " << t << cm << endl;

		cout << "\n| - Rumus" << endl;
		volume = p * l * t;
		cout << "| V = p x l x t" << endl;
		cout << "| V = " << p << " x " << l << " x " << t << endl;
		cout << "| Jadi, Volume Balok adalah " << volume << cm << "^3" << endl;
		cout << "============================================" << endl;

		cout << "\nTekan tombol keyboard untuk melanjutkan\n";
		getch();
		cout << "////////////////////////////////////////////////" << endl;

	}
	
	return 0;
}
