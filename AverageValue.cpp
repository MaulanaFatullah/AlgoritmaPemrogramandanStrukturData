#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{

    string namaSiswa1, namaSiswa2, namaSiswa3;

    float nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3, avrg;

    for (int i = 1; i <= 3; i++)
    {
        // if-else
        for (int i = 0; i <= 40; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "Program Hitung Nilai Rata-rata (if-else) ke-" << i << endl;
        cout << "Nama siswa : ";
        getline(cin >> ws, namaSiswa1);
        cout << "Masukkan Nilai Pertandingan I : ";
        cin >> nilaiPertandingan1;
        cout << "Masukkan Nilai Pertandingan II : ";
        cin >> nilaiPertandingan2;
        cout << "Masukkan Nilai Pertandingan III : ";
        cin >> nilaiPertandingan3;
        cout << endl;

        avrg = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;

        if (avrg >= 85)
        {
            cout << "Siswa bernama " << namaSiswa1 << endl;
            cout << "Memperoleh Nilai rata-rata " << avrg << " dari hasil perlombaan yang diikutinya." << endl;
            cout << "\nHadiah yang didapat adalah Komputer Core i5 !" << endl;
        }
        else
        {
            if (avrg >= 70)
            {
                cout << "Siswa bernama " << namaSiswa1 << endl;
                cout << "Memperoleh Nilai rata-rata " << avrg << " dari hasil perlombaan yang diikutinya." << endl;
                cout << "\nHadiah yang didapat adalah Uang sebesar Rp. 2.500.000 !" << endl;
            }
            else
            {
                cout << "Siswa bernama " << namaSiswa1 << endl;
                cout << "Memperoleh Nilai rata-rata " << avrg << " dari hasil perlombaan yang diikutinya." << endl;
                cout << "\n" << namaSiswa1 << " mendapatkan hadiah Hiburan !" << endl;
            }
        }

        cout << endl;
        for (int i = 0; i <= 40; i++)
        {
            cout << "=";
        }
        cout << endl;

        cout << "Tekan tombol keyboard untuk melanjutkan" << endl;
        getch();
        cout << "////////////////////////////////////////////////" << endl;
    }

    for (int i = 1; i <= 3; i++)
    {
        // else if
        for (int i = 0; i <= 40; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "Program Hitung Nilai Rata-rata (else if) ke-" << i << endl;
        cout << "Nama siswa : ";
        getline(cin >> ws, namaSiswa2);
        cout << "Masukkan Nilai Pertandingan I : ";
        cin >> nilaiPertandingan1;
        cout << "Masukkan Nilai Pertandingan II : ";
        cin >> nilaiPertandingan2;
        cout << "Masukkan Nilai Pertandingan III : ";
        cin >> nilaiPertandingan3;
        cout << endl;

        avrg = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;

        if (avrg >= 85)
        {
            cout << "Siswa bernama " << namaSiswa2 << endl;
            cout << "Memperoleh Nilai rata-rata " << avrg << " dari hasil perlombaan yang diikutinya." << endl;
            cout << "\nHadiah yang didapat adalah Komputer Core i5 !" << endl;
        }
        else if (avrg >= 70)
        {
            cout << "Siswa bernama " << namaSiswa2 << endl;
            cout << "Memperoleh Nilai rata-rata " << avrg << " dari hasil perlombaan yang diikutinya." << endl;
            cout << "\nHadiah yang didapat adalah Uang sebesar Rp. 2.500.000 !" << endl;
        }
        else
        {
            cout << "Siswa bernama " << namaSiswa2 << endl;
            cout << "Memperoleh Nilai rata-rata " << avrg << " dari hasil perlombaan yang diikutinya." << endl;
            cout << "\n" << namaSiswa2 << " mendapatkan hadiah Hiburan !" << endl;
        }

        cout << endl;
        for (int i = 0; i <= 40; i++)
        {
            cout << "=";
        }
        cout << endl;

        cout << "Tekan tombol keyboard untuk melanjutkan" << endl;
        getch();
        cout << "////////////////////////////////////////////////" << endl;
    }
    for (int i = 1; i <= 3; i++)
    {
        // switch case
        for (int i = 0; i <= 40; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "Program Hitung Nilai Rata-rata (switch case) ke-" << i << endl;
        cout << "Nama siswa : ";
        getline(cin >> ws, namaSiswa3);
        cout << "Masukkan Nilai Pertandingan I : ";
        cin >> nilaiPertandingan1;
        cout << "Masukkan Nilai Pertandingan II : ";
        cin >> nilaiPertandingan2;
        cout << "Masukkan Nilai Pertandingan III : ";
        cin >> nilaiPertandingan3;
        cout << endl;

        avrg = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;
        int average = avrg;
        switch (average)
        {
        case 85 ... 100:
            cout << "Siswa bernama " << namaSiswa3 << endl;
            cout << "Memperoleh Nilai rata-rata " << avrg << " dari hasil perlombaan yang diikutinya." << endl;
            cout << "\nHadiah yang didapat adalah Komputer Core i5 !" << endl;
            break;
        case 70 ... 84:
            cout << "Siswa bernama " << namaSiswa3 << endl;
            cout << "Memperoleh Nilai rata-rata " << avrg << " dari hasil perlombaan yang diikutinya." << endl;
            cout << "\nHadiah yang didapat adalah Uang sebesar Rp. 2.500.000 !" << endl;
            break;
        default:
            cout << "Siswa bernama " << namaSiswa3 << endl;
            cout << "Memperoleh Nilai rata-rata " << avrg << " dari hasil perlombaan yang diikutinya." << endl;
            cout << "\n" << namaSiswa3 << " mendapatkan hadiah Hiburan !" << endl;
            break;
        }

        cout << endl;
        for (int i = 0; i <= 40; i++)
        {
            cout << "=";
        }
        cout << endl;

        cout << "Tekan tombol keyboard untuk melanjutkan" << endl;
        getch();
        cout << "////////////////////////////////////////////////" << endl;
    }
}
