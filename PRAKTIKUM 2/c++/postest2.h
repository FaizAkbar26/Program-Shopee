#include <iostream>
using namespace std;

tahun_kabisat(int t){
    if (t%400 == 0){
    	cout <<"Tahun "<< t << " Merupakan Tahun Kabisat\n";
 	} 
	else if(t%100 == 0){
    	cout <<"Tahun "<< t << " Bukan Tahun Kabisat\n";
  	} 
	else if(t%4 == 0){
    	cout <<"Tahun "<< t << " Merupakan Tahun Kabisat\n";
  	} 
	else {
    	cout <<"Tahun "<< t << " Bukan Tahun kabisat\n";
  	}
    cout<<endl;
    return 0;
}
