#include"hehe.h"

Hitung::Hitung() {
	cout << "Program menghitung jarak antar dua titik\n";
}

istream& operator>>(istream& in, Hitung& masukan) {
	cout << "Masukkan nilai a : ";
	in >> masukan.a;
	cout << "Masukkan nilai b : ";
	in >> masukan.b;
	return in;
}

ostream& operator<<(ostream& out, const Hitung& keluaran) {
 	out << "Nilai a : " << keluaran.a << endl;
 	out << "Nilai b : " << keluaran.b << endl;
 	out << "Jarak antar dua : " << keluaran.jr<< endl;
 	return out;
}
