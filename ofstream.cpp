#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 ofstream myfile;
 myfile.open("TEST.txt", ios::app);
 cout<<"OPERASI FILE OFSTREAM"<<endl;
 cout<<"--------------"<<endl;
 if(!myfile.fail())
 {
 myfile<<"Maulana Fatullah"<<endl;
 myfile.close();
 cout<<"Text telah ditulis ke dalam File"<<endl;
 }else{
 cout<<"File tidak ditemukan"<<endl;
 }
 getchar();
 return 0;
}
