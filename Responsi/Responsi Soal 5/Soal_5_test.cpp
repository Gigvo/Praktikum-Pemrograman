#include <iostream>
using namespace std;

void palindrom(string input) {
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

int main() {
    // TESTCASE 1
    cout << "TESTCASE 1" << endl;
    string input1 = "kasur rusak";
    cout << input1 << endl;
    palindrom(input1);
    cout << endl;

    // TESTCASE 2
    cout << "TESTCASE 2" << endl;
    string input2 = "taat";
    cout << input2 << endl;
    palindrom(input2);
    cout << endl;

    // TESTCASE 3
    cout << "TESTCASE 3" << endl;
    string input3 = "ayam goreng";
    cout << input3 << endl;
    palindrom(input3);
    cout << endl;

    // TESTCASE 4
    cout << "TESTCASE 4" << endl;
    string input4 = "ada";
    cout << input4 << endl;
    palindrom(input4);
    cout << endl;

    cout << "TESTCASE 5" << endl;
    string input5 = "kursi kayu";
    cout << input5 << endl;
    palindrom(input5);
    cout << endl;
}