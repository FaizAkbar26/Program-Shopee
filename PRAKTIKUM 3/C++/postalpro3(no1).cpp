#include<iostream>
using namespace std;

int main(){
	float x;
	int y,i;
    int pangkat=1;
        
 	cout<<"MENGHITUNG PANGKAT"<<endl;
	cout<< "============================"<<endl;
 	cout<<"Masukkan X bilangan real  : ";cin>>x;
 	cout<<"Masukkan Y bilangan bulat : ";cin>>y;
 	cout<< "============================"<<endl;
 	
 	for(i=1;i<=y;i++){
 		pangkat*=x;
 	}
 	
 	cout<<x<<" Pangkat "<<y<<" = "<<pangkat;
 	return 0;
}
