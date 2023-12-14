#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;
void garis(int count, char character) {
    cout << endl;
    for (int i = 0; i <= count; i++)
    {
        cout << character;
    }
    cout << endl;
    
}

double luasPersegiReturn(double sisi) {
    return sisi * sisi;
}

void luasPersegiVoid(double luasPersegi) {
    cout << "Luas persegi: " << luasPersegi << "cm" << endl;
}

double luasLingkaranReturn(double jari_jari) {
    return M_PI * pow(jari_jari, 2);
}

void luasLingkaranVoid(double luasLingkaran) {
    cout << "Luas lingkaran adalah: " << luasLingkaran << "cm3" << endl;
}

double volumeTabungReturn (double jari_jari, double tinggi) {
    return luasLingkaranReturn(jari_jari) * tinggi;
}

void volumeTabungVoid (double volumeTabung) {
    cout << "Volume tabung adalah: " << volumeTabung << "cm3" << endl;
}
int main() {
    for (int i = 1; i <= 3; ++i) {
        double sisi, jari_jari, tinggi;
        garis(7, '-');
        cout << "| No." << i << " |";
        garis(7, '-');
        cout << "Luas Persegi " << endl;
        cout << "Masukkan nilai sisi persegi: ";
        cin >> sisi;


        double luasPersegi = luasPersegiReturn(sisi);

        luasPersegiVoid(luasPersegi);

        garis(25, '=');

        cout << "Luas Lingkaran " << endl;
        cout << "Masukkan nilai jari-jari: ";
        cin >> jari_jari;

        
        double luasLingkaran = luasLingkaranReturn(jari_jari);

        luasLingkaranVoid(luasLingkaran);

        garis(25, '=');

        cout << "Volume Tabung " << endl;
        cout << "Masukkan nilai jari-jari: ";
        cin >> jari_jari;
        cout << "Masukkan nilai tinggi: ";
        cin >> tinggi;

        
        double volumeTabung = volumeTabungReturn(jari_jari, tinggi);

        volumeTabungVoid(volumeTabung);

        cout << endl;
    }

    return 0;
}
