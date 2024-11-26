#include <iostream>
using namespace std;

void testcase1() {
    int bilangan[] = {1, 2, 7, 8, 9};
    int largest, secondLargest;
    largest = bilangan[0];
    secondLargest = bilangan[1];
    int n = sizeof(bilangan)/sizeof(bilangan[0]);
    for (int i = 0; i < n; i++) {
        if (bilangan[i] > largest) {
            secondLargest = largest;
            largest = bilangan[i];
        }
        else if (bilangan[i] < largest && bilangan[i] > secondLargest) {
            secondLargest = bilangan[i];
        }
    }
    cout << secondLargest << endl;
}

void testcase2() {
    int bilangan[] = {3, 5, 0, 27, 11};
    int largest, secondLargest;
    largest = bilangan[0];
    secondLargest = bilangan[1];
    int n = sizeof(bilangan)/sizeof(bilangan[0]);
    for (int i = 0; i < n; i++) {
        if (bilangan[i] > largest) {
            secondLargest = largest;
            largest = bilangan[i];
        }
        else if (bilangan[i] < largest && bilangan[i] > secondLargest) {
            secondLargest = bilangan[i];
        }
    }
    cout << secondLargest << endl;
}

void testcase3() {
    int bilangan[] = {2, 6, 15, 4, 9, 10, 17};
    int largest, secondLargest;
    largest = bilangan[0];
    secondLargest = bilangan[1];
    int n = sizeof(bilangan)/sizeof(bilangan[0]);
    for (int i = 0; i < n; i++) {
        if (bilangan[i] > largest) {
            secondLargest = largest;
            largest = bilangan[i];
        }
        else if (bilangan[i] < largest && bilangan[i] > secondLargest) {
            secondLargest = bilangan[i];
        }
    }
    cout << secondLargest << endl;
}

void testcase4() {
    int bilangan[] = {1, 0, 2, 3};
    int largest, secondLargest;
    largest = bilangan[0];
    secondLargest = bilangan[1];
    int n = sizeof(bilangan)/sizeof(bilangan[0]);
    for (int i = 0; i < n; i++) {
        if (bilangan[i] > largest) {
            secondLargest = largest;
            largest = bilangan[i];
        }
        else if (bilangan[i] < largest && bilangan[i] > secondLargest) {
            secondLargest = bilangan[i];
        }
    }
    cout << secondLargest << endl;
}

void testcase5() {
    int bilangan[] = {2, 1, 19, 4, 3, 11, 16, 90, 75};
    int largest, secondLargest;
    largest = bilangan[0];
    secondLargest = bilangan[1];
    int n = sizeof(bilangan)/sizeof(bilangan[0]);
    for (int i = 0; i < n; i++) {
        if (bilangan[i] > largest) {
            secondLargest = largest;
            largest = bilangan[i];
        }
        else if (bilangan[i] < largest && bilangan[i] > secondLargest) {
            secondLargest = bilangan[i];
        }
    }
    cout << secondLargest << endl;
}
int main() {
    cout << "TESTCASE 1" << endl;
    testcase1();
    cout << endl;
    cout << "TESTCASE 2" << endl;
    testcase2();
    cout << endl;
    cout << "TESTCASE 3" << endl;
    testcase3();
    cout << endl;
    cout << "TESTCASE 4" << endl;
    testcase4();
    cout << endl;
    cout << "TESTCASE 5" << endl;
    testcase5();
}