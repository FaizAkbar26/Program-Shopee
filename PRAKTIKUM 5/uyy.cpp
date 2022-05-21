#include <iostream>
using namespace std;

void cetak(int f){
	if(f<=4)
	cetak(f+1);
	cout<<f<<endl;
}

int main(){
	cout<<"Hasil dengan cara menggunakan rekursif : "<<endl;
	cetak(1);
	return 0;
}
