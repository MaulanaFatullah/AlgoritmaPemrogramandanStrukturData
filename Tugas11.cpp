#include <iostream>

using namespace std;
int bayarSPP(int sks)
{
    if (sks >= 1 && sks <= 30)
    {
        return 25000 + bayarSPP(sks - 1);
    }
    else
    {
        return 0;
    }
}
struct mhs
{
    string nama, matkul;
    int sks, nim;
};

mhs bayar[2];
int main()
{
    int sks, sppVar, tetap, var, cek,
        // bts,
        sppAwal = 250000;
    for (int i = 0; i < 2; i++)
    {
        // input data
        do
        {
            cout << "\n\n-------------------------\n";

            cout << "Masukkan Nama Mahasiswa\t: ";
            getline(cin >> ws, bayar[i].nama);

            cout << "\t NIM Mahasiswa\t: ";
            cin >> bayar[i].nim;
            cout << "\t Mata Kuliah\t: ";
            getline(cin >> ws, bayar[i].matkul);
            cout << "\t Jumlah SKS\t: ";
            cin >> bayar[i].sks;
            cout << endl;

            sks = bayar[i].sks;
            sppVar = bayarSPP(sks);
            tetap = sppAwal + sppVar;
            // output data
            cout << "\n==============================\n";
            cout << "Output Data" << endl;
            cout << "\n==============================\n";
            cout << "Nama Mahasiswa\t: " << bayar[i].nama << endl;
            cout << "NIM Mahasiswa\t: " << bayar[i].nim << endl;
            cout << "Mata Kuliah\t: " << bayar[i].matkul << endl;
            cout << "Jumlah SKS\t: " << bayar[i].sks << endl;

            if (sks > 30)
            {
                cek = 0;
                cout << "\n////////////////////\n";
                cout << "SKS Melebihi 30!" << endl;
                cout << "////////////////////\n";
            } else if (sks < 0) {
            	cek = 0;
                cout << "\n++++++++++++++++++++++++++\n";
                cout << "SKS tidak boleh dibawah 0!" << endl;
                cout << "++++++++++++++++++++++++++\n";
			}
            else
            {
                cek = 1;
                var = tetap * sks;
                cout << "SPP Tetap\t: Rp." << tetap << endl;
                cout << "SPP Variabel\t: Rp." << var << endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            }
        } while (cek != 1);
    }
}
