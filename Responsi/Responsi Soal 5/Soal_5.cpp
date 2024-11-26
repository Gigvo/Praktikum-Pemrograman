#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Input String yang akan di cek" << endl;
    getline(cin, input);
    string temp;
    temp = input;
    int n = input.length();
    for (int i = 0; i < n; i++) {
        input[i] = temp[n - i - 1];
    }
    if (input == temp) {
        cout << input << " adalah Palindrom" << endl;
    }
    else {
        cout << input << " Bukan Palindrom" << endl;
    }
}