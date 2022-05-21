using namespace std;

class Hitung_array{
 	friend ostream& operator<<(ostream&, const Hitung_array&);
 	friend istream& operator>>(istream&, Hitung_array&);
 	
	public:
	 	Hitung_array();
	 	void cetak();
	 	void kanan();
	 	void kiri();

	private:
	 	char f[5];
	 	int a[5];
		int y;
		int temp;
		int i;
};

Hitung_array::Hitung_array(){
	for(int i=0;i<5;i++)
 		f[i];
}

void Hitung_array::cetak(){
 	for(int i=0;i<5;i++)
 		cout<<f[i]<<" ";
}

ostream& operator<<(ostream& out, const Hitung_array& x){
	for(int i=0;i<5;i++)
 		out<<x.f[i]<<" ";
 		out<<endl;
 		return out;
}

istream& operator>>(istream& in, Hitung_array& x){
 	for (int y=1; y<=5; y++){
	 	cout<<"Masukkan nilai array ke- "<<y<<" : ";
	 	in>>x.f[y-1];
 	}
 	return in;
}
void Hitung_array::kiri(){
 	int n=5;
 	int temp=f[0];
 	for(int i=0;i<n;i++)
 		f[i]=f[i+1];
 		f[n-1]=temp;
}
void Hitung_array::kanan(){
 	int n=5;
 	int temp=f[n-1];
 	for(int i=n-1;i>=0;i--)
 		f[i+1]=f[i];
 		f[0]=temp;
}

