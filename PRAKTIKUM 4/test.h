using namespace std;

class Bilangan{
	private:
		int x,y;

	public:
		void iteratif(int x,int y){
			while(!(x>y)){
				if (x%5==0 && x%7==0){
				cout<<"Hasil : "<<x<<endl;
				}
				x=x+1;	
		}
	}
};
