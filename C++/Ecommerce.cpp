#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class olshop{
  public: 
    void input();
    void proses();
    void output();
  private:
    char lagi;
    string user, pass, alamat,proteksi,barang[100];
    int i, j, saldo=200000, pil, jumlah[100], ongkir, total, exp;
    float totalhrga,voucher=5000, total2, totsaldo, 
    totongkir, th;
};

void olshop::input(){
  cout << "------------------------------------------------------\n";
  cout << "\tSelamat Datang Di Shopee \n";  
  cout << "-----------------------------------------------------\n";
  int login=0;
  i = 1;;
  do {
       cout << "Username : "; cin >> user;
       cout << "Password : "; cin >> pass;
       if (user =="rijal" && pass =="2100018336"){
           cout << "--------------------\n";
           cout << "Anda Berhasil Login" <<endl;
           cout << "--------------------\n\n";
           i=4;
           login=1;
      }
      else {
           cout << "------------------------\n";          
           cout << "Maaf ID & PASSWORD Salah!" <<endl;
       cout << "-------------------------\n\n";          
           i = i +1;
      }
  }while (i <= 3);
  if(login != 1){
    cout<<"Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
    cout << "Mohon Maaf Akun Anda Kami Blokir Untuk Sementara\n";
    cout<<"Silahkan hubungi pihak Shopee di ig terima kasih";
    }
   system("CLS");
  cout<<"Ini saldo ShopeePay Anda: Rp."<<saldo;
  cout<<"\n-------------------------------\n";
  cout<<"TOSERBA Official Shop v \n";
  cout<<"-------------------------------\n";
  cout<<"-------------------------------\n";
  cout<<"Daftar Produk\n";
  cout<<"1.Stiker Asthetic Dinding\n";\
  cout<<"Rp. 10.000\n";
  cout<<"---------------------------\n";
  cout<<"2.Pena\n";
  cout<<"Rp. 3.000\n";
  cout<<"---------------------------\n";
  cout<<"3.Mouse\n";
  cout<<"Rp. 70.000\n";
   i=0;
  do{
  cout<<"\nPilih Barang: ";cin>>pil;
  if(pil==1){
    barang[i]="Stiker Asthetic Dinding";
    cout<<"Harga Stiker Asthetic Dinding: Rp. 10.000\n";
    cout<<"Masukkan Jumlah Barang di Keranjang: ";cin>>jumlah[i];
    total=jumlah[i]*10000;
    totalhrga+=total;
  }
  else if(pil==2){
    barang[i]="Pena";
    cout<<"Harga Pena: Rp. 3.000\n";
    cout<<"Masukkan Jumlah Barang di Keranjang: ";cin>>jumlah[i];
    total=jumlah[i]*3000;
    totalhrga+=total;
  }
  else if(pil==3){
    barang[i]="Mouse";
    cout<<"Harga Mouse: Rp. 70.000\n";
    cout<<"Masukkan Jumlah Barang di Keranjang: ";cin>>jumlah[i];
    total=jumlah[i]*70000;
    totalhrga+=total;
  }
  total=0;
  cout<<"\nIngin pilih barang lagi?[y/t]: ";
  cin>>lagi;
    i++;
    }while(lagi=='y');
  
  system("CLS");
  
  cout<<"TOTAL HARGA: "<<totalhrga<<endl;
  cout<<"Masukkan Alamat Anda (pulau): ";
  cin>>alamat;
  cout<<"--------------------------\n";
  cout<<"Pilih Jenis Ekspedisi Pengiriman :\n";
  cout<<"1. JNE\n";
  cout<<"2. J&T\n";
  cout<<"3. SiCepat\n";
  cout<<"Masukkan Pilihan Ekspedisi Pengiriman : ";cin>>exp;
  switch (exp){
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

void olshop::proses(){
  cout<<"-------------------------\n";
  cout<<"Gunakan voucher diskon toko= Rp 5.000\n";
  cout<<"-------------------------\n";
  total2=totalhrga-voucher;
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
    totongkir=ongkir-20000;
    cout<<"Voucher digunakan\n";
  }
  else if (total2<=30000){
    totongkir=ongkir;
    cout<<"Minimal Belanja Belum Mencukupi\n";
  }
  th=total2+totongkir;
  cout<<"-------------------------\n";
  cout<<"TOTAL HARGA: "<<th<<endl;
  cout<<"-------------------------\n";

  totsaldo=saldo-th;
  cout<<"Sisa saldo shopeepay anda : "<<totsaldo<<endl;
  cout<<"-------------------------\n";
  i=0;
};

void olshop::output(){

ofstream myfile;

       myfile.open("TEST1.txt", ios::app);

       cout<<"OPERASI FILE 1"<<endl;
       cout<<"--------------"<<endl;

       if(!myfile.fail()){   
     myfile<<"------------------------------------------------------"<<endl;
     myfile<<"\t            Struk Chekout"<<endl;
     myfile<<"------------------------------------------------------"<<endl;
         myfile<<"Pengirim        : TOSERBA Official Shop"<<endl;
         myfile<<"Nama Penerima   : "<<user<<endl;
         myfile<<"Alamat Penerima : "<<alamat<<endl;
         myfile<<"Nama Barang yang di pesan : \n"<<barang[i]<<"\t Jumlah : "<<jumlah[i]<<endl;
         myfile<<"\n "<<barang[i+1]<<"\t Jumlah : "<<jumlah[i+1]<<endl;
         myfile<<" \n"<<barang[i+2]<<"\t Jumlah : "<<jumlah[i+2]<<endl;
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
  olshop run;
  run.input();
  run.proses();
  run.output();
     
};
