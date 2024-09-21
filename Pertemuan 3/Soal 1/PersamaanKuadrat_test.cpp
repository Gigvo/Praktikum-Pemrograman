#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
	double a,b,c,D;
	ifstream infile;
    infile.open("testcase.txt");
	while(infile.is_open()){
        infile >> a >> b >> c;
        if (a == 0) {
            break;
            infile.close();
        }
        cout << "Input a = " << a << " Input b = " << b << " Input c = " << c << endl;
        D = pow(b,2.0) - (4*a*c);
	    cout<<"Nilai Determinan: "<<D<<"\n";
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
	
	 	
}