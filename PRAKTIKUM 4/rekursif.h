using namespace std;

class hitung{
	public:
		void rekursif(int x){
			if(x<=100){
				if(x%5==0 && x%7==0){
					cout<<"Hasil : "<<x<<endl;
				}
				rekursif(x+1);
			}
		}
	private:
		int n;
};
