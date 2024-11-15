#include <iostream>
using namespace std;

double sum(int n) {
    if (n == 0) {
        return 0; 
    }
    double num;
    cout << "Masukkan angka ke-" << n << ": ";
    cin >> num;
    return num + sum(n - 1); 
}

int main() {
    int n;
    cout << "Berapa banyak angka yang ingin dihitung rata-ratanya? ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah angka harus lebih dari 0!" << endl;
        return 1;
    }

    double total = sum(n);
    double average = total / n;

    cout << "Rata-rata dari " << n << " angka adalah: " << average << endl;

    return 0;
}
