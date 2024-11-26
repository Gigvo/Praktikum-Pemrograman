#include <iostream>
using namespace std;

int main() {
    int bilangan[] = {1, 2, 7, 8, 9};
    int largest, secondLargest;
    largest = bilangan[0];
    secondLargest = bilangan[1];
    int n = sizeof(bilangan)/sizeof(bilangan[0]);
    cout << "Angka pada daftar: ";
    for (int i = 0; i < n; i++) {
        cout << bilangan[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (bilangan[i] > largest) {
            secondLargest = largest;
            largest = bilangan[i];
        }
        else if (bilangan[i] < largest && bilangan[i] > secondLargest) {
            secondLargest = bilangan[i];
        }
    }
    cout << "Angka yang terbesar kedua dari daftar diatas adalah " << secondLargest << endl;


}