#include<iostream>
#include "post5.h"
using namespace std;

int main()
{
	cout<<"program sederhana menghitung jumlah dari rumus 1- (1/2) + (1/3) - (1/4) + ... + (1/n)"<<endl<<endl;
	cout<<"Tentukan nilai n : ";
	hitung deret;
	deret.input(); 
	deret.proses(); 
	return 0;
}


