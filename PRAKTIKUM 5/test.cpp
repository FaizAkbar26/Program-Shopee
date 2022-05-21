#include<iostream>
using namespace std;

class hehe{
	public :
	  	void kuy();
  	private :
	  	string a [20];
	  	int  b[20];
	  	int bykA,i; 
	  	string nama;
	  	int nim;
	  	float total=0,jumlah, diskon;
};	  	
		void hehe::kuy(){	
	  	cout<<"\nMASUKKAN BANYAK Mata kuliah :  ";
	  	cin>>bykA; 
	  	for(i=0; i<bykA; i++){  
	  			cout<<"MASUKKAN Mata kuliah " <<i+1<<" : ";  
	  			cin>>a[i];	
	  			cout<<"Masukkan SKS : ";
	  			cin>>b[i];
	  			jumlah+=b[i];
	  			total+=12000*b[i];
	  	}
	  	diskon=total*0.15;
	  	total=total-diskon;
	  	cout<<"Masukkan Nama : ";
	  	cin>>nama;
	  	cout<<"Masukkan NIm : ";
	  	cin>>nim;
	  	cout<<"=========================================="<<endl;
	  	cout<<"Nama	: "<<nama<<endl;
	  	cout<<"NIM 	: "<<nim<<endl;
	  	cout<<"------------------------------------------"<<endl;
	  	cout<<"Mata Kuliah       SKS"<<endl;
	  	for(int i=0;i<bykA;i++){
	  		cout<<a[i]<<"           "<<b[i]<<endl;
	  	}
	  	cout<<"------------------------------------------"<<endl;
	  	cout<<"Jumlah SKS : "<<jumlah<<endl;
	  	cout<<"Total Pembayaran : "<<total;
	  }

	
int main(){
	hehe::kuy();
}
