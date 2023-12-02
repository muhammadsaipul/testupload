#include <iostream>
using namespace std;

int umur[] = {18, 19, 20, 21, 22};
int n, hasil=0;

int main ()
{
	cout<<"----------------------------------------"<<endl;
	cout<<"Nama       : Muhammad Saipul              "<<endl;
	cout<<"NPM        : 2110010199                 "<<endl;
	cout<<"Kelas      : 3O Reg BJM                 "<<endl;
	cout<<"program    : array1dimensi.cpp                  "<<endl;
	cout<<"Dibuat Tgl : Selasa 20 Desember 2022		   "<<endl;
	cout<<"----------------------------------------"<<endl<<endl;
	for ( n=0; n<5; ++n )
	{
		hasil+= umur[n];
	}
	cout << hasil;
	return 0;
}

