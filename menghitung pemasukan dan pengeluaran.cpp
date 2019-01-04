#include<iostream>
using namespace std;

int main()
{
int pemasukan , MAX=5000;

cout<<"program menentukan pemasukan lebih besar atau kecil dari pengeluaran"<<endl;
cout<<"masukan nilai pemasukan"<<endl;
cin>>pemasukan;

if (pemasukan > MAX)
	cout<<"pemasukan lebih besar dari pengeluaran:";
	else
		cout<<"pemasukan lebih kecil dari pengeluaran:";
	return 0;
}
