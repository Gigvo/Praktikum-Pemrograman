#include <iostream>
using namespace std;

int main(){
	struct barang {
	int kode_barang, harga_barang, jumlah_barang;
	string nama_barang;
	};
	int n, jumlahtotal = 0;
	float harga_ratarata = 0, harga = 0;
	cout << "Input Jumlah Jenis Barang (Maksimal 50): ";
	cin >> n;
	barang barangCount[n];
	if (n <= 50 && n > 0){
		for (int i = 0; i < n; i++){
		cout << "Input Kode Barang: ";
		cin >> barangCount[i].kode_barang;
		cout << "Input Nama Barang: ";
		cin >> barangCount[i].nama_barang;
		cout << "Input Harga Barang: ";
		cin >> barangCount[i].harga_barang;
		cout << "Input Jumlah Barang: ";
		cin >> barangCount[i].jumlah_barang;
		cout << endl;
		}
	}
	else{
		cout << "Jumlah barang melebihi batas!" << endl;
		return 0;
	}
	
	for (int i = 0; i < n; i++){
		harga += (barangCount[i].harga_barang * barangCount[i].jumlah_barang);
		jumlahtotal += barangCount[i].jumlah_barang;
	}
	harga_ratarata = harga/jumlahtotal;
	cout << "Jumlah Total Barang: " << jumlahtotal << endl;
	cout << "Harga Rata-Rata: " << harga_ratarata;
}