#include <iostream>

using namespace std;
const int MAX = 10;
struct TumpukanBuku {
    int top;
    int antrian[MAX];
} perpus;

void inisialisasi () {
    perpus.top = -1;
}

bool kondisiKosong () {
    return perpus.top == -1;
} 

bool kondisiPenuh () {
    return perpus.top == MAX - 1;
}

void inputData () {
    if (kondisiPenuh()) {
        cout << "\nAntrian penuh\n";
    } else {
        perpus.top++;
        cout << "Masukkan Antrian = ";
        cin >> perpus.antrian[perpus.top];
        cout << "Antrian " << perpus.antrian[perpus.top] << " telah masuk ke tumpukan buku" << endl;
    }
}

void hapusData () {
    if (kondisiKosong()) {
        cout << "\nAntrian kosong\n";
    } else {
        cout << "\nAntrian " << perpus.antrian[perpus.top] << " telah dihapus" << endl;
        perpus.top--;
    }
}

void tampilData () {
    if (kondisiKosong())
    {
        cout << "\nAntrian kosong\n";
    } else {
        cout << "\nAntrian : ";
        for (int i = perpus.top; i >= 0; i--)
        {
            cout << perpus.antrian[i] << ((i == 0) ? "" : ", ");
        }
    }   
}

int main () {
    int pilihan;
    inisialisasi();
    do {
        tampilData();
        cout << "\n1. Masukkan Data\n"
             << "2. Hapus Data\n"
             << "Masukkan Pilihan : ";
             cin >> pilihan;
             switch(pilihan) {
                case 1: 
                inputData(); 
                break;
                case 2:
                hapusData();
                break;
                default:
                cout << "\nPilihan tidak tersedia!\n";
                break;
             }
    } while (pilihan != 3);
}