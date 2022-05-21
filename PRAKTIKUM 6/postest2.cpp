#include <cstdlib>
#include <iostream>
#include "geser.h"
using namespace std;

int main(){
	int pilihan;
	cout<<"PROGRAM MENGGESER ARRAY KE KANAN/KIRI"<<endl;
	cout<<"Pilihan : "<<endl;
	cout<<" 1.) Menggeser ke kanan"<<endl;
	cout<<" 2.) Menggeser ke Kiri"<<endl;
	cout<<"Pilhan kamu : ";
	cin>>pilihan;
	system("CLS");
	
 	Hitung_array proses;
 	if(pilihan==1){
 		cout<<"PROGRAM MENGGESER ARRAY KE KANAN"<<endl;
		cin>>proses;
 		cout<<"============================================="<<endl;
		cout<<"Isi Array saat ini               : "<<proses;
 		proses.kanan();
 		cout<<"Isi Array setelah di geser kanan : "<<proses;
 		cout<<"============================================="<<endl;
 	}
 	else{
 		cout<<"PROGRAM MENGGESER ARRAY KE KIRI"<<endl;
		cin>>proses;
		cout<<"============================================="<<endl;
 		cout<<"Isi Array saat ini              : "<<proses;
 		proses.kiri();
 		cout<<"Isi Array setelah di geser kiri : "<<proses;
 		cout<<"============================================="<<endl;
 	}
 	return 0;
}
