#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	double tot_beli=50000, potongan=10000, jum_bayar=50000
	;cout<<"Total Pembelian RP.";
	cin>>tot_beli;
	if (tot_beli>=50000)
	potongan = 0.2 * tot_beli;
	;cout<<"Besarnya Potongan RP. "<<potongan<<endl;
	jum_bayar = tot_beli - potongan;
	;cout<<"Jumlah yang harus dibayarkan RP."<<jum_bayar;
	getch();
}
