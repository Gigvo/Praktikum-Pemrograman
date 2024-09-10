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
	
	D = pow(b,2.0) - (4*a*c);
	if (D>0){
		double x1, x2;
	 	x1 = ((b*(-1)) + sqrt(D)) / 2*a;
	 	x2 = ((b*(-1)) - sqrt(D)) / 2*a;
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

/* TEST CASES
INPUT:
Input coefficient a: 1
Input coefficient b: 3
Input coefficient c: 2
OUTPUT:
Akar pertama: -1
Akar kedua: -2

INPUT:
Input coefficient a: 1
Input coefficient b: -1
Input coefficient c: -6
OUTPUT:
Akar pertama: 3
Akar kedua: -2

INPUT:
Input coefficient a: 10
Input coefficient b: 10
Input coefficient c: 2.5
OUTPUT:
Hasil akar: -0.5

INPUT:
Input coefficient a: 10
Input coefficient b: 1
Input coefficient c: 10
OUTPUT:
Tidak ada akar nyata (akarnya kompleks)
*/