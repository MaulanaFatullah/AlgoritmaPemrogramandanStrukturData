#include <iostream>

using namespace std;

int main() {
    int value;

    cout << "Masukkan bilangan: ";
    cin >> value;

    int *pointer = &value;

    if (*pointer % 2 == 0) {
        cout << *pointer << " " << *pointer + 1 << " " << *pointer << endl;
    } else {
        cout << *pointer << " merupakan bilangan ganjil" << endl;
    }

    return 0;
}
