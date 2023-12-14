#include <iostream>

using namespace std; //seluruh baris kode dalam berkas terkait secara default akan menggunakan kelas, metode, atribut dari namespace std
int main() //fungsi utama dan blok code yang akan dieksekusi saat program dijalankan
{ //kurung kurawal buka untuk int main
int x, bil = 0; //tipe data x dengan variabel x dan bil yang mempunyai nilai 0
cout << "Masukan bilangan pembatas akhir : "; //output dengan isi "Masukan bilangan pembatas akhir : "
cin >> x; //inputan untuk variable x
do //fungsi do pada do-while yang akan dieksekusi 1 kali walaupun kondisi tidak terpenuhi
{ //kurung kurawal buka untuk do
if (bil >= x) //kondisi jika nilai variable bil lebih dari atau sama dengan nilai variable x
break; //mengakhiri eksekusi perulangan penutup terdekat atau pernyataan bersyar di mana pernyataan tersebut muncul
cout<<bil<<" "; //output dengan isi dari nilai variable bil dan space(spasi)
} //kurung kurawal tutup untuk do
while(bil+=4); //pengulangan atau looping menggunakan while yang mana nilai variable bil ditambahkan dengan 4
getchar(); //kepanjangan dari get character. Fungsinya sama dengan fungsi getche(), namun jika kita menggunakan fungsi ini user harus mengakhiri inputan dengan tombol enter
} //kurung kurawal tutup untuk int main
