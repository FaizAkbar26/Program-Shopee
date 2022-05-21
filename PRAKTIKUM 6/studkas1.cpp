#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string nama[10],status[10],nama_matkul[50],nama_dosen[50];
	int nilai_tugas1[10];
	int nilai_tugas2[10];
	int nilai_tugas3[10];

	float rata,maxnil,minnil;

	cout<<"Masukan Jumlah Data = ";
	cin>>n;

	for (int i=0; i<n; i++) {
		cout<<endl;
		cout<<"Mahasiswa ke- "<<i+1<<endl;
		cout<<"Masukan Nama = ";
		cin>>nama[i];
		cout<<"Masukan Nilai Tugas 1 = ";
		cin>>nilai_tugas1[i];
		cout<<"Masukan Nilai Tugas 2 = ";
		cin>>nilai_tugas2[i];
		cout<<"Masukan Nilai Tugas 3 = ";
		cin>>nilai_tugas3[i];
	
	}	
	cout<<endl<<endl;
	
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"Nama Matkul : Algoritma Pemrograman"<<endl;
	cout<<"Nama Dosen  : Dr., Ir. Ardi Pujiyanta, M. T."<<endl;
	for (int i=0; i<n;i++) {
	cout<<endl;
	int total[i]={};	
	total[i] = nilai_tugas1[i]+nilai_tugas2[i]+nilai_tugas3[i];
  	rata = (total[i]/3);
	cout<<"Nama           : "<<nama[i]<<endl;
	cout<<"Nilai Tugas 1  : "<<nilai_tugas1[i]<<endl;
	cout<<"Nilai Tugas 2  : "<<nilai_tugas2[i]<<endl;
	cout<<"Nilai Tugas 3  : "<<nilai_tugas3[i]<<endl;
	cout<<"Nilai Rata2    : "<<rata<<endl;
	
		
	}
	return 0;
}
