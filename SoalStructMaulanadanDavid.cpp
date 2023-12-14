#include <bits/stdc++.h>
//#include <stack>
//#include <iostream>
using namespace std;

double hitungPostfix(string expression)
{
    stack <double> Stack;

    // Hitung setiap karakter yang diinputkan dan looping sebanyak karakter yang diinputkan
    for (size_t i = 0; i < expression.length(); i++)
    {
        // Jika nilai nya berupa bilangan, masukkan angka ke dalam stack
        if (isdigit(expression[i]))
        {
            Stack.push(expression[i] - '0');
            // '0' digunakan untuk konversi nilai dari ASCII ke nilai yang sesuai dengan yang di inputkan
            // Jika tidak menggunakan '0' maka nilai yang di inputkan akan berupa bilangan ASCII
            // ASCII untuk angka '0' = 48, '1' = 49, '2' = 50, dst.
        }

        // Jika nilai nya berupa operator, pop dua angka paling atas dari stack dan lakukan operasi lalu push kembali hasilnya kedalam stack
        else
        {
            double op1 = Stack.top();
            Stack.pop();
            double op2 = Stack.top();
            Stack.pop();

            switch (expression[i])
            {
            case '+':
                Stack.push(op2 + op1);
                break;
            case '-':
                Stack.push(op2 - op1);
                break;
            case '*':
                Stack.push(op2 * op1);
                break;
            case '/':
                Stack.push(op2 / op1);
                break;
            }
        }
    }

    // Stack hanya akan memiliki 1 nilai berupa hasil dari postfix
    return Stack.top();
}

int main()
{
    string expression;
    cout << "Masukkan Postfix : ";
    cin >> expression;
    cout << "Hasil dari Postfix = " << hitungPostfix(expression) << endl;
    return 0;
}
