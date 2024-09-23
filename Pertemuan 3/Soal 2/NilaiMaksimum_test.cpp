#include <iostream>
#include <fstream>
#include <typeinfo>
#include <algorithm>
using namespace std;

int main(){
	int bilangan_1, bilangan_2, bilangan_3, bilangan_terbesar;
	ifstream infile;
    infile.open("testcase.txt");  
    if(infile.is_open()){
		while(infile >> bilangan_1 >> bilangan_2 >> bilangan_3){
			cout << "Input bilangan 1: " << bilangan_1 << " Input bilangan 2: " << bilangan_2 << " Input bilangan 3: " << bilangan_3 << endl;
		if ((bilangan_1 > bilangan_2 && bilangan_2 > bilangan_3) || (bilangan_1 > bilangan_3 && bilangan_3 > bilangan_2)){
		cout << "Bilangan terbesar adalah "<<bilangan_1 << endl;
	} else if ((bilangan_2 > bilangan_1 && bilangan_1 > bilangan_3) || (bilangan_2 > bilangan_3 && bilangan_3 > bilangan_1)){
		cout << "Bilangan terbesar adalah " <<bilangan_2 << endl;
	} else if ((bilangan_3 > bilangan_1 && bilangan_1 > bilangan_2) || (bilangan_3 > bilangan_2 && bilangan_2 > bilangan_1)){
		cout << "Bilangan terbesar adalah " <<bilangan_3 << endl;
	}
	}
    }
	return 0;
}