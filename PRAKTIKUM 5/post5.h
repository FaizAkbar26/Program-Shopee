using namespace std;

class hitung
{
	public:
		void input ();
		int proses ();
		
		private:
		int n;
		float rumus,jumlah,total;
};
void hitung :: input()
{
	cin>>n;
	cout<<endl;
}
int hitung::proses()
{
	jumlah=0; total=0;
	rumus=-1;
	for (int j=1; j<=n; j++){
		rumus=(rumus*(-1));
		total=rumus/j;
		jumlah+=total; 
		if(j==1)
			cout<<"("<<total <<")"; 
		if(j>1)
			cout<<"+("<<total <<")";
	}
	cout<<endl<<endl<<"Hasil penjumlahan deret = "<<jumlah;
	return jumlah;
}
