#include <iostream>
using namespace std;

int main(){
	int bilangan_1, bilangan_2, bilangan_3, bilangan_terbesar;
	cout << "Inputkan Bilangan 1: "<<"\n";
	cin >> bilangan_1;
	cout << "Inputkan Bilangan 2: "<<"\n";
	cin >> bilangan_2;
	cout << "Inputkan Bilangan 3: "<<"\n";
	cin >> bilangan_3;
	
	
	if ((bilangan_1 > bilangan_2 && bilangan_2 > bilangan_3) || (bilangan_1 > bilangan_3 && bilangan_3 > bilangan_2)){
		cout << "Bilangan terbesar adalah "<<bilangan_1;
	} else if ((bilangan_2 > bilangan_1 && bilangan_1 > bilangan_3) || (bilangan_2 > bilangan_3 && bilangan_3 > bilangan_1)){
		cout << "Bilangan terbesar adalah " <<bilangan_2;
	} else if ((bilangan_3 > bilangan_1 && bilangan_1 > bilangan_2) || (bilangan_3 > bilangan_2 && bilangan_2 > bilangan_1)){
		cout << "Bilangan terbesar adalah " <<bilangan_3;
	}
	
	return 0;
}