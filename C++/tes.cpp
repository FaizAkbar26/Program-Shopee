#include<iostream>
using namespace std;

main(){
	int j,i,uang,liter,bensin,jumlah,harga;
	
	cout<<"Inputkan i : ";
	cin>>i;
	bensin=7400;
	j=0;
	if(i==1){	
		cout<<"Masukkan Uang : ";
		cin>>uang;
		jumlah=uang/bensin;
		cout<<"Jumlahnya adalah"<<jumlah<<endl;
	}
	else
		cout<<"Masukkan Liter : ";
		cin>>liter;
		for(j=0;j<=liter;j++)
			j=j+0,1;
			harga=j*bensin;
			cout<<"Harganya adalah : "<<harga<<endl;
	}
