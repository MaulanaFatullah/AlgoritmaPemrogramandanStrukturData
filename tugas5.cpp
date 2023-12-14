#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b,
        ganjil = 0,
        genap = 0,
        c = 3,
        d = 2,
        e = 1,
        bil
        ;

    char lagi;
atas:
    // clrscr();

    cout << "\nNomor 1).\n";
    cout << "\nMasukkan Bilangan = ";
    cin >> a;
    b = a % 2;
    printf("Nilai %d%%2 adalah = %d", a, b);
    printf("\n\nIngin Hitung lagi [Y/T] : ");
    lagi = getche();
    if (lagi == 'Y' || lagi == 'y')
    {
        goto atas;
    }
    else if (lagi == 'T' || lagi == 't')
    {
        cout << endl;
        for (int i = 0; i <= 40; i++)
            cout << "=";

        cout << endl;

        cout << "Tekan tombol keyboard untuk melanjutkan" << endl;
        getch();
        cout << "////////////////////////////////////////////////" << endl;
    }

    cout << "\nNomor 2).\n";

    cout << "\nProgram untuk menghitung 10 deret bilangan Ganjil dengan hasilnya" << endl;
    for (int i = 1; i <= 20; i += 2)
    {
        ganjil += i;
        cout << i << " + ";
    }
    cout << " = " << ganjil;

    cout << endl;
    for (int i = 0; i <= 40; i++)
        cout << "=";

    cout << endl;

    cout << "Tekan tombol keyboard untuk melanjutkan" << endl;
    getch();
    cout << "////////////////////////////////////////////////" << endl;

    cout << "\nNomor 3).\n";

    cout << "\nProgram untuk menghitung 10 deret bilangan Genap dengan hasilnya" << endl;
    for (int i = 2; i <= 20; i += 2)
    {
        genap += i;
        cout << i << " + ";
    }
    cout << " = " << genap;

    cout << endl;
    for (int i = 0; i <= 40; i++)
        cout << "=";

    cout << endl;

    cout << "Tekan tombol keyboard untuk melanjutkan" << endl;
    getch();
    cout << "////////////////////////////////////////////////" << endl;

    cout << "\nNomor 4).\n";

    cout << "\nPerbaiki Program BREAK\n";
    // Perulangan FOR dengan break;

    // clrscr();
    printf("Bil-C | Bil-D | Bil-E\n");
    printf("-------------------------");
    for (bil = 1; bil <= 10; ++bil)
    {
        c = c + d;
        d = d + e;
        e = e + 2;
        printf("\n%d \t| %d \t| %d", c, d, e);
        if (e == 13){
            break;
        }

    }
    return 0;
}
