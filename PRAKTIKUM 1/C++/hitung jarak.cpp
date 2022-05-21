#include<iostream>
#include<math.h>
using namespace std;

int main{
    int xone,xtwo,yone,ytwo;
    int jarak,A,B;
    cout<<"Masukkkan nilai A (x1) : ";
    cin>>xone;
    cout<<"Masukkkan nilai A (y1) : ";
    cin>>yone;
    cout<<"Masukkkan nilai B (x2) : ";
    cin>>xtwo;
    cout<<"Masukkkan nilai B (y2) : ";
    cin>>ytwo;
    A=(xtwo-xone)*(xtwo-xone);
    B=(ytwo-yone)*(ytwo-yone);
    jarak=sqrt(A+B);
    cout<<endl;
    cout<<"Jarak antara titik A dan B adalah : "<<jarak<<endl;
}