#include<iostream>
#include<math.h>
#include"hehe.h"
using namespace std;

main(){
    int xone,xtwo,yone,ytwo;
    float jarak,px,py;
    cout<<"Masukkkan titik A1 (x1) : ";
    cin>>xone;
    cout<<"Masukkkan titik A2 (y1) : ";
    cin>>yone;
    cout<<"Masukkkan titik B1 (x2) : ";
    cin>>xtwo;
    cout<<"Masukkkan titik B2 (y2) : ";
    cin>>ytwo;	
    px=(xtwo-xone)*(xtwo-xone);
    py=(ytwo-yone)*(ytwo-yone);
    jarak=sqrt(px+py);
    cout<<endl;
    cout<<"Jarak antar dua titik adalah : "<<jarak<<endl;
    cout<<"Hasil jarak antar dua titik fungsi adalah : ";
	hitung_jr(px,py);
}
