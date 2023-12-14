#include <iostream>
using namespace std;

int pangkat(int x, int y);

int main() {
    int x, y;


    cout << "Menghitung pangkat dengan fungsi rekursif" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai y: ";
    cin >> y;


    int hasil = pangkat(x, y);


    cout << x << " dipangkatkan " << y << " = " << hasil << endl;

    return 0;
}

int pangkat(int x, int y) {

    if (y == 0) {
        // cout << x << " " << y << endl;
        return x = 1;
    }
    else {
        cout << x << " " << y << endl ;
        return x * pangkat(x, y - 1);
    }
}
