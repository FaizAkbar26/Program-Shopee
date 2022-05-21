#include <iostream>
using namespace std;
class Operator {
public:
	long pengeluaran(int n);

private:
	int n,uang,bjl,sisa;
 };
 
 long Operator::pengeluaran(int n){
int blj;
cout<<"Uang Jajan : ";cin>>blj;
sisa=n-blj;
return sisa;
}

main(){
	Operator x;
 	int n,blj,sisa,uang;
 	cout<<"Uang Saku : ";
 	cin>>n;
 	cout<<"Total Pengeluaran: "<<x.pengeluaran(n);
 }
