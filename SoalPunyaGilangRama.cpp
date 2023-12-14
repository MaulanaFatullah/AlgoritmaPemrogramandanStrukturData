#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string
        menu[5] = {"Kopi", "Susu", "Teh", "Aqua", "Matcha"},
        namaMenu;

    int pilihan,
        // cek,
        maxMenu = 0;
    stack<string> Stack;
    do
    {
        cout << "========================================================" << endl;
        cout << "Anda Memiliki Keranjang Dengan Maksimal Menampung 3 Menu" << endl;
        cout << "========================================================" << endl;

        cout << "[1] Masukkan menu kedalam keranjang (Push)" << endl;
        cout << "[2] Hapus menu terakhir dari keranjang (Pop)" << endl;
        cout << "Input Pilihan : ";
        cin >> pilihan;
        cout << "\n\n";
        switch (pilihan)
        {
        case 1:
            cout << "Menu Yang Tersedia\n";
            cout << "------------------\n";
            for (int i = 0; i < 5; i++)
            {
                cout << menu[i] << endl;
            }
            cout << "\nKetikkan Nama Menu: ";
            cin >> namaMenu;
            Stack.push(namaMenu);

            cout << "==================" << endl;
            cout << "Isi Keranjang Anda" << endl;
            cout << "==================" << endl;
            if (!Stack.empty())
            {
                stack<string> tempStack;
                while (!Stack.empty())
                {
                    cout << Stack.top() << "\n";
                    tempStack.push(Stack.top());
                    Stack.pop();
                }

                // Memasukkan kembali elemen-elemen ke dalam stack agar tidak kehilangan datanya
                while (!tempStack.empty())
                {
                    Stack.push(tempStack.top());
                    tempStack.pop();
                }
            }
            maxMenu++;
            break;
        case 2:
            Stack.pop();
            cout << "\nKeranjang/stack kosong\n";
            cout << "======================================================\n";
            cout << "Isi Keranjang Anda\n";
            cout << "======================================================\n";
            if (!Stack.empty())
            {
                stack<string> tempStack;
                while (!Stack.empty())
                {
                    cout << Stack.top() << "\n";
                    tempStack.push(Stack.top());
                    Stack.pop();
                }

                // Memasukkan kembali elemen-elemen ke dalam stack agar tidak kehilangan datanya
                while (!tempStack.empty())
                {
                    Stack.push(tempStack.top());
                    tempStack.pop();
                }
            }
            cout << "======================================================\n";
            break;
        }
        cout << "\n\n";
    } while (maxMenu != 3);
}
