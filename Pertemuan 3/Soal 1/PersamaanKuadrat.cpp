#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b,c,D;
	cout<<"Input coefficient a: "<<"\n";
	cin>>a;
	cout<<"Input coefficient b: "<<"\n";
	cin>>b;
	cout<<"Input coefficient c: "<<"\n";
	cin>>c;
	
	D = (b*b) - 4*a*c;
	cout<<"Nilai Determinan: "<<D<<"\n";
	if (D>0){
		double x1, x2;
	 	x1 = (-b + sqrt((b*b) - 4*a*c)) / (2*a);
	 	x2 = (-b - sqrt((b*b) - 4*a*c)) / (2*a);
	 	cout << "Akar pertama: " << x1 << "\n";
	 	cout << "Akar kedua: " << x2 << "\n";
	} else if (D==0){
		double x;
	 	x = (-b) / (2*a);
	 	cout << "Hasil akar: "<< x << "\n";
	} else if (D<0){
	 	cout << "Tidak ada akar nyata (akarnya kompleks)";
	}
	 	
}
