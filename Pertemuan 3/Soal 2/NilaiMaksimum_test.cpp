#include <iostream>
#include <fstream>
#include <typeinfo>
using namespace std;

int main(){
	double bilangan_1, bilangan_2, bilangan_3, bilangan_terbesar;
	ifstream infile;
    infile.open("testcase.txt");
    while(infile.is_open()){
        infile >> bilangan_1 >> bilangan_2 >> bilangan_3;
        if (bilangan_1 == 0) {
            break;
            infile.close();
        }
        cout << "Input bilangan 1: " << bilangan_1 << " Input bilangan 2: " << bilangan_2 << " Input bilangan 3: " << bilangan_3 << endl;
	if ((bilangan_1 > bilangan_2 && bilangan_2 > bilangan_3) || (bilangan_1 > bilangan_3 && bilangan_3 > bilangan_2)){
		cout << "Bilangan terbesar adalah "<<bilangan_1;
	} else if ((bilangan_2 > bilangan_1 && bilangan_1 > bilangan_3) || (bilangan_2 > bilangan_3 && bilangan_3 > bilangan_1)){
		cout << "Bilangan terbesar adalah " <<bilangan_2;
	} else if ((bilangan_3 > bilangan_1 && bilangan_1 > bilangan_2) || (bilangan_3 > bilangan_2 && bilangan_2 > bilangan_1)){
		cout << "Bilangan terbesar adalah " <<bilangan_3;
	}
    }
	return 0;
}