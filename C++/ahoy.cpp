#include <iostream>
#include <fstream>
using namespace std;

class syiap{
	public:
		void INPUT();
		void PROCESS();
		void OUTPUT();
	
	private: 
		int saldo=1000000;
		string item[1000];
		int jumlah[1000];
		string username;    
	   	int password;    
	   	int i; 
	   	string user ="faiz";    
	   	int pass = 12345;    
	   	int login=0; 
	   	int pilihan;
	   	char pil;
	   	int total,total_hrg;
	   	string alamat,proteksi;
	   	int ekspedisi,ongkir,total_ongkir;
	   	int voucher=5000;
	   	int total2,th,total_saldo;
};

void syiap::INPUT(){
	cout << "------------------------------------------\n";    
	cout << "\t       APLIKASI SHOPPE \n"; 
   	cout << "\t     Login akun Anda \n";    
   	cout << "------------------------------------------\n\n";  
 	cout << "Username : "; cin >> username;        
 	cout << "Password : "; cin >> password;        
    	if (username ==user && password == pass) {            
        	cout << "\n--------------------\n";            
        	cout << "Anda Berhasil Login" << endl;            
        	cout << "--------------------\n\n";            
        	i=4;            
        	login=1;        } 
    	else {            
           cout << "\n------------------------\n";            
           cout << "Maaf ID & PASSWORD Salah!" << endl;                         
		   cout << "-------------------------\n\n";            
           i = i +1;      
       }
  system("CLS");
  cout<<"Ini saldo ShopeePay Anda: Rp."<<saldo;
  cout<<"\n-------------------------------\n";
  cout<<"TOSERBA Official Shop v \n";
  cout<<"-------------------------------\n";
  cout<<"-------------------------------\n";
  cout<<"Daftar Produk\n";
  cout<<"1.Stiker Asthetic Dinding\n";
  cout<<"Rp. 10.000\n";
  cout<<"---------------------------\n";
  cout<<"2.Pena\n";
  cout<<"Rp. 3.000\n";
  cout<<"---------------------------\n";
  cout<<"3.Mouse\n";
  cout<<"Rp. 70.000\n";
   i=0;
  do{
  cout<<"\nPilih Barang: ";cin>>pilihan;
  if(pilihan == 1){
    item[i]="Stiker Asthetic Dinding";
    cout<<"Harga Stiker Asthetic Dinding: Rp. 10.000\n";
    cout<<"Masukkan Jumlah Barang di Keranjang: ";cin>>jumlah[i];
    total=jumlah[i]*10000;
    total_hrg+=total;
  }
  else if(pilihan==2){
    item[i]="Pena";
    cout<<"Harga Pena: Rp. 3.000\n";
    cout<<"Masukkan Jumlah Barang di Keranjang: ";cin>>jumlah[i];
    total=jumlah[i]*3000;
    total_hrg+=total;
  }
  else if(pilihan==3){
    item[i]="Mouse";
    cout<<"Harga Mouse: Rp. 70.000\n";
    cout<<"Masukkan Jumlah Barang di Keranjang: ";cin>>jumlah[i];
    total=jumlah[i]*70000;
    total_hrg+=total;
  }
  total=0;
  cout<<"\nIngin pilih barang lagi?[y/t]: ";
  cin>>pil;
    i++;
    }while(pil=='y');
  
  system("CLS");
  
  cout<<"TOTAL HARGA: "<< total_hrg <<endl;
  cout<<"Masukkan Alamat Anda (pulau): ";
  cin>>alamat;
  cout<<"--------------------------\n";
  cout<<"Pilih Jenis Ekspedisi Pengiriman :\n";
  cout<<"1. JNE\n";
  cout<<"2. J&T\n";
  cout<<"3. SiCepat\n";
  cout<<"Masukkan Pilihan Ekspedisi Pengiriman : ";cin>>ekspedisi;
  switch (ekspedisi){
    case 1:
    	if(alamat=="jawa"){
    		ongkir=20000;
    		cout<<"Ongkir: Rp 20.000\n";
    	}
    	else if(alamat!="jawa"){
    		ongkir=50000;
    		cout<<"Ongkir: Rp 50.000\n";
    	}
    	break;
    case 2:
	    if(alamat=="jawa"){
	      ongkir=18000;
	      cout<<"Ongkir: Rp 18.000\n";
	    }
	    else if(alamat!="jawa"){
	      ongkir=38000;
	      cout<<"Ongkir: Rp 38.000\n";
	    }
    	break;
    case 3:
	    if(alamat=="jawa"){
	      ongkir=22000;
	      cout<<"Ongkir: Rp 22.000\n";
	    }
	    else if(alamat!="jawa"){
	      ongkir=45000;
	      cout<<"Ongkir: Rp 45.000\n";
	    }
	    break;
  }
};  

// PROCESS

void syiap::PROCESS(){
  cout<<"-------------------------\n";
  cout<<"Gunakan voucher diskon toko= Rp 5.000\n";
  cout<<"-------------------------\n";
  total2=total_hrg-voucher;
  cout<<"-------------------------\n";
  cout<<"Penambahan Proteksi?[y/t]: ";
  cin>>proteksi;
  if(proteksi=="y"){
    total2+=3000;
  }
  cout<<"-------------------------\n";
  cout<<"-------------------------\n";
  cout<<"Voucher Gratis Ongkir (Min. Blj Rp 30.000)\n";
  if (total2>=30000){
    total_ongkir=ongkir-20000;
    cout<<"Voucher digunakan\n";
  }
  else if (total2<=30000){
    total_ongkir=ongkir;
    cout<<"Minimal Belanja Belum Mencukupi\n";
  }
  th=total2+total_ongkir;
  cout<<"-------------------------\n";
  cout<<"TOTAL HARGA: "<<th<<endl;
  cout<<"-------------------------\n";

  total_saldo=saldo-th;
  cout<<"Sisa saldo shopeepay anda : "<<total_saldo<<endl;
  cout<<"-------------------------\n";
  i=0;
};
	// OUTPUT
void syiap::OUTPUT(){

ofstream myfile;

       myfile.open("TEST2.txt", ios::app);

       cout<<"OPERASI FILE 1"<<endl;
       cout<<"--------------"<<endl;

       if(!myfile.fail()){   
     myfile<<"------------------------------------------------------"<<endl;
     myfile<<"\t            Struk Chekout"<<endl;
     myfile<<"------------------------------------------------------"<<endl;
         myfile<<"Pengirim        : TOSERBA Official Shop"<<endl;
         myfile<<"Nama Penerima   : "<<user<<endl;
         myfile<<"Alamat Penerima : "<<alamat<<endl;
         myfile<<"Nama Barang yang di pesan : \n"<<item[i]<<"\t Jumlah : "<<jumlah[i]<<endl;
         myfile<<"\n "<<item[i+1]<<"\t Jumlah : "<<jumlah[i+1]<<endl;
         myfile<<" \n"<<item[i+2]<<"\t Jumlah : "<<jumlah[i+2]<<endl;
         myfile<<"------------------------------------------------------"<<endl;
         myfile<<"Harga   : "<<th<<endl;
         myfile<<"Keterangan Barang : Lunas, Pembayaran melalui Shopeepay"<<endl;
         myfile<<"------------------------------------------------------"<<endl;
              myfile.close(); 
              cout<<"Text telah ditulis ke dalam File"<<endl;
       }
       else{
              cout<<"File tidak ditemukan"<<endl;
       }
        
}; 

int main (void){
  syiap shop;
  shop.INPUT();
  shop.PROCESS();   
  shop.OUTPUT();
};
