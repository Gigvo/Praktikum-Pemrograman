#include <iostream>
#include <fstream>
using namespace std;

int main(){
	struct barang {
	int kode_barang, harga_barang, jumlah_barang;
	string nama_barang;
	};
	int n, jumlahtotal = 0;
	int expected_jumlah_barang;
	int harga_ratarata = 0, harga = 0, expected_harga_ratarata;
	int testcase = 1;
	ifstream infile;
    infile.open("test.txt");

    if (infile.is_open()){
        while(infile >> n){
			cout << "TESTCASE " << testcase << endl;
        	barang barangCount[n];
        	if (n <= 50 && n > 0){
		    	for (int i = 0; i < n; i++){
		    	infile >> barangCount[i].kode_barang >> barangCount[i].nama_barang >> barangCount[i].harga_barang >> barangCount[i].jumlah_barang;		
			}
			}
	    	else{
		    	cout << "Jumlah barang melebihi batas!" << endl;
		    	return 0;
			}
			infile >> expected_jumlah_barang;
			infile >> expected_harga_ratarata;
			for (int i = 0; i < n; i++){
				cout << barangCount[i].kode_barang << endl;
				cout << barangCount[i].nama_barang << endl;
				cout << barangCount[i].harga_barang << endl;
				cout << barangCount[i].jumlah_barang << endl;
				cout << endl;
			}
			for (int i = 0; i < n; i++){
				harga += (barangCount[i].harga_barang * barangCount[i].jumlah_barang);
				jumlahtotal += barangCount[i].jumlah_barang;
			}
			harga_ratarata = harga/jumlahtotal;
			cout << "Expected Output Jumlah Total Barang: " << expected_jumlah_barang << endl;
			cout << "Expected Output Harga Rata-Rata Barang: " << expected_harga_ratarata << endl;
			cout << "Jumlah Total Barang: " << jumlahtotal << endl;
			cout << "Harga Rata-Rata: " << harga_ratarata << endl;
			if (jumlahtotal == expected_jumlah_barang && harga_ratarata == expected_harga_ratarata){
				cout << "Program sesuai dengan expected output";
			} else {
				cout << "Program tidak sesuai dengan expected output" << endl;
			}
			harga_ratarata = 0;
			jumlahtotal = 0;
			harga = 0;
			cout << endl << endl;
			testcase++;
		}
	}
}