#include <iostream>
#include <conio.h>

using namespace std;

int main () {

    int i, x, z, prima, a;

    z = 0;
    cout << "Number 1." << endl;
    for (i = 1; i <= 5; i++)
    {
        for (x = 1; x <= 5; x++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
        cout << endl;

    //Pembatas
    for (int a = 0; a < 40; a++) cout << "-";
    cout << endl;

    cout << "Number 2." << endl;
    cout << "(A.)" << endl;
    cout << "Program perulangan Pertama" << endl;
    for (i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    cout << "Program perulangan Kedua" << endl;
    for (i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }
    
    cout << "(B.)" << endl;
    cout << "Program perulangan Genap <= 10" << endl;
    for (i = 2; i <= 10; i+=2)
    {
        cout << i << endl;
    }
    cout << "Program perulangan Ganjil < 10" << endl;
    for (i = 1; i <= 10; i+=2)
    {
        cout << i << endl;
    }

    //Pembatas
    for (int a = 0; a < 40; a++) cout << "=";
    cout << endl;

    cout << "Program perulangan Genap <= 20" << endl;
    for (i = 2; i <= 20; i+=2)
    {
        cout << i << endl;
    }
    cout << "Program perulangan Ganjil < 20" << endl;
    for (i = 1; i <= 20; i+=2)
    {
        cout << i << endl;
    }

    //Pembatas
    for (int a = 0; a < 40; a++) cout << "-";
    cout << endl;

    for (i = 0; i <= 5; i++)
    {
        cout << "\nMasukkan angka :";
        cin >> prima;

        for (x = 1; x <= prima; x++)
        {
            if (prima % x == 0)
            {
                z++;
            }
        }
        
        if (z <= 2)
        {
            cout << prima << " Termasuk bilangan PRIMA";
        } else {
            cout << "Bukan termasuk bilangan prima";
        }
        z = 0;

        getch();
    }

    cout << "\n\nBelah Ketupat" << endl;
    cout << "Masukkan angka : ";
    cin >> a;
    for (i = 0; i <= a; i++)
    {
        for (int c = 0; c <= a-i; c++)
        {
            cout << "* ";
        }
        for (int c = 0; c < i; c++)
        {
            cout << "  ";
        }
        for (int c = 0; c < i; c++)
        {
            cout << "  ";
        }
        for (int c = 0; c <= a-i; c++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    for (i = 0; i <= a; i++)
    {
        for (int c = 0; c <= i; c++)
        {
            cout << "* ";
        }
        for (int c = 0; c < a-i; c++)
        {
            cout << "  ";
        }
        for (int c = 0; c < a-i; c++)
        {
            cout << "  ";
        }
        for (int c = 0; c <= i; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }    
}
