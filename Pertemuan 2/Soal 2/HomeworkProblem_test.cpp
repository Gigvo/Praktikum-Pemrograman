#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
	double a,b,c,D;
	ifstream infile;
    infile.open("testcase.txt");
    if (infile.is_open()){
        while (infile >> a >> b >> c){
            cout << "Input A: " << a << " Input B: " << b << " Input C: " << endl; 
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
	 	    cout << "Tidak ada akar nyata (akarnya kompleks)" << endl;
	    }
    cout << endl;
        }
    
    }
	
	
	 	
}