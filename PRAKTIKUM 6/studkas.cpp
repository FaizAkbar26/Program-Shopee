#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string nama[10],status[10],nama_matkul[50],nama_dosen[50];
	int nilai_tugas[10];
	int nilai_uts[10];
	int nilai_uas[10];
	float rata,maxnil,minnil;

	cout<<"Masukan Jumlah Data = ";
	cin>>n;

	for (int i=0; i<n; i++) {
		cout<<endl;
		cout<<"Mahasiswa ke- "<<i+1<<endl;
		cout<<"Masukan Nama = ";
		cin>>nama[i];
		cout<<"Masukan Nilai Tugas = ";
		cin>>nilai_tugas[i];
		cout<<"Masukan Nilai UTS = ";
		cin>>nilai_uts[i];
		cout<<"Masukan Nilai UAS = ";
		cin>>nilai_uas[i];	
	}
	cout<<endl<<endl;
	
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"Nama Matkul : Algoritma Pemrograman"<<endl;
	cout<<"Nama Dosen  : Dr., Ir. Ardi Pujiyanta, M. T."<<endl;
	for (int i=0; i<n;i++) {
	int total[i]={};	
	total[i] = nilai_tugas[i]+nilai_uts[i]+nilai_uas[i];
  	rata = (total[i]/3);
	cout<<endl;
		cout<<"Nama        : "<<nama[i]<<endl;
		cout<<"Nilai Tugas : "<<nilai_tugas[i]<<endl;
		cout<<"Nilai UTS   : "<<nilai_uts[i]<<endl;
		cout<<"Nilai UAS   : "<<nilai_uas[i]<<endl;
		cout<<"Nilai Rata2 : "<<rata<<endl;
		
	}
	return 0;
}
